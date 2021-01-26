#include<bits/stdc++.h>
using namespace std;

int polynomialSolution(int i,int x,int n){
    if(n==0){
        return 1;
    }
    if(i<n) {
        return pow(x,i) + polynomialSolution(i+1, x, n);
    }
  return 0;
}

int main(){
int x,n,i=0;
cin >> x >> n;
int sum = polynomialSolution(i,x,n);
cout << sum;
}
