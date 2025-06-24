#include <string>
#include <vector>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    int nowIndex = 0;
    vector<int> sub = {0};
    
    for(int i = 1; i <= order.size() + 1;)
    {
        if(nowIndex >= order.size())
        {
             break;
        }
        
        int now = order[nowIndex];
        
        if(now == i)
        {
            answer++;
            nowIndex++;
            i++;
        }
        
        else if(now == sub[sub.size()-1])
        {
            answer++;
            nowIndex++;
            sub.pop_back();
        }
        
        else
        {
            sub.push_back(i);
            i++;
        }
    }
    
    
    return answer;
}