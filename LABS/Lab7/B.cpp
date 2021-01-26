#include<bits/stdc++.h>
using namespace std;

string pattern;
int z[2000005];

void get_Z_array()
{
    int L = 0;
    int R = 0;
    z[0] = 0;

    for(int i=1; i<pattern.size(); i++)
    {
        if(i>R)
        {
            L = R = i;
            while(pattern[R] == pattern[R-L] && R<pattern.size())
                R++;
            z[i] = R - L;
            R--;
        }
        else
        {
            int k = i - L;
            if(z[k]< R - i + 1)
                z[i] = z[k];
            else
            {
                L = i;
                while(pattern[R]==pattern[R-L] && R<pattern.size())
                    R++;
                z[i] = R - L;
                R--;
            }
        }
    }
}

int main()
{
    int T,count=1;
    cin>>T;
    while(T--)
    {
        int result=0;
        cin>>pattern;
        get_Z_array();
        for(int i=1; i<pattern.size(); i++)
        {
            if(z[i] and i+z[i]==pattern.size())
            {
                result++;
            }
        }
        cout<<"Case "<<count++<<": "<<result<<"\n";
        memset(z,0,sizeof(z));
    }

}
