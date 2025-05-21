#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <cmath>
#include <set>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    set<int> carNum;
    unordered_map<int,int> inTime;
    unordered_map<int,int> pTime;
    
    for(string s : records)
    {
        int hour, minute, num, totTime;
        string io;
        stringstream ss(s);
        ss >> hour;
        ss.ignore(1);
        ss >> minute >> num >> io;
        
        totTime = (hour*60) + minute;
       
        if(io == "IN")
        {
            inTime[num] = totTime;
            carNum.insert(num);
        }
        else
        {
            pTime[num] += totTime - inTime[num];
            inTime.erase(num);
        }     
    }
    
    if(!inTime.empty())
    {
        for(const auto& [k, v] : inTime)
        {
            pTime[k] += 1439 - inTime[k];
        }
    }
        
    for(int num : carNum)
    {
        if(pTime[num] > fees[0])
        {
            int feeTime = ceil(((double)(pTime[num]-fees[0]) / fees[2]));
            int finalFee = fees[1] + feeTime * fees[3];
            answer.push_back(finalFee);
        }
        else
        {
            answer.push_back(fees[1]);
        }
    }
    
    return answer;
}