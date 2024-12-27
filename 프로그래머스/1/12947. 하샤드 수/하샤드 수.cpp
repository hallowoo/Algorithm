#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string s = to_string(x);
    vector<int>vec;
    for(char c : s){
        vec.push_back(c-'0');
    }
    int a = 0;
    for(int i = 0; i < vec.size(); i++){
        a += vec[i];
    }
    if(x%a == 0){answer = true; }
    if(x%a != 0){answer = false; }
    
    return answer;
}