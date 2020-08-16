/*
Write a recursive program to determine whether a given integer is prime or not.
*/
#include<bits/stdc++.h>
using namespace std;
int isPrime(int i,int n,int limit,flag)
{
    if(i>limit) return flag;

}
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        if(isPrime(2,n,sqrt(n),0)==1) cout<<"prime"<<endl;
        else cout<<"not prime"<<endl;
    }
    return 0;
}
