#include <bits/stdc++.h>
#include<string>
using namespace std;

int a[500+5][500+5];

void findmat(int n,int m,int k)
{
    for(int i=0; i<n; i++)

    {
        for(int j=0; j<n; j++)
        {
            if(i==0 && j==0)
            {
                a[0][0]=m;
            }

            else if(i==j)
            {
                a[i][j]=a[i-1][j-1]+k;
            }
            else if(i<j)
            {
                a[i][j]=a[i][j-1]-1;
            }
            else
            {
                a[i][j]=a[i-1][j]-1;
            }
        }

    }


}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    findmat(n,m,k);

    for(int i=0; i<n; i++)

    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

