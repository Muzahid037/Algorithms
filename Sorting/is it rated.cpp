#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],b[1000],r=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i]){r++;}
    }
    if(r!=0){cout<<"rated"<<endl;return 0;}
    else
    {
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j]||b[i]<b[j])
            {
                cout<<"unrated"<<endl;
                return 0;
            }
        }
    }
    }
    cout<<"maybe"<<endl;

}
