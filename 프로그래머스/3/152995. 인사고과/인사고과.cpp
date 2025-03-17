#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> scores) {
    int answer = 0;
    int wonsum = scores[0][0] + scores[0][1];
    
    for(int i = 1; i < scores.size(); i++)
    {
        if(scores[i][0] > scores[0][0])
        {
            if(scores[i][1] > scores[0][1])
            {
                return -1;
            }
        }
    }
    
    for(int j = 1; j < scores.size(); j++)
    {
        if(scores[j][0] + scores[j][1] > wonsum)
        {
            bool er = false;

            for(int i = 1; i < scores.size(); i++)
            {
                if(scores[i][0] > scores[j][0] && i != j)
                {
                    if(scores[i][1] > scores[j][1])
                    {                 
                        er = true;               
                    }
                }
            }

            if(!er)
            {
                answer++; 
            }
        }
    }
    
    return answer + 1;
}