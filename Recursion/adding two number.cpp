#include<bits/stdc++.h>
using namespace std;

void add (int a, int b, int c)
{
    int x,y,sum;
    if(a+b+c!=0)
    {
        x = a%10;
        y = b%10;
        sum = x+y+c;
        add (a/10, b/10 ,sum/10);
        printf("%d",sum%10);
    }
}
    int main()
    {
        add(157,781,0);
    }
