#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    sort(arr.begin(), arr.end(), greater<>());
  
    for(int m = 1;; m++)
    {
        for(int i = 1; i < arr.size(); i++)
        {
            if((arr[0]*m)%arr[i] != 0)
            {
                break;
            }
            else if(i == arr.size() - 1)
            {
                answer = arr[0]*m;
                return answer;
            }
        }
    }
}