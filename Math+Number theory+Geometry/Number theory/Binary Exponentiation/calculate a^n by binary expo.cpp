///"Iterative Approach"///

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll md=1000000007;

ll binpow(ll a,ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n&1)
        {
            res=res*a;
        }
        a=a*a;
        n>>=1;

    }
    return res;
}

int main()
{
    ll a,n;
    cin>>a>>n;
    ll ans=binpow(a,n);
    cout<<ans<<endl;

    return 0;
}


///"Recursive Approach"///
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll md=1000000007;

ll binpow(ll a,ll n)
{
    if(n==0)
    {
        return 1;
    }
    ll res=binpow(a,n/2);
    if(n%2==0)
    {
        return res*res;
    }
    else
    {
        return res*res*a;
    }
}

int main()
{
    ll a,n;
    cin>>a>>n;
    ll ans=binpow(a,n);
    cout<<ans<<endl;

    return 0;
}
*/
