#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n)
{
    int i, j, mi,temp,ct=0;
    for (i = 0; i < n-1; i++)
    {
        mi = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[mi])

            {
                mi = j;
            }
        }
        if(arr[i]>arr[mi]){
                ct++;
        temp=arr[mi];
        arr[mi]=arr[i];
        arr[i]=temp;}

    }
   for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1]<<endl;
    cout<<ct<<endl;
}
int main()
{
    int arr[1000],n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
}
