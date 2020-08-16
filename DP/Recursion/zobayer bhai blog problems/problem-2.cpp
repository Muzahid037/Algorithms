/*
Write a recursive function to print an array in the following order.
[0] [n-1]
[1] [n-2]
.........
.........
[(n-1)/2] [n/2]
*/
#include<bits/stdc++.h>
using namespace std;


void printArray(int *arr,int i,int j)
{
    if(i>j) return;
    cout<<arr[i]<<" "<<arr[j]<<endl;
    printArray(arr,i+1,j-1);
}
int main()
{
    //cout<<"Size of array:"<<endl;
    int n;
    cin>>n;
    int arr[n+5];
    //cout<<"Put your array elements:"<<endl;
    for(int i=1; i<=n; i++) cin>>arr[i];
    printArray(arr,1,n);
    return 0;
}
