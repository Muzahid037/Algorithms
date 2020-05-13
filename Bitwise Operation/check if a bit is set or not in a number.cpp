#include<bits/stdc++.h>
using namespace std;

isKthBitOfXisSet(int x,int k)
{
   if(x&(1<<(k-1)))
    {
        cout<<"set"<<endl;
    }
    else
    {
         cout<<"not set"<<endl;
    }
}

int main()
{
    int x,k;
    cin>>x>>k;
    isKthBitOfXisSet(x,k);



    return 0;
}
