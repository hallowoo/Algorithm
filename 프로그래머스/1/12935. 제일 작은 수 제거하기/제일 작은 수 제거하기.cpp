#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size() <= 1){return {-1};}
   
    else{
    int minValue = arr[0];
    for(int i = 0;i < arr.size(); i++) {
        if(minValue >= arr[i]){minValue = arr[i];}
    }
    for(int j = 0 ; j < arr.size(); j++ ){
        if(arr[j] != minValue){answer.push_back(arr[j]);            
        }
    }
    }
    return answer;
}