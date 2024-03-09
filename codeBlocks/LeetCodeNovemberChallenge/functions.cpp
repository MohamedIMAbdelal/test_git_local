#include<iostream>
#include"header.h"

using namespace std;
void printArrayOfIndices(int arr[] , int size , int target)
{
    int sum = 0;
    for(int i = 0;i < size - 1;i++)
    {
        for(int j = i + 1;j < size;j++)
        {
            sum = arr[i] + arr[j];
            if(sum == target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
                break;
            }

        }
    }

}
