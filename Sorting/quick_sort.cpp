#include<bits/stdc++.h>
using namespace std;


int partitionn(int *a,int start,int endd)
{
    int pivot=a[endd];
    int pindex=start;
    for(int i=start; i<endd; i++)
    {
        if(a[i]<pivot)
        {
            swap(a[i],a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex],a[endd]);
    return pindex;
}

void quick_sort(int *a,int start,int endd)
{
    if(start>=endd){return;}

        int pindex=partitionn(a,start,endd);
        quick_sort(a,start,pindex-1);
        quick_sort(a,pindex+1,endd);

}

int main()
{
    int a[5000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    quick_sort(a,0,n-1);

    for(int i = 0; i <n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    return 0;
}

