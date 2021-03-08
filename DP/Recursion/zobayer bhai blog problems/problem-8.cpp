/*
Write a recursive program to determine whether a given integer is prime or not.
*/
#include<bits/stdc++.h>
using namespace std;
int isPrime(int i,int n,int limit)
{
    if(n<2) return 0;
    if(i>limit) return 1;
    if(n%i==0) return 0;
    return isPrime(i+1,n,limit);
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(isPrime(2,n,sqrt(n))==1) cout<<"prime"<<endl;
        else cout<<"not prime"<<endl;
    }
    return 0;
}
