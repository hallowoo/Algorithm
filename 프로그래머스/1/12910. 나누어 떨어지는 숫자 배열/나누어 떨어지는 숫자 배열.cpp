#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int l = 0;
    int count = 0;
    for(int i=0; i < arr.size(); i++){
        if( arr[i] % divisor == 0){count++, answer.push_back(arr[i]);}
    }
    if(count == 0){answer.push_back(-1);}
    if(count != 0)
    {    for(int j = 0; j < answer.size(); j++){
        for(int k = j + 1; k < answer.size(); k++){
            if(answer[j] > answer[k]){
                l = answer[j];
                answer[j] = answer[k];
                answer[k] = l;
            }
        }
    }
    }
    return answer;
}