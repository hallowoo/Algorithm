#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int o = 0;   
    
    while(n >= a){
        o = n%a;
        n = ((n)/a)*b;
        answer += n;        
        n += o;
    }
    
    return answer;
}