#include <string>
#include <vector>
#include <set>
#include <sstream>
#include <map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string,int>r_id;
    map<string,int>u_id;
    set<string>l;
    string u;
    string r;    
    
    for(string s : report)
    {
        l.insert(s);
    }
    
    for(string s : l)
    {
        stringstream ss(s);
        ss >> u >> r;

        r_id[r]++;        
    }
    
    for(string s : l)
    {
        stringstream ss(s);
        ss >> u >> r;
        
        if(r_id[r] >= k)
        {
            u_id[u]++;
        }
    }
    
    for(string s :id_list)
    {
       answer.push_back(u_id[s]);
    }
    
    return answer;
}