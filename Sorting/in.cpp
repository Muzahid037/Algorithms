#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
          for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1]<<endl;
   }
   if(i<n-1){
   for(int k=0;k<n-1;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<arr[n-1]<<endl;}
}
int main()
{
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1]<<endl;
    insertion(arr,n);
}
