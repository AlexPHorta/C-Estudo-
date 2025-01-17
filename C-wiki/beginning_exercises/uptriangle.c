#include <stdio.h>

void triangle(int size) {

    for (int i=0; i<size; i++)
    {
        for (int k=size-i-1; k>=1; k--)
            printf(" ");
        for (int k=0; k<(i*2+1); k++)
            printf("*");
        printf("\n");
    }
}


int main(void) {
    triangle(6);

    return 0;
}

