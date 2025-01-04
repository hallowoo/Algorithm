#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int c = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 32){
            c = 0;
        }
        else{
            if(c%2 == 1 && s[i] < 95){s[i] += 32;}
            else if(c%2 == 0 && s[i] > 95){s[i] -=32;}
            c++;
        }
               
    }
    answer = s;
    return answer;
}