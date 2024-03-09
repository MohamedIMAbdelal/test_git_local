#include<iostream>
#include"functions.cpp"
#include"header.h"
using namespace std;

int main()
{



int nums[] = {2,7,11,15} , target = 13;
// for(int num : nums)
// {
//     cin>>num;
// }
// cin>>target;
int ArraySize = sizeof(nums) / sizeof(nums[0]);
printArrayOfIndices(nums , ArraySize , target);



    return 0;
}


