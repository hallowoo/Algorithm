#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    
    vector<string>day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    vector<int>month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totDays = 0;
    
    for(int i = 0; i < a - 1; i++){
        totDays += month[i];
    }
    
    totDays = totDays + b;
   
    return day[totDays%7];
}