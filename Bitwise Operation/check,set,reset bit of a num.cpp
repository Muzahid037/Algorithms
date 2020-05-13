#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///The inline functions are a C++ enhancement feature
///to increase the execution time of a program.
///Functions can be instructed to compiler to make them inline
///so that compiler can replace those function definition
///wherever those are being called.

inline bool checkBit(ll n, int i)
{
    return n&(1LL<<i);
}
inline ll setBit(ll n, int i)
{
    return n|(1LL<<i);;
}
inline ll resetBit(ll n, int i)
{
    return n&(~(1LL<<i));
}

main()
{
    int num,posOfBit;
    cin>>num>>posOfBit;  ///posOfBit starts from "0"
    cout<<checkBit(num,posOfBit)<<endl;
}
