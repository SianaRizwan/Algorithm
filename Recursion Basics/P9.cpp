#include<bits/stdc++.h>
using namespace std;

int findGcd(int n1,int n2)
{
    if (n1 == 0)
        return n2;
    if (n2 == 0)
        return n1;
    if (n1 == n2)
        return n1;
    if (n1 > n2)
        return findGcd(n1-n2, n2);
    return findGcd(n1, n2-n1);
}
int main()
{
    int n1,n2;
    cin >> n1 >>n2;
    int gcd = findGcd(n1,n2);
    cout << gcd << endl;
}
