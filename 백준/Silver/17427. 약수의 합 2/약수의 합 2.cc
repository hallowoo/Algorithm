#include <iostream>

using namespace std;

void sumAllDivisor(int n)
{
    long long sum = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        sum += (n / i) * i;
    }
    
    cout << sum;
}

int main()
{
    int n =0;
    cin >> n;
    
    sumAllDivisor(n);
    
    return 0;
}