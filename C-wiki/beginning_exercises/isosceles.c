#include <stdio.h>


void isosceles (int size) {

    char fill_char = '*';

    for (int i=0; i<size; i++)
    {
        for (int k=0; k<(i+1); k++)
            printf("%c", fill_char);
        printf("\n");
    }
}


int main (void) {

    isosceles(8);

    return 0;
}

