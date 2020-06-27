#include<bits/stdc++.h>
using namespace std;

int fibo(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    return x+fibo(x-1);
    cout<<x<<" ";
}

int main()
{
    int a;
    cin>>a;
    fibo(a);
}
