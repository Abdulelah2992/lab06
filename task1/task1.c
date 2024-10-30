#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, x, *arrX, *arrY, *arrZ, i;
    printf("Enter the size of vectors: ");
    scanf("%d", &x);
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    arrX = (int*) malloc(x * sizeof(int));
    arrY = (int*) malloc(x * sizeof(int));
    arrZ = (int*) malloc(x * sizeof(int));

    if (arrX == NULL || arrY == NULL || arrZ == NULL) {
        printf("Error! Memory cannot be allocated.\n");
             return 1;
    }

    for (i = 0; i < x; i++) {
        printf("Enter the value of x[%d]: ", i);
        scanf("%d", &arrX[i]);
    }
    for (i = 0; i < x; i++) {
        printf("Enter the value of y[%d]: ", i);
        scanf("%d", &arrY[i]);
    }
    for (i = 0; i < x; i++) {
        arrZ[i] = a * arrX[i] + b * arrY[i];
    }
    for (i = 0; i < x; i++) {
        printf("the result z[%d] = %d\n", i, arrZ[i]);
    }

    free(arrX);
    free(arrY);
    free(arrZ);

    return 0;
}
