#include<bits/stdc++.h>
using namespace std;

void printInPair(int arr[], int s, int n){
    if (s >n) return;
    if (s<=n){
            cout << arr[s] << " " << arr[n] << endl;
        printInPair(arr,s+1,n-1);
    }
}

int main(){
     int n;
     cin >> n;
     int arr[n];
     for(int i = 0; i<n ; i++){
        cin >> arr[i];
     }
     printInPair(arr,0,n-1);
 }

