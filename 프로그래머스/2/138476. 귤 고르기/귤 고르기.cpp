#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> tangNum;
    vector<int>convt;
    int total = 0;
    
    for(int i : tangerine)
    {
        tangNum[i]++;
    }
    
    for(auto iter : tangNum)
    {
        convt.push_back(iter.second);
    }
    
    sort(convt.begin(), convt.end(), greater());
    
    for(int i = 0; i < convt.size(); i++)
    {
        total += convt[i];
        answer++;
        
        if(total >= k )
        {
            break;
        }
    }
    
    return answer;
}