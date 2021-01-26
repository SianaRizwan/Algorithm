#include<bits/stdc++.h>
using namespace std;
void printSeries(int i,int p){
 if (i<p){
    if (i==0){
        cout << "1";
    } else {
      cout << "+x^" <<i;
    }
    printSeries(i+1,p);
 }
}

int main(){
int n,i=0;
cin >> n;
printSeries(i,n);
return 0;
}
