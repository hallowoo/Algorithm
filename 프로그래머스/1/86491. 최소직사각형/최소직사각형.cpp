#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int fMax = 0;
    int sMax = 0;
    for(int i = 0; i < sizes.size(); i++){
        int a = sizes[i][0]; int b = sizes[i][1]; a < b ? 
            fMax = max(fMax,a), sMax = max(sMax,b) : fMax = max(fMax,b), sMax = max(sMax,a);
    }
    answer = fMax*sMax;
    return answer;
}