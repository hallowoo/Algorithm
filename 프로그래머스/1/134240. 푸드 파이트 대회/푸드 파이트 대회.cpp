#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int i = 1; i < food.size(); i++){
        if(food[i] >1){
            for(int j = 1 ; j <= (int)food[i]/2; j++ ){
                answer += to_string(i);                
            }
        }
    }
    string revAnswer = answer;
    reverse(revAnswer.begin(), revAnswer.end());
    answer = answer + '0';
    answer = answer + revAnswer;
    
    return answer;
}