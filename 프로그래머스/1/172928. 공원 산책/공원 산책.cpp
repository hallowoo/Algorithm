#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    vector<int> pos; 
    
    for(int i = 0; i < park.size(); i ++)
    {
        int idx = 0;
        if(find(park[i].begin(), park[i].end(), 'S') != park[i].end())
        {
            idx = find(park[i].begin(), park[i].end(), 'S') - park[i].begin();
            pos.push_back(i);
            pos.push_back(idx);
            break;
        }
    }
    
    for(string s : routes)
    {
        stringstream ss(s);        
        string dr;
        int ds = 0;
        ss >> dr >> ds;
       
        if(dr == "E"|| dr == "W")
        {
            if(dr == "W")
            {
                ds *= -1;
            }
            
            int n = pos[1] + ds;
            int mx = max(pos[1], n);
            int mn = min(pos[1], n);
            
            if(n < 0 || n >= park[0].size())
            {
                continue;
            }
            
            else
            {
                bool IsCan = true;
                for(int i = mn; i <= mx; i++)
                {                    
                    if(park[pos[0]][i] == 'X')
                    {
                        IsCan = false;
                        break;
                    }                    
                }
                                               
                if(IsCan)
                {
                    pos[1] += ds;
                }
            } 
        }
        
        if(dr == "S" || dr == "N")
        {
            if(dr == "N")
            {
                ds *= -1;
            }
            
            int n = pos[0] + ds;
            int mx = max(pos[0], n);
            int mn = min(pos[0], n);
            
            if(n < 0 || n >= park.size())
            {
                continue;
            }
                   
            else
            {
                bool IsCan = true;
                for(int i = mn; i <= mx; i++)
                {                    
                    if(park[i][pos[1]] == 'X')
                    {
                        IsCan = false;
                        break;
                    }                    
                }
                                               
                if(IsCan)
                {
                    pos[0] += ds;
                }
            }
        }
    
    }
    
    answer.push_back(pos[0]);
    answer.push_back(pos[1]);
    
    return answer;
}