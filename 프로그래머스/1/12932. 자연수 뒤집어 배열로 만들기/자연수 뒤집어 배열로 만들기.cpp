#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
     
    string s = to_string(n);
    int a = s.size();
    vector<int>answer(a);
    
    for(int i = 0; i <= a-1; i++){
        answer[i] = (s[a - 1 - i] -'0');
    }
    
    return answer;
}