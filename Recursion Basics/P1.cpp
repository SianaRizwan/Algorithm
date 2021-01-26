#include<bits/stdc++.h>
using namespace std;

void printReverse(int arr[], int s,int n){
 if (s >=n) return;
  if (s<n){
    //cout << arr[s] << " ";
    printReverse(arr,s+1,n);
    cout << arr[s] <<" ";
 }
}
 int main(){
     int n;
     cin >> n;
     int arr[n];
     for(int i = 0; i<n ; i++){
        cin >> arr[i];
     }
     printReverse(arr,0,n);
 }
