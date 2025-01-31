#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    vector<int>num;
    int i = 0;
    
    while(ss >> i)
    {
        num.push_back(i);
    }
    
    int max = *max_element(num.begin(), num.end());
    int min = *min_element(num.begin(), num.end());
    
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);
    
    return answer;
}