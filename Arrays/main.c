#include <stdio.h>
#include <stdlib.h>


int main()
{
    int rows = 2;
    int columns = 12;
    char name_elements[2][12] = {{'E', 'm', 'b', 'e', 'd', 'd', 'e', 'd', 'C', NULL,'\32',NULL},
                                         {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', 'i', 'n', 'g', '\0'}};


    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < columns; j++)
        {
            printf("%c", name_elements[i][j]);
        }
    }

    printf("\n\n");

    for (int i = 0; i < rows; i++)
    {
        const char* str = *(name_elements + i);
        printf("%s", str);
    }

    printf("\n\n");

    /* Treating multidimensional array as a single buffer of memory */
/* 1) Get the total number of cells of an array */
int cells = rows * columns;
const char* buffer = name_elements;
for (int cell = 0; cell < cells; cell++) {
    /* Get the actual buffer */

    /* print buffer cells */
    printf("%c", buffer[cell]);
}

/* create a variable length constant string; the length is evaluated by the compiler at the compile-time */
/*
const char* test_var_str = "Testing the variable length string literal";
for (int i = 0; i < strlen(test_var_str); i++) {
    printf("%c", test_var_str[i]);
}
printf("\n");
*/
    int b[2][2] = {1,2,3,4};
    int *p = *b;
    printf("%d",p[1]);
    return 0;
}
