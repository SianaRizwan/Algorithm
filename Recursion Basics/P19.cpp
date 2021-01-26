#include<bits/stdc++.h>
using namespace std;

void preorder(int n)
{
    if(n==1 || n==2)//Base
    {
        cout << n << " ";
        return;
    }

    // preorder: print(parent)-call(left)-call(right)
    cout << n <<" ";
    preorder(n-2);
    preorder(n-1);


}

void inorder(int n)
{
    if(n==1 || n==2)
    {
        cout << n << " ";
        return;
    }
    // inorder: call(left)-print(parent)-call(right)
    inorder(n-2);
    cout << n << " ";
    inorder(n-1);
}


void postorder(int n)
{
    if(n==1 || n==2)
    {
        cout << n << " ";
        return;
    }

    // postorder: call(left)-call(right)-print(parent)
    postorder(n-2);
    postorder(n-1);
    cout << n << " ";
}



int main()
{
    int n;
    cin >> n;
    cout << "Preorder: ";
    preorder(n);
    cout << "\nInorder: ";
    inorder(n);
    cout << "\nPostorder: ";
    postorder(n);

}

