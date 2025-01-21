#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int lux = 51;
    int luy = 51;
    int rdx = 0;
    int rdy = 0;
    
    for(int i = 0; i < wallpaper.size(); i++)
    {
        if(find(wallpaper[i].begin(), wallpaper[i].end(), '#') != wallpaper[i].end())
        {
            int j = 0;
            lux = min(i, lux);            
            rdx = max(i + 1, rdx);
            while(find(wallpaper[i].begin() + j, wallpaper[i].end(), '#') != wallpaper[i].end())
            {
                int findY = find(wallpaper[i].begin() + j, wallpaper[i].end(), '#') - wallpaper[i].begin();
                luy = min(findY, luy);
                rdy = max(findY + 1,rdy);
                j = findY + 1;
            }
        }
        
    }
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
        
    return answer;
}