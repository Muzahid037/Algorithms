/*
Write a recursive solution to compute lcm of two integers.
You must not use the formula lcm(a,b) = (a x b) / gcd(a,b); find lcm from scratch...
*/
#include<bits/stdc++.h>
using namespace std;
int lcm(int x,int y,int m)
{
    if(x*m%y==0) return x*m;
    return lcm(x,y,m+1);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<lcm(x,y,1)<<endl;
    return 0;
}

