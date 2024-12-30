#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int a = s.size()/2;
    if(s.size()%2 == 0){
       answer = string(1,s[a-1]) + string(1,s[a]);
    }
    else { answer = s[a];}
    
    return answer;
}