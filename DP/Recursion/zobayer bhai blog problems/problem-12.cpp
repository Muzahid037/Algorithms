/*
Write a recursive solution to find the second maximum number from a given set of integers.
*/

#include<bits/stdc++.h>
using namespace std;

int findSecondMaxNum(int *arr,int n,int i,int fm,int sm)
{
    if(i==n) return sm;
    if(arr[i]>fm)
    {
        sm=fm;
        fm=arr[i];
    }
    return findSecondMaxNum(arr,n,i+1,fm,sm);
}
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++) cin>>arr[i];
    int sec_mx=findSecondMaxNum(arr,n,0,0,0);
    cout<<sec_mx<<endl;
    return 0;
}
