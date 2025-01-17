#include <stdio.h>

void sideways(int size) {
    
    for (int i=1; i<=(size); i++)
    {
        for (int k=0; k<(i) && k<size; k++)
            printf("*");
        printf("\n");
    }
    for (int i=(size-1); i>0; i--)
    {
        for (int k=i; k>0; k--)
            printf("*");
        printf("\n");
    }
}


int main(void) {
    printf("Size 5\n");
    sideways(5);

    printf("\n");

    printf("Size 6\n");
    sideways(6);

    return 0;
}

