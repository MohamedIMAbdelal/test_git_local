#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    printf("Hello world!\n");
    unsigned char count ;
    printf("Hello\n");
    for(count = 1;count > 0;count++)
    {
         printf("%d Hello \n",count);
    }

    printf("Hello Again\n");
    */

    unsigned short delay = 1;
    printf("Hell0 #START\n");
    while(delay > 0)
    {
       printf("Hello # %d\n",delay);
       if(delay == 20000)
        break;
       delay++;
    }

    printf("Hell0 #END\n");


    return 0;
}
