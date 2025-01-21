#include <stdio.h>


float raise_to_power(float base, int power) {
    float result = 1;
    for (int i=0; i<power; i++)
        result = result * base;
    return result;
}


int main(void) {
    printf("%f\n", raise_to_power(2, 3));
    printf("%f\n", raise_to_power(9, 2));
    printf("%f\n", raise_to_power(-2, 3));

    return 0;
}

