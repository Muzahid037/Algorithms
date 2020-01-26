#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n,temp,ct=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                ct++;
            }
        }
    }
      for(int i=0;i<n-1;i++){
    cout<<a[i]<<" ";
      }
      cout<<a[n-1]<<endl;
      cout<<ct<<endl;
}
