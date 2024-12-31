#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int a = right - left + 1;
    int count = 0;
    vector<int>vec(a);
    
    
    for(int i = 0; i < a ; i++){
        vec[i] = left + i;
        for(int j = 1; j <= vec[i]; j++){
            if(vec[i]%j == 0){++count;}               
            }
        if(count%2 == 0){answer += vec[i];}
        else {answer -= vec[i];}
        count=0;
        }
        

    return answer;
}