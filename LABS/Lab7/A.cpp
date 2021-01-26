#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005

int fr;
void computeLPSArray(char *pat, int M, int *lps)
{
    int len = 0;
    int i=1;
    lps[0] = 0;
    while(i < M)
    {
        if(pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if( len != 0 )
            {

                len = lps[len-1];

            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int *lps = (int *)malloc(sizeof(int)*M);
    int j  = 0;

    computeLPSArray(pat, M, lps);

    int i = 0;
    while(i < N)
    {
        if(pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {

            fr++;
            j = lps[j-1];//for overlapping substrings
            //j=0;for non-overlapping substrings
        }


        else if(pat[j] != txt[i])
        {

            if(j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }

}



int main()
{
    char pat[MAX],txt[MAX];
    int t,cs=1;
    cin >> t;
    while(t--)
    {
        cin >> txt >> pat;
        fr=0;
        KMPSearch(pat, txt);
        cout << "Case "<< cs++ <<": "<<fr<< endl;
    }

    return 0;
}
