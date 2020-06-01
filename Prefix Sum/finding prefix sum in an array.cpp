#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter size of array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements of array: "<<endl;
    int arr[n+10],preSum[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i==0) preSum[i]=arr[i];
        else preSum[i]=preSum[i-1]+arr[i];
    }
    cout<<"Prefix sum array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<preSum[i]<<" ";
    }
    int ans,startInedex,endIndex;
    cout<<"\nEnter start and end index(0-based index) to find sum:"<<endl;
    cin>>startInedex>>endIndex;
    if(startInedex==0)
    {
        ans=preSum[endIndex];
    }
    else
    {
        ans=preSum[endIndex]-preSum[startInedex-1];
    }
    cout<<"Answer: "<<ans<<endl;

    return 0;
}
