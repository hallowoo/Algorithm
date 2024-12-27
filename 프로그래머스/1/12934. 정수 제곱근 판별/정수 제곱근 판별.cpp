#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double a = sqrt(n);
    int b = int(a);
    if(a-b == 0){answer = pow(a+1,2);}
    if(a-b != 0){answer = -1;}
    return answer;
}