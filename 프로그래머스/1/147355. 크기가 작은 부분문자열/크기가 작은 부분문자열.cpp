#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string s = "";
    for(int i = 0; i < t.size()-p.size()+1; i ++){s = "";
        for(int j = 0; j < p.size(); j++){
            s += t[j+i];            
        }if(stoll(s) <= stoll(p)){answer++;}
    }
        
    return answer;
}