#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string s = "";
    int pos = 0;
    
    for(int i : ingredient)
    {
        s += (i + '0');
    }
    
    while((pos = s.find("1231", pos)) != string::npos)
    {
        if(s.find("2311") != string::npos && s.find("2311") == pos + 4)
        {
            s.erase(pos + 3 , 4);            
        }
        else
        {
            s.erase(pos , 4);            
        }
        answer++;
        pos = max(pos - 3 , 0);
    }
    

    
    return answer;
}