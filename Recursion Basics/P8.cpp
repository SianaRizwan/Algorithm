#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n, int i = 2)
{
    if (n <= 2)
    {
        if(n==2) return true;
        else return false;
    }
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);//next divisor
}

int main()
{
    int n;

    while(cin >> n)
    {
        if(isPrime(n)) cout << "prime\n";
        else cout << "not prime\n";
    }
    return 0;
}

