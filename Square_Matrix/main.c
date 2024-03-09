#include <stdio.h>
#include <stdlib.h>
#include"sqmatrix.h"
int main()
{
    int a[2][2] = {{1,2},
                   {3,4}};
    int b[2][2] = {{3,4},
                   {5,6}};
    int* sum = mat_add(a, b, 2);

    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 2; column++) {
            int cell = row * 2 + column;
            printf("%d, ", sum[cell]);
        }
        printf("\n");
    }
 return 0;
}
