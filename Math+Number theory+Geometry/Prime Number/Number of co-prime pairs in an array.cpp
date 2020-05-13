#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > pr;

int gcd(int x,int y)
{
    if(x<y)
    {
       swap(x,y);
    }
    if(x%y==0)
    {
        return y;
    }
    return gcd(y,x%y);
}

int coPrimeCheck(int a[],int n)
{
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(gcd(a[i],a[j])==1)
            {
                cnt++;
                pr.push_back(make_pair(a[i],a[j]));
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n+10];
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int countCoPrimes=coPrimeCheck(a,n);
    cout<<"Number of co-prime pair in the array: "<<countCoPrimes<<endl;
    cout<<"Co-prime pairs are: "<<endl;
    for(vector<pair<int,int> >::iterator it=pr.begin();it!=pr.end();it++)
    {
        cout<<"("<<it->first<<","<<it->second<<") ";
    }
    return 0;
}
