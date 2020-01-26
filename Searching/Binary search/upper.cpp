
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>a,int n,int key)
{
    int findIndex=-1;
    int start=0;
    int eend=n-1;
    while(start<=eend)
    {
        int mid=(start+eend)/2;
        if(a[mid]==key)
        {
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
    return start;
}

int main()
{
    int n,key,z;
    vector<int>a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>z;
        a.push_back(z);
    }
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cin>>key;

    int lowerBound=binarySearch(a,n,key);

    cout<<"lowerBound : "<<lowerBound<<endl;



    for (int j = n - 1; j >= lowerBound; j--)
        {a[j+1] = a[j];}

    a[lowerBound] = key;

    for(int i=0; i<n+1; i++)
    {
        cout<<a[i]<<" ";
    }
}

