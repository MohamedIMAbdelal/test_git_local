
#include "Math_Lib.h"

float div(float num1 , float num2)
{
    while(num2 == 0)
    {
        printf("Enter num2 = ");
        scanf("%f",&num2);
    }
    return num1 / num2;
}
