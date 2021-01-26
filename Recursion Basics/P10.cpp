#include<bits/stdc++.h>
using namespace std;
int findLcm(int n1, int n2, int i)
{
    int m;
    if(n1 > n2)  m=n1+i;
    else  m=n2+i;

    if((m % n1 == 0) && (m % n2 == 0))
    {
        return m;
    }
    else
    {
        return findLcm(n1, n2,i+1);
    }

}

int main()
{
    int n1,n2,lcm;
    cin >> n1 >>n2;
    lcm = findLcm(n1, n2,0);
    cout << lcm << endl;

}
