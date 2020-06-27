#include <bits/stdc++.h>
using namespace std;

void function(int i,int n)
{
    if(i<n){
    if(i==0)
    {
        cout<<"1";
    }
    else
    {
        cout<<" + X";
        if(i>1){cout<<"^"<<i;}
    }
    function(i+1,n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    function(0,n);
    return 0;
}

