#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    answer.push_back(score[0]);
    
    if(k <= score.size()){
        
        for(int i = 1; i < k; i++){
            int l = *min_element(score.begin(), score.begin() + i + 1);
            answer.push_back(l);
        }    
        
        for(int j = k; j < score.size(); j++){
            sort ( score.begin() , score.begin() + j + 1, greater<int>());
            answer.push_back(score[k-1]);
        }
        
    }
    
    else{for(int i = 1; i < score.size(); i++){
            int l = *min_element(score.begin(), score.begin() + i + 1);
            answer.push_back(l);}
         
    }
    
    return answer;
}