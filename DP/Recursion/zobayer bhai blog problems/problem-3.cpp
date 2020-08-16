/*
Write a recursive program to remove all odd integers from an array.
You must not use any extra array or print anything in the function.
Just read input, call the recursive function, then print the array in main().
*/
#include<bits/stdc++.h>
using namespace std;

void removeOddElement(int *arr,int i,int j,int *n)
{
    if(i==*n+1)
    {
        *n=j-1; //resize n
        return;
    }
    if(arr[i]%2==0) arr[j++]=arr[i];
    removeOddElement(arr,i+1,j,n);
}
int main()
{
    //cout<<"Size of array:"<<endl;
    int n;
    cin>>n;
    int arr[n+5];
    //cout<<"Put your array elements:"<<endl;
    for(int i=1; i<=n; i++) cin>>arr[i];
    removeOddElement(arr,1,1,&n);
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
