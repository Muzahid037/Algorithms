/*
Write a recursive function that finds the gcd of two non-negative integers.
*/

#include<bits/stdc++.h>
using namespace std;
int gcD(int x,int y)
{
    //cout<<x<<" "<<y<<endl;
    if(y==0) return x;
    return gcD(y,x%y);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gcD(x,y)<<endl;
    return 0;
}
