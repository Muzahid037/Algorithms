///Using sieve
///TC: O(log(n))
#include<bits/stdc++.h>
using namespace std;
vector<int>pf;
map<int,int>pfPower;
void primeFact(int n)
{
    int limit=sqrt(n+1);
    int cnt;

    if(n%2==0)
    {
        cnt=0;
        while(n%2==0)
        {
            cnt++;
            n/=2;
        }
        pf.push_back(2);
        pfPower[2]=cnt;
    }

    for(int i=3; i<=limit; i+=2)
    {
        if(n%i==0)
        {
            cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            pf.push_back(i);
            pfPower[i]=cnt;
        }
    }
    if(n>1)
    {
        pf.push_back(n);
        pfPower[n]=1;
    }
    int pfSize=pf.size();
    for(int i=0; i<pfSize; i++)
    {
        cout<<pf[i]<<"^"<<pfPower[pf[i]]<<endl;

    }
}

int main()
{
    int n;
    cin>>n;
    primeFact(n);

    return 0;
}


/*
///Optimized approach-2
///TC < O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
vector<int>pf;
map<int,int>pfPower;
void primeFact(int n)
{
    int limit=sqrt(n+1);
    int cnt;

    if(n%2==0)
    {
        cnt=0;
        while(n%2==0)
        {
            cnt++;
            n/=2;
        }
        pf.push_back(2);
        pfPower[2]=cnt;
    }

    for(int i=3; i<=limit; i+=2)
    {
        if(n%i==0)
        {
            cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            pf.push_back(i);
            pfPower[i]=cnt;
        }
    }
    if(n>1)
    {
        pf.push_back(n);
        pfPower[n]=1;
    }
    int pfSize=pf.size();
    for(int i=0; i<pfSize; i++)
    {
        cout<<pf[i]<<"^"<<pfPower[pf[i]]<<endl;

    }
}

int main()
{
    int n;
    cin>>n;
    primeFact(n);

    return 0;
}
*/

///----------------------------------------------///

/*
///Optimized approach-1
/// TC: O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
vector<int>pf;
map<int,int>pfPower;
void primeFact(int n)
{
    int limit=sqrt(n+1);
    for(int i=2; i<=limit; i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            pf.push_back(i);
            pfPower[i]=cnt;
        }
    }
    if(n>1)
    {
        pf.push_back(n);
        pfPower[n]=1;
    }
    int pfSize=pf.size();
    for(int i=0; i<pfSize; i++)
    {
        cout<<pf[i]<<"^"<<pfPower[pf[i]]<<endl;

    }
}

int main()
{
    int n;
    cin>>n;
    primeFact(n);

    return 0;
}
*/
///----------------------------------------------///
/*
///Brute force approach
///TC: O(n) in worst case
#include<bits/stdc++.h>
using namespace std;

void primeFact(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt<<endl;

            cout<<n<<endl;
        }
    }

}

int main()
{
    int n;
    cin>>n;
    primeFact(n);

    return 0;
}
*/
