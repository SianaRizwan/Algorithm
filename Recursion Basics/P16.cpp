#include <bits/stdc++.h>
using namespace std;



void reverseSentence()
{
    char c;
    scanf("%c", &c);

    if (c != '\n')
    {
        //printf("%c", c);
        reverseSentence();//Call-stack
        printf("%c", c);

    }
}
int main()
{
    reverseSentence();

}
