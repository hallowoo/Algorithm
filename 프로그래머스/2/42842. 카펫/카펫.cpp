#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for(int i = 1; i <= yellow; i++)
    {
        if(yellow%i == 0)
        {
            int j = yellow/i;
            if(brown == (i*2) + (j*2) + 4)
            {
                i > j ? answer.push_back(i+2) : answer.push_back(j+2);
                i < j ? answer.push_back(i+2) : answer.push_back(j+2);
                break;
            }
        }
    }
    
    
    return answer;
}