#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime[1000005],nPrime;  ///stores prime numbers
int mark[1000005];         ///mark[i]==0 ;if  i==prime
void sieve(int n)
{
    int limit=sqrt(n)+1;

    ///1 is not prime,so mark it 1
    mark[1]=1;
    ///2 is prime
    prime[nPrime++]=2;

    ///almost all the evens are not prime
    for(int i=4; i<=n; i+=2) mark[i]=1;

    ///run loop for only odds
    for(int i=3; i<=limit; i+=2)
    {
        ///if not prime no need to do "multiple cutting"
        if(mark[i]==0)
        {
            ///i is prime
            prime[nPrime++]=i;
            ///if we don't do it,following i*i may be overflow
            if(i<=limit)
            {
                ///loop that odd multiples of i
                ///greater than i*i
                for(int j=i*i; j<=n; j+=i*2)
                {
                    ///mark j not prime
                    mark[j]=1;
                }
            }
        }
    }
    for(int i=limit+1; i<=n; i++)
    {
        if(mark[i]==0) prime[nPrime++]=i;
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    cout<<"No of primes: "<<nPrime<<endl;
    cout<<"Primes are: "<<endl;
    for(int i=0; i<nPrime; i++) cout<<prime[i]<<" ";
}
