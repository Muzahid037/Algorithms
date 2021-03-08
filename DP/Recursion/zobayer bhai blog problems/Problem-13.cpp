/*
Implement linear search recursively, i.e. given an array of integers, find a specific value from it.
Input format: first n, the number of elements. Then n integers.
Then, q, number of query, then q integers. Output format: for each of the q integers,
print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.
*/
#include<bits/stdc++.h>
using namespace std;

int linear_search(int *arr,int n,int key,int i)
{
    if(i==n) return -1;
    if(arr[i]==key) return i;
    linear_search(arr,n,key,i+1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++) cin>>arr[i];
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int key;
        cin>>key;
        int x=linear_search(arr,n,key,0);
        if(x==-1)
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"Found at: "<<x<<endl;
        }
    }
    return 0;
}
