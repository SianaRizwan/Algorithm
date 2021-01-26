#include<bits/stdc++.h>
using namespace std;

int strLen(char str[],int i)
{

    while(str[i] != '\0')
    {
        i++;
        strLen(str,i);
    }
    return i;
}

void strCopy(char str1[], char str2[],int i)
{
    str2[i] = str1[i];
    if (str1[i] == '\0')
        return;
    strCopy(str1, str2, i + 1);
}

bool strCompare(char *str1, char *str2)
{
    if (*str1 < *str2)//base
        return false;
    if (*str1 > *str2)//base
        return false;
    if (*str1 == '\0')
        return true;
    return strCompare(str1 + 1, str2 + 1);
}

void strConcatenate(char *str1,char *str2,int i)
{
    static int j=strlen(str1);
    if(!str2[i])
    {
        str2[i]='\0';
    }
    else
    {
        str1[i+j]=str2[i];
        strConcatenate(str1,str2,i+1);
    }



}

int main()
{
    int t;
    char str[200],str1[200],str2[200];
    cout << "Length of a string:\n";
    cin >> str;
    int n = strLen(str,0);
    cout << n << "\n";
    cout << "Copy given to String2:\n";
    cin >> str1;
    strCopy(str1,str2,0);
    cout << "Copied: " <<str2 << "\n";
    cout << "Compare 2 strings :\n";
    cin >> str1 >> str2 ;
    if (strCompare(str1,str2)) cout << "Same\n";
    else cout << "Not equal\n";
    cout << "Concatenate 2 strings:\n";
    cin >> str1 >> str2 ;
    strConcatenate(str1,str2,0);
    cout << "New string :" <<str1;
}
