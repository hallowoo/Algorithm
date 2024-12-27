#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n); 
    vector<int>k;
    
    for(int h =0; h < s.size(); h++){
        k.push_back(s[h]-'0');    
    }
    
    int a = k.size();
    int b = 0;
    
    for(int i = 0; i < a; i++){
        for(int j = i + 1; j < a; j++){
            if(k[i] < k[j]){
                b = k[i]; 
                k[i] = k[j];
                k[j] = b;
            };
        };       
    }
    
    string l = "";
        for(int p : k){
            l += to_string(p);
        }
    
    answer = stoll(l);
    return answer;
}