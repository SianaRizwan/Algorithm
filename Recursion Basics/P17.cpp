#include<bits/stdc++.h>
using namespace std;

bool isValid(char str[],int i)
{
    if(str[i] >= 65 && str[i] <=90) return true;//uppercase letter
    if(str[i] >= 97 && str[i] <=122) return true;//lowercase letter
    if(str[i] >= 48 && str[i] <=57) return true;//number
    return false;

}

bool checkPalindrome(char str[],int i, int j)
{
    if (i > j) return true;
    if(!isValid(str,i))
        return checkPalindrome(str, i+1, j); // skip it
    if(!isValid(str,j))
        return checkPalindrome(str, i, j-1);

    if (str[i] ==str[j])
        return checkPalindrome(str, i + 1, j - 1);
    return false;


}


int main()
{
    int t;
    char str[100];
    gets(str);
    int n = strlen(str);

    if (checkPalindrome(str,0,n-1)) cout << "Palindrome\n";
    else cout << "Not Palindrome\n";

}
