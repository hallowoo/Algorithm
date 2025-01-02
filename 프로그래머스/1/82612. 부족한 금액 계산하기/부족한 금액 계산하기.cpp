using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long totalPrice = 0;
    long long leftmoney = money;
    for(int n = 1; n <= count; n++ ){
        totalPrice += price * n;
    }
    leftmoney = money - totalPrice ;
    if(leftmoney < 0){ answer =  leftmoney * -1 ;}
    else { answer = 0;}
    
    
    return answer;
}