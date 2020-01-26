#include<bits/stdc++.h>
using namespace std;
//int k=0;

void merge(int arr[], int l, int m, int r)
{
    int i, j,k=0;
    int n1 = m - l + 1;
    int n2 =  r - m;


    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    //cout<<k<<endl;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
int main()
{
    int arr[1000],n,t;
    cout<<"Enter Number Of Array Element: "<<endl;
    cin>>n;
    cout<<"Enter Element Of Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr, 0,(n+1)/2);
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1]<<endl;
    //cout<<k<<endl;
}
