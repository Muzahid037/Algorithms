#include<bits//stdc++.h>
using namespace std;


void print(int i,int *a,int n)
{
    if(i<n)
    {
        print(i+1,a,n);
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    print(0,&a[0],n);

    return 0;
}
