#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    const int a = -50000;
    const int b = 50000;
    if(a <= num1 <= b, a <= num2 <= b){answer = num1 - num2;}
  
    return answer;
}