#include<bits/stdc++.h>
using namespace std;

int printReverse(int n,int sum)
{
    if (n==0)return sum;
    sum=sum*10+n%10;//Extracting the last digit
    return printReverse(n/10,sum);//excluding last digit from the original num


}

int main()
{
    int n;
    cin >> n;
    int r = printReverse(n,0);
    cout << r;
}
