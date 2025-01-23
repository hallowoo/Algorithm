#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> name;
    map<int, string> rank;
    
    for(int i = 0; i < players.size(); i++)
    {
        name[players[i]] = i;
        rank[i] = players[i];
    }
    
    for(string s : callings)
    {
        int r = -1;
        string fP = "";
        r = name[s];
        fP = rank[r-1];
        swap(name[s], name[fP]);
        swap(rank[r], rank[r-1]);
    }
    
    for(int i = 0; i < rank.size(); i++)
    {
        answer.push_back(rank[i]);
    }
    
    return answer;
}