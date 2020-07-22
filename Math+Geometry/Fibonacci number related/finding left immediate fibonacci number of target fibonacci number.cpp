#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
double denominator=((1 + sqrt(5)) / 2.0);
ll previousFibonacci(ll n)
{
    double a = n/denominator;
    return round(a);
}
int main()
{
    ll num;
    cout<<"Put a fibonacci number to find it's previous fibonacci number"<<endl;
    cin>>num;
    ll ans=previousFibonacci(num);
    cout<<ans<<endl;

    return 0;
}
