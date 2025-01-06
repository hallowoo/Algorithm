#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 32){answer += s[i];}
        else if(s[i] < 91 && s[i] + n > 90){answer += (s[i] - 26 + n);}        
        else {s[i] + n > 122 ? answer += (s[i] - 26 + n) : answer += (s[i] + n);}       
    }
    return answer;
}