#include <stdbool.h>
#include <stdio.h>


bool is_positive(int a) {
    if (a > 0)
        return true;
    else
        return false;
}


int main(void) {
    printf("1: %d\n", (int) is_positive(1));
    printf("-1: %d\n", (int) is_positive(-1));
    printf("0: %d\n", (int) is_positive(0));
}


