#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    
    for(int i = 0; i < progresses.size(); i++)
    {
        int day = (99 - progresses[i] + speeds[i]) / speeds[i];
        days.push_back(day);
    }
    
    int startDay = days[0];
    int cnt = 1;
    
    for(int i = 1; i < progresses.size(); i++)
    {
        if(days[i] <= startDay)
        {
            cnt++;
        }
        
        else
        {
            answer.push_back(cnt);
            cnt = 1;
            startDay = days[i];
        }
    }
    
    answer.push_back(cnt);
    
    return answer;
}