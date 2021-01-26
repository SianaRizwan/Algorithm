#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int t,int i)
{
    if (i == n) return -1;
    if (arr[i]==t) return i;
    return linearSearch(arr,n,t,i+1);
}
int main()
{
    int n,s,result,t;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n ; i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    for(int i =0; i<s; i++)
    {

        cin >> t;
        result = linearSearch(arr,n,t,0);
        if (result == -1) cout << "Not found\n";
        else cout << result << endl;

    }

}
