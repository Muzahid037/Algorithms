#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {2,8,9,3,6,5,7,3};
    vector<int>vec(arr,arr+8);
    for(vector<int>::iterator it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end());        /// 2 3 3 4 4 5 7 9
    for(vector<int>::iterator it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<"Enter a number to find the bound in vector: ";

    int x;
    cin>>x;
    vector<int>::iterator lower,upper;
    lower=lower_bound(vec.begin(),vec.end(),x);
    upper=upper_bound(vec.begin(),vec.end(),x);

    cout<<"Lower bound of "<<x<<"= "<<lower-vec.begin()<<endl;
    cout<<"Upper bound of "<<x<<"= "<<upper-vec.begin()<<endl;

}
