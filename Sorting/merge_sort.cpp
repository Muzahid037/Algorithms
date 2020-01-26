#include<bits/stdc++.h>
using namespace std;
void mrg(int *left,int nL,int *right,int nR,int *a)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<nL && j<nR)
    {
        if(left[i]<right[j])
        {
            a[k]=left[i];
            k++;
            i++;
        }
        else
        {
            a[k]=right[i];
            k++;
            j++;
        }
    }
    while(i<nL)
    {
        a[k]=left[i];
        k++;
        i++;
    }
    while(j<nR)
    {
        a[k]=right[i];
        k++;
        j++;
    }
}

void merge_sort(int a[],int n)
{      int mid,*left,*right;
    if(n<2)
    {
        return;
    }
     mid=n/2;
    left = (int*)malloc(mid*sizeof(int));
    for(int i=0; i<mid; i++)
    {
        left[i]=a[i];
    }
    right = (int*)malloc((n- mid)*sizeof(int));
    for(int i=mid; i<n; i++)
    {
        right[i-mid]=a[i];
    }
    merge_sort(left,mid);
    merge_sort(right,n-mid);
    mrg(left,mid,right,n-mid,a);

}

int main()
{
    int n,imin;
    cin>>n;
    int a[n+5];
    for(int k=0; k<n; k++)
    {
        cin>>a[k];
    }
    merge_sort(a,n);
    for(int k=0; k<n; k++)
    {
        cout<<a[k]<<" ";
    }
    return 0;
}
