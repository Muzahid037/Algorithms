#include<bits/stdc++.h>
using namespace std;

void mrg(int *a,int *l,int lc,int *r,int rc)
{
    int i=0,j=0,k=0;

    while(i<lc && j< rc)
    {
        if(l[i]  < r[j])
        {
            a[k++] = l[i++];
        }
        else
        {
            a[k++] = r[j++];
        }

    }
    while(i < lc)
    {
        a[k++] = l[i++];

    }
    while(j < rc)
    {
        a[k++] = r[j++];

    }
}

void mrg_sort(int *a,int n)
{
    int mid,i, *l, *r;
    if(n < 2) return;

    mid = n/2;

    l = (int*)malloc(mid*sizeof(int));
    r = (int*)malloc((n- mid)*sizeof(int));

    for(i = 0; i<mid; i++)
    {
        l[i] = a[i];
    }
    for(i = mid; i<n; i++)
    {
        r[i-mid] = a[i];
    }

    mrg_sort(l,mid);
    mrg_sort(r,n-mid);
    mrg(a,l,mid,r,n-mid);
    free(l);
    free(r);
}


int main()
{
    int n,m,a[105],x=0,z;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    mrg_sort(a,n);

    for(int i=0; i<m; i++)
    {
        if(a[i]<0)
        {
            x=x+a[i];
        }
    }
    cout<<abs(x)<<endl;

}

