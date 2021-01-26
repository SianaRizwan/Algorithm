#include <iostream>
using namespace std;


void printn(int num)
{

    if (num == 0)
        return;
    cout << "* ";


    printn(num -1);
}


void pattern(int n, int i)
{

    if (n == 0)
        return;


    printn(i);
    cout << endl;
    pattern(n - 1, i + 1);




}


int main()
{
    int n ;
    cin >>n;
    pattern(n, 1);
    return 0;
}
