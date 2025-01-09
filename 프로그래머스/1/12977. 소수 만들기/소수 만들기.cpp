#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    for(int i = 0; i < nums.size()-2; i++){
        for(int j = i + 1; j < nums.size()-1; j++){
            for(int k = j + 1; k < nums.size(); k++){
                int l = nums[i] + nums[j] + nums[k];int count = 0;
                for(int m = 2; m <= sqrt(l); m++){
                    if(l%m == 0){count++;}
                }
                if(count == 0){answer++;}
            }
        }
    }
    return answer;
}