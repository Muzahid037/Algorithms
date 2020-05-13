#include <stdio.h>
int main()
{
    int a = 39, b = 31;
    printf("Output = %d", a^b);
    return 0;
}
///Calculate XOR from 1 to n.
/*
Method 1 (Naive Approach):
1- Initialize result as 0.
1- Traverse all numbers from 1 to n.
2- Do XOR of numbers one by one with result.
3- At the end, return result.

Method 2 (Efficient method) :
1- Find the remainder of n by moduling it with 4.
2- If rem = 0, then xor will be same as n.
3- If rem = 1, then xor will be 1.
4- If rem = 2, then xor will be n+1.
5- If rem = 3 ,then xor will be 0.
