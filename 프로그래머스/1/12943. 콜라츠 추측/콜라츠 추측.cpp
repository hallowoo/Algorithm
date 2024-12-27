#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;    
    
    while (num != 1){
        if(count == 500){
            return -1;
        }
        
        if(num % 2 == 1){
            num = (num * 3) + 1;        
        }
        else {num /= 2;
        }
        count++;
    
    }
    
    return count;
}