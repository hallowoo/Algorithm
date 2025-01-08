#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.rbegin(), score.rend());    
    int p = 0;
    
    for(int i = 0; i < score.size(); i += m){
        if( i + m <= score.size()){
            p = *min_element(score.begin() + i, score.begin() + i + m);
            answer += p*m;           
        }
    }        
    
    return answer;
}