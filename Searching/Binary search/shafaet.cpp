#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int key)
{
    int findIndex=-1;
    int start=0;
    int eend=n-1;
    while(start<=eend)
    {
        int mid=(start+eend)/2;
        if(a[mid]==key){
            findIndex=mid;
            eend=mid-1;
        }
       else if(a[mid]>key)
        {
             eend=mid-1;
        }
         else if(a[mid]<key)
        {
             start=mid+1;
        }
    }
    return findIndex;
}

int main()
{
    int n,a[100],key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cin>>key;

    int x=binarySearch(a,n,key);

//    cout<<"X= "<<x<<endl;

    if(x!=-1)
    {
        cout<<"Key is found in position "<<x+1<<endl;
    }
    else
    {
        cout<<"Key is not found"<<endl;
    }
}
