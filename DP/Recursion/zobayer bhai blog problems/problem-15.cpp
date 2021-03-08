/*
Write a recursive solution to get the reverse of a given integer. Function must return an int
*/
#include<bits/stdc++.h>
using namespace std;
int getReverseInt(int n,int nRev)
{
    if(n==0) return nRev;
    nRev=(nRev*10)+(n%10);
    return getReverseInt(n/10,nRev);
}
int main()
{
    int n;
    cin>>n;
    int nRev=getReverseInt(n,0);
    cout<<nRev<<endl;
    return 0;
}
