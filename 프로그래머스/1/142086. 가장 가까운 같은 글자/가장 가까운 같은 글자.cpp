#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    answer.push_back(-1);
    bool found = false;        
    for(int i = 1; i < s.size() ; i++){int j = i - 1; found = false;
        while(found == false && j >= 0){
            if(s[i] == s[j]){answer.push_back(i-j);found = true;}
            else{j--;}
        }if(found == false){answer.push_back(-1);}
    }
    
    return answer;
}