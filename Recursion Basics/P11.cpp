#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n,int i){
    static int temp = -1;
    if (n == 1) return arr[i];

    if (i < n){
        if (temp<arr[i])
            temp = arr[i];
        findMax(arr,n,i+1);
    }
    return temp;

}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int maxEl = findMax(arr, n,0);
    cout << maxEl << endl;

}
