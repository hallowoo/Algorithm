#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int op = 0;
    int zero = 0;

    while (s != "1") 
    {     
        int ones = count(s.begin(), s.end(), '1');
        zero += s.size() - ones;
       
        string next = "";
        while (ones > 0) 
        {
            next = char('0' + (ones % 2)) + next;
            ones /= 2;
        }
        s = next;

        op++;
    }

    answer.push_back(op);
    answer.push_back(zero);
    return answer;
}