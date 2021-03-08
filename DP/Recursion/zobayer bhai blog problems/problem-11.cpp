/*
Suppose you are given an array of integers in an arbitrary order.
Write a recursive solution to find the maximum element from the array.
*/
#include<bits/stdc++.h>
using namespace std;
int findMaxNum(int *arr,int n,int i,int num)
{
    if(i==n) return num;
    num=max(num,arr[i]);
    return findMaxNum(arr,n,i+1,num);
}
int Max(int *arr,int n,int i)
{
    int m;
    if(i<n)
    {
        m=Max(arr,n,i+1);
        ///return (arr[i]>m)?arr[i]:m;
        if(arr[i]>m) return arr[i];
        else return m;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++) cin>>arr[i];
    //int mx=findMaxNum(arr,n,0,0);
    int mx=Max(arr,n,0);
    cout<<mx<<endl;
    return 0;
}


