#include<bits/stdc++.h>
using namespace std;

int removeOddIntegers(int arr[],int i, int j, int n){
     if(i==n)
    {
     return j;
    }
     if(arr[i]%2==0) {
            arr[j] = arr[i];
            j++;
     }
     removeOddIntegers(arr,i+1,j,n);
}

int main(){
     int n,i=0,j=0;
     cin >> n;
     int arr[n];
     for(int i = 0; i<n ; i++){
        cin >> arr[i];
     }
     n = removeOddIntegers(arr,i,j,n);
     for(int i = 0; i<n ; i++){
        cout << arr[i] << " " ;
     }
 }
