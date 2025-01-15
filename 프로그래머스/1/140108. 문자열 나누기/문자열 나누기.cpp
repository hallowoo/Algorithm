#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x = s[0];
    int xn = 0;
    int nx = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(x == s[i])
        {
            xn++;
        }
        else if(x != s[i])
        {
            nx++;
        }
        if(xn == nx)
        {
            answer++;
            if(i + 1 < s.size())
            {
                x = s[i+1];
            }
        }
        else if(i + 1 == s.size())
        {
            answer++;
        }
    }
    
    return answer;
}