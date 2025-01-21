#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<string>surveyType = {"RT", "TR", "FC", "CF", "MJ", "JM", "AN", "NA"};
    unordered_map<string,int>score;
        
    for(string s : surveyType)
    {
        score[s] = 0;
    }
    
    for(int i = 0; i < survey.size(); i++)
    {
        int count = choices[i] - 4;
        score[survey[i]] += count;
    }
    
    for(int i = 0; i < surveyType.size(); i += 2)
    {
        if(score[surveyType[i]] - score[surveyType[i+1]] == 0)
        {
            answer += min(surveyType[i][0], surveyType[i][1]);
        }
        else if(score[surveyType[i]] - score[surveyType[i+1]] < 0)
        {
            answer += surveyType[i][0];
        }
        else if(score[surveyType[i]] - score[surveyType[i+1]] > 0)
        {
            answer += surveyType[i][1];
        }
    }
    
    return answer;
}