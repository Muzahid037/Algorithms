/*
Write a recursive program to compute n!
*/
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n<2) return 1;
    else return n*fact(n-1);
}
int main()
{
    int n,nFact;
    cin>>n;
    nFact=fact(n);
    cout<<nFact<<endl;
    return 0;
}
