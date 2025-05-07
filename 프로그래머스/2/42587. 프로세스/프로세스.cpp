#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int idx = location;
    
    while (!priorities.empty()) {
        int maxPri = *max_element(priorities.begin(), priorities.end());
        
        if (priorities.front() < maxPri) {
            priorities.push_back(priorities.front());
            priorities.erase(priorities.begin());
            
            if (idx == 0) 
                idx = priorities.size() - 1;
            else 
                --idx;
        }
        else {
            ++answer;
            priorities.erase(priorities.begin());
            
            if (idx == 0) 
                return answer;
            else 
                --idx;
        }
    }
    
    return answer;
}
