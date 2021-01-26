#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, temp=0;
    for (i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }



}
void displayMedian(int arr[], int n)
{
    int median = 0;

    if(n%2!=0)
    {
        median = arr[(n / 2) ] ;
    }
    else
    {
        median =  (arr[n/2]+arr[(n/2)-1])/2;
    }
    cout << median<<endl;



}


int main()
{
    int arr[1000];
    int i = 0;
    int j = 0;
    while (cin >> arr[j])

    {
        insertionSort(arr,j+1);
        displayMedian(arr,j+1);
        j++;

    }
    return 0;
}
