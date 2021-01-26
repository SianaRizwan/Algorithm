#include <iostream>
#define F for(j=0;j<=i;++j)
#define I std::
int main(){int t,n,i,j,a[205][205];I cin>>t;while(t--){I cin>>n;for(i=0;i<n;++i)F I cin>>a[i][j];for(i=n-2;i>=0;--i)F a[i][j]+=I max(a[i+1][j],a[i+1][j+1]);I cout<<a[0][0]<<"\n";}}

