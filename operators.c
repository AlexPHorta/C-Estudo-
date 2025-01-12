#include <stdio.h>

int main(void) {

    int i = 0, j = 0;

    /* while i is less than 5 and j is less than 5, loop */
    while ( (i < 5) && (j < 5) )
    {
        /* postfix increment i */
        printf("i: %d\t", i++);

        /* prefix increment j */
        printf("j: %d\n", ++j);
    }

    printf("At the end they both have equal values: i (%d) and j (%d)\n", i, j);

    getchar();
    return 0;
}

