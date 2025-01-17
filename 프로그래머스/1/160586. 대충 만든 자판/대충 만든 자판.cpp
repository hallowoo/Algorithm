#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char,int> minIndex;
    
    for(string ks : keymap)
    {
        for(int i = 0; i < ks.size(); i++)
        {
            char kc = ks[i];
            if(minIndex.find(kc) == minIndex.end() || minIndex[kc] > (i + 1) )
            {
                minIndex[kc] = (i + 1); 
            }
        }
    }
    
    
    for(string ts : targets)
    {
        int index = 0;
        bool isMatch = true;
        for(int i = 0; i < ts.size(); i++)
        {
            
            char tc = ts[i];
            if(minIndex.find(tc) == minIndex.end())
            {
                isMatch = false;
                break;
            }
            index += minIndex[tc]; 
        }
    answer.push_back(isMatch ? index : -1);
    }
    return answer;
}