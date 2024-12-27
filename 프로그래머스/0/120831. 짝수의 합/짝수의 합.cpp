#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;  

    for(int e = 2; e <= n; e++){
        if(e%2==0){answer += e;}
    }
    return answer;
}