#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int t,int i,int j){
if(i > j) return -1;//Base
    int mid = (i+j)/2;
    if(arr[mid] < t) return binarySearch(arr,t,mid+1, j);
    if(arr[mid] > t) return binarySearch(arr,t,i, mid-1);
    return mid;
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
        result = binarySearch(arr,t,0,n-1);
        if (result == -1) cout << "Not found\n";
        else cout << result << endl;

    }

}
