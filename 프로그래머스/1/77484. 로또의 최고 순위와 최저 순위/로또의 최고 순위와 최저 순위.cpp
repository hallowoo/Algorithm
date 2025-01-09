#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> chart = {6, 6, 5, 4, 3, 2, 1};
    int zrCnt = 0;
    int crrct = 0;
    for(int i = 0; i < 6; i++){
        if(lottos[i] == 0){zrCnt++;}
        for(int j = 0; j < 6; j++){
            if(lottos[i] == win_nums[j]){crrct++;}
        }
    }
    answer.push_back(chart[crrct+zrCnt]);
    answer.push_back(chart[crrct]);
    return answer;
}