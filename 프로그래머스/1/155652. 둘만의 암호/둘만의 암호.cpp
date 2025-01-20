#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector<char> alphaNum;
    sort(skip.begin(), skip.end(), greater<char>());
    
    for(int i = 0; i < 26; i++)
    {
        char al = 'a' + i;
        alphaNum.push_back(al);
    }
    
    for(char c : skip)
    { 
        int skipIndex = find(alphaNum.begin(), alphaNum.end(), c) - alphaNum.begin();
        alphaNum.erase(alphaNum.begin()+skipIndex);
    }
    
    for(char c : s)
    {
        char findIndex = find(alphaNum.begin(), alphaNum.end(), c) - alphaNum.begin();
        
        findIndex + index < alphaNum.end() - alphaNum.begin() ? 
            answer += alphaNum[findIndex + index] : answer += alphaNum[(findIndex + index) % alphaNum.size()];
    }
        
    return answer;
}