#include <stdio.h>

int main(void) {

    int i = 5;
    printf("Prefix\n========================\n\n");
    while (--i)
    {
        printf("The variable i is: %d\n", i);
    }

    printf("\n");
    i = 5;
    printf("Postfix\n========================\n\n");
    while (i--)
    {
        printf("The variable i is: %d\n", i);
    }

    return 0;
}

