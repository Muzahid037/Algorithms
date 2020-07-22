#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPerfectSquare(ll x)
{
    ll y=sqrt(x);
    if(y*y==x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFibo(ll n)
{
    ll a=(5*(n*n))+4;
    ll b=(5*(n*n))-4;
    if((isPerfectSquare(a)==true) || (isPerfectSquare(b)==true))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int num;
    cin>>num;
    if(isFibo(num))
    {
        cout<<"Fibonacci number"<<endl;
    }
    else
    {
        cout<<"Not Fibonacci number"<<endl;
    }

    return 0;
}
