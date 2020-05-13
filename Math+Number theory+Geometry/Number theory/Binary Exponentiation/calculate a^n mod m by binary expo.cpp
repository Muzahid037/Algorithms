#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll binpow(ll num,ll pow,ll mod)
{
    num%=mod;
    ll res=1;
    while(pow>0)
    {
        if(pow&1)
        {
            res=(res*num)%mod;
        }
        num=(num*num)%mod;
        pow>>=1;

    }
    return res;
}

int main()
{
    ll num,pow,mod;
    cin>>num>>pow>>mod;
    ll ans=binpow(num,pow,mod);
    cout<<ans<<endl;

    return 0;
}
