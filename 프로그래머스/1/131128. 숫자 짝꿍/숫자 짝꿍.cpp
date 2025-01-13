#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int>countX(10,0),countY(10,0);    
    
    for(char x : X)
    {
        countX[x - '0']++;
    }
    
    for(char y : Y)
    {
        countY[y - '0']++;
    }
    
    for(int i = 9; i >= 0; i--)
    {
        int count = min(countX[i],countY[i]);
        answer += string(count,i + '0');
    }
    
    if(answer.size() == 0)
    {
        return "-1";
    };
    
    if(answer[0] == '0')
    {
        return "0";
    };
    
    return answer;
}