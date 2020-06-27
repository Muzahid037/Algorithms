#include<bits/stdc++.h>
using namespace std;
void tower(int x,char ss,char aa,char dd)
{
    if(x==1){cout<<" "<<ss<<"->"<<dd<<endl;return;}

    else
    {
      tower(x-1,ss,dd,aa);
      tower(1,ss,aa,dd);
      tower(x-1,aa,ss,dd);
    }
}
int main()
{
    int n;
    cout<<"Enter the num of dics"<<endl;
    cin>>n;
    tower(n,'s','a','d');
}
