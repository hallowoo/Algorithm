#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int j = section[0] + m - 1;
  
    if(section[section.size()-1] - m <= 0){
        return 1;
    }
    for(int i = 0; i < section.size(); i++){        
        if(section[i] > j){
            j = section[i] + m - 1;
            answer++;
        }        
    }
    
    return answer;
}