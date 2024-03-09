#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number_of_elements = 3;
    int numbers[number_of_elements];

/* initialize the elements of this array */
    numbers[0] = 30;
    numbers[1] = 40;
    numbers[2] = 50;

    for(int step = 0;step < number_of_elements;step++)
    {
         printf("%d \n",numbers[step]);
    }


    return 0;
}
