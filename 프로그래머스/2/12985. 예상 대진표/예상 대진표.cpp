#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    int tmp = 0;
    if(a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    
    while(b - a != 1 || a%2 == 0)
    {  
        if(a%2 != 0) {
            a = a/2 + 1;
        }
        else {
            a /= 2;
        }
        
        if(b%2 != 0) {
            b = b/2 + 1;
        }
        else {
            b /= 2;
        }
        
        answer++;
    }

    return answer;
}