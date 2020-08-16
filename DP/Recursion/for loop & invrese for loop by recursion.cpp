///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
void For(int i,int n) ///for(int i=1;i<=n;i++) cout<<i<<" ";
{
    if(i==n)
    {
        cout<<i<<endl;
        return;
    }
    cout<<i<<" ";
    For(i+1,n);
}
void rFor(int i,int n)   ///for(int i=n;i>0;i--) cout<<i<<" ";
{
    if(i==n)
    {
        cout<<i<<" ";
        return;
    }
    rFor(i+1,n);
    if(i==1) cout<<i<<endl;
    else cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    ///print 1-to-n
    For(1,n);

    ///print n-to-1
    rFor(1,n);

    return 0;
}



