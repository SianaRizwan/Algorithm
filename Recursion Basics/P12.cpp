#include<bits/stdc++.h>
using namespace std;

int findSecondMax(int arr[], int n, int i, int *max1, int *max2)
{
    if(i==n-1)//Base
    {
        *max1 = arr[i];
        return *max1;
    }

    if(*max2 < arr[i]) *max2 = arr[i];//Base

    findSecondMax(arr,n,i+1,max1,max2);

    if(arr[i] > *max1)
    {
        *max2 = *max1;
        *max1 = arr[i];
    }
    else if(arr[i] > *max2) *max2 = arr[i];
    return *max2;


}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n ; i++)
    {
        cin >> arr[i];
    }
    int max1,max2;
    max1 = max2 = arr[0];
    int maxEl = findSecondMax(arr, n,0,&max1,&max2);
    cout << maxEl << endl;

}
