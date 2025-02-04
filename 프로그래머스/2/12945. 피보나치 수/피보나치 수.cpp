#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int a = 0;
    int b = 1;
    int bb = b;
    
    for(int i = 1; i < n ; i ++)
    {
        b = (a+b)%1234567;
        a = bb;
        bb = b;
    }
    return b;
}