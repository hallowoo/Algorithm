#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 1;    
    
    for(int i = 2; i <= number; i++){
        int cnt = 2;
        for(int j = 2; j <= i/2; j++){
            if(i%j == 0){cnt++;}
        }
        if(cnt > limit){cnt = power;}
        answer += cnt;
    }
    return answer;
}