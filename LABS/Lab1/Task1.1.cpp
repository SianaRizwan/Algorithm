#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, temp=0;
    for (i = 1; i < n; i++)
    {
        j = i;//hole at index i
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void printPair(int arr[],int n,int k)
{
    int i, t;
    --k;
    for (i = 0; i < n; i += t)
    {
     for (t = 1; arr[i] == arr[i + t]; ++t)
            ;
    if (t * n > k)
            break;

    k = k - t * n;
    }

    cout << arr[i] << ' ' << arr[k / t];
}


int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    insertionSort(arr,n);
    printPair(arr,n,k);

}


