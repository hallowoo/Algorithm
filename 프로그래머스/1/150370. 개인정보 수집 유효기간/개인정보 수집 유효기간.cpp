#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> term;
    int todayY = stoi(today.substr(2, 2));
    int todayM = stoi(today.substr(5, 2));
    int todayD = stoi(today.substr(8, 2));
    
    
    for(string s : terms)
    {
        term[s[0]] = stoi(s.substr(2));
    }
    
    for(int i = 0; i < privacies.size(); i++)
    {
        int privY = stoi(privacies[i].substr(2, 2));
        int privM = stoi(privacies[i].substr(5, 2));
        int privD = stoi(privacies[i].substr(8, 2));
        char termAl = privacies[i][11];
        
        
        
        int expM = privM + term[termAl];
        int expY = privY;        
        int expD = privD - 1;
        
        
        
        if(expM > 12)
        {
            expY = privY + (expM - 1)/12;
            expM = (expM - 1)%12 + 1;   
        }
        
        if(expD == 0)
        {
            if(expM - 1 == 2)
            {
                expD = 28;
                expM -= 1;
            }
            else
            {
                expD = 29;
                expM -= 1;
            }
        }
        
        if(expM == 0)
        {
            expM = 12;
        }
        
        if(expY < todayY)
        {
            answer.push_back(i+1);
        }
        else if(expY == todayY && expM < todayM)
        {
            answer.push_back(i+1);
        }
        else if(expY == todayY && expM == todayM)
        {
            if(expD < todayD)
            {
                answer.push_back(i+1);
            }
        }    
    }
    
    return answer;
}