#include<bits/stdc++.h>
using namespace std;

int ct=0;

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
        ct++;
    }
    while(i < lc)
    {
        a[k++] = l[i++];
        ct++;
    }
    while(j < rc)
    {
        a[k++] = r[j++];
        ct++;
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


    int a[500000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    mrg_sort(a,n);

    for(int i = 0; i <n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    cout<<ct<<endl;
    return 0;
}
