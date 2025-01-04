#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int>a;
    vector<int>b;
    while(n >= 3){
       a.push_back(n % 3); n = n / 3 ;
    }
    a.push_back(n);
    for(int i = a.size()-1; i >= 0; i--){
         b.push_back(a[i]);
    }
    for(int j =0; j < b.size(); j++){
        answer = (3*answer)+a[j];
    }
    return answer;
}