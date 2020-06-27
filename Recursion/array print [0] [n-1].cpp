#include<bits//stdc++.h>
using namespace std;


void print(int i,int *a,int j)
{
    if(i<=j)
    {

        cout<<a[i]<<" "<<a[j]<<endl;;
        print(i+1,a,j-1);
    }
}

int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    print(0,&a[0],n-1);

    return 0;
}

