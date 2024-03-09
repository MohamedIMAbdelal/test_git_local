#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0 , num2 = 1 , sum , n ;
    printf("Enter number of terms : ");
    scanf("%d",&n);

    while(n >= 2)
    {
        printf("%d %d ",num1,num2);
        for(int i = 1;i <= n - 2;i++)
        {
          sum = num1 + num2 ;
          printf("%d ",sum);
          num1 = num2 ;
          num2 = sum ;
        }
        //n = 0;// for while condition to exit
        exit(0);
    }

    return 0;
}


