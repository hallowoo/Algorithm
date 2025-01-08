#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer,stA,stB,stC,won;
    
    stA = {1,2,3,4,5};
    stB = {2,1,2,3,2,4,2,5};
    stC = {3,3,1,1,2,2,4,4,5,5};
    int stACnt = 0;
    int stBCnt = 0;
    int stCCnt = 0;   
    
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == stA[i%5]){stACnt++;}
        if(answers[i] == stB[i%8]){stBCnt++;}
        if(answers[i] == stC[i%10]){stCCnt++;}        
    }
    
    int high = max({stACnt,stBCnt,stCCnt});
    if(high == stACnt){answer.push_back(1);}
    if(high == stBCnt){answer.push_back(2);}
    if(high == stCCnt){answer.push_back(3);}           
    
    return answer;
}