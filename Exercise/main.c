#include <stdio.h>
#include <stdlib.h>


void factors(int num);
int power_func(int base , int power);
int factorial(int num);
int main()
{
    int number ;
    printf("Enter number : ");
    scanf("%d",&number);
    factors(number);
    printf("\n");
//
    int x , y ;
    printf("Enter numbers : ");
    scanf("%d%d",&x,&y);
    int total = power_func(x,y);
    printf("%d" , total);
    printf("\n");
//
    int fact = factorial(number);
    printf("FACT = %d" , fact);

    return 0;
}

void factors(int num)
{

   for(int i = 1;i <= num;i++)
   {

       if(num % i == 0)
        printf("%d ",i);
   }

}

int power_func(int base , int power)
{
    int result = 1 ;
    while(power > 0)
    {
        result *= base;
        power--;
    }
//    printf("Result = %d ",result);
    return result ;

}

int factorial (int num)
{
    if(num == 0)
        return 1 ;
    else
        return num * factorial(num - 1);
}
