#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> kind;
    int mlt = 1;
    
    for(int i = 0; i < clothes.size(); i++)
    {
        kind[clothes[i][1]]++;
    }
    
    if(kind.size() > 1)
    {
        for(auto& pair : kind)
        {
            pair.second++;
            mlt *= pair.second;
        }
        
        answer = mlt - 1;
    }
    
    else
    {
        answer = clothes.size();
    }
    
    return answer;    
}