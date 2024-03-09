#include<stdio.h>
#include<stdlib.h>
#include"sqmatrix.h"

int* mat_add(int* a , int* b, int entries)
{
    int length = entries * entries ;
    int sum[length] ;
    for(int cell = 0;cell < length;cell++)
    {
        sum[cell] = a[cell] + b[cell];
        printf("%d",sum[cell]);
    }
    //return &sum ;
}
