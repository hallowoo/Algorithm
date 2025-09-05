#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    
    int a = num%w == 0 ? w : num%w;
    int b = (n-num+a)/w;
    int c = (n-num+a)%w;
    int d = 0;
    
    if(b%2 == 0)
    {
        if(a <= c)
        {
            answer = b + 1;
        }
        if(a > c)
        {
            answer = b;
        }
    }
    
    if(b%2 >= 1)
    {
        if(w - c < a)
        {
            answer = b + 1;
        }
        
        if(w - c >= a)
        {
            answer = b;
        }
    }
    
    
    return answer;
}