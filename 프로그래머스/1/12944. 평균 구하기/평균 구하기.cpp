#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double j = 0;
    for(int i=0; i < arr.size(); i++){
        j += arr[i];
    }
    answer = j / arr.size();
    return answer;
}