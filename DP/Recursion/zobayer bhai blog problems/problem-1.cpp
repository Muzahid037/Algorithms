/*problem description:
You will be given an array of integers,
write a recursive solution to print it in reverse order.
*/
#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr,int i,int n)
{
    if(i>n) return;
    printArray(arr,i+1,n);
    cout<<arr[i]<<" ";
}
int main()
{
    //cout<<"Size of array:"<<endl;
    int n;
    cin>>n;
    int arr[n+5];
    //cout<<"Put your array elements:"<<endl;
    for(int i=1; i<=n; i++) cin>>arr[i];
    printArray(arr,1,n);
    return 0;
}

