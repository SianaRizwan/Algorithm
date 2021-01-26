#include<bits/stdc++.h>
using namespace std;
//still not clear:3
void tower(int n, char s, char m, char d)
{
    if(n>0)
    {
        // move n-1 disks from source to middle,using destination as middle pillar
        cout << n << " " << s << " " << d <<" " << "\n";
        tower(n-1, s, d, m);
        cout << n << " 1 " << s << " " << d <<" " << "\n";
        // the nth disk can be moved directly from source to destination
        printf("%c -> %c\n", s, d);
        // from the middle pillar,transfer them back to destination using the source as the middle pillar
        cout << n << " 2 "  << s << " " << d <<" " << "\n";
        tower(n-1, m, s, d);
    }
}

int main()
{
    int n;
    cin >> n;
    tower(n, 'a', 'b', 'c');
    return 0;
}
