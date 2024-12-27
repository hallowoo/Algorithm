#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int c = min(a,b);
    int d = max(a,b);
        
    if( a != b){
        for(int i = c ; i <= d; i++){
            answer += i;
        }
    }
    if( a == b ){answer= a;}
    return answer;
}