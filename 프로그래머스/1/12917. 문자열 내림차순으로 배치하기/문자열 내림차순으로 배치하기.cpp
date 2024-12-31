#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int temp = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = i + 1; j < s.size(); j++){
           if(s[i] < s[j]){
                temp = s[i]; s[i] = s[j]; s[j] = temp;
           }
        }
    }
    
    for(int l = 0; l < s.size(); l++){
        answer += s[l];
    }
    return answer;
}