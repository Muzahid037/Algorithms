///Bismillahir Rahmanir Rahim
/**
 *    author: s0L0
 *
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1;

    cin>>x2>>y2;

    int a=pow(abs(x1-x2),2);
    //a*=a;
    int b=pow(abs(y1-y2),2);
    //b*=b;
    double ans=sqrt(a+b);
    cout<<ans<<endl;




    return 0;
}

