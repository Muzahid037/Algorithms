#include<iostream>
using namespace std;
int main()
{
    int n,a[100],temp,s;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(s%2==0)

    {
        s=(n/2);
    }
    else{
        (s=n/2)+1;
    }
    cout<<a[s]<<endl;
    return 0;
}
