#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int isPrime[1000009];   /// if isPrime[i]==0 >prime
void sieve()
{

    int maxN=1000000;
    isPrime[0]=isPrime[1]=1;   ///0,1 not prime
    for(int i=2; i*i<=maxN; i++)
    {
        if(isPrime[i]==0)   ///if i is prime
        {
            for(int j=i*i; j<=maxN; j+=i) ///make multiple of i (isPrime[j]) 1(not prime)
            {
                isPrime[j]=1;
            }
        }
    }
}

int main()
{
    sieve();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(isPrime[n]==0)
        {
            cout<<"YES PRIME"<<endl;
        }
        else
        {
            cout<<"NOT PRIME"<<endl;
        }
    }
    return 0;
}
