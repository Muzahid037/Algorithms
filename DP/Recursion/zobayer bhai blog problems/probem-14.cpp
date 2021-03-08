/*
Implement linear search recursively, i.e. given an array of integers, find a specific value from it.
Input format: first n, the number of elements. Then n integers.
Then, q, number of query, then q integers. Output format: for each of the q integers,
print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.
*/
#include<bits/stdc++.h>
using namespace std;

int my_Binary_search(int *arr,int key,int low,int high)
{
    if(low>high) return -1;
    int mid=(low+high)>>1;
    //cout<<mid<<" "<<arr[mid]<<endl;
    if(arr[mid]==key) return mid;
    if(arr[mid]>key)
    {
        return my_Binary_search(arr,key,low,mid-1);
    }
    else if(arr[mid]<key)
    {
        return my_Binary_search(arr,key,mid+1,high);
    }
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
        int x=my_Binary_search(arr,key,0,n-1);
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

