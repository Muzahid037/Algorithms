#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=sqrt(n+1);
    for(int i=2;i<=p;i++)
    {
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            return 0;
        }
    }
    cout<<"Prime"<<endl;
    return 0;
}
