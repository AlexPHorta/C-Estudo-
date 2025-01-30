#include <tgmath.h> /* Math functions need to be linked in Clang/GCC with -lm */
#include <stdbool.h>
#include <stdio.h>


bool is_prime(unsigned long num) {
    if (num == 0 || num == 1)
        return false;
    unsigned long sq = sqrt(num);
    for (unsigned long i=1; i<=sq; i++)
    {
        if ((num%i == 0) && i != 1 && i != num)
            return false;
    }

    return true;
}


int main(void) {
    printf("Números Primos\n");
    printf("%d: %d\n", 2, is_prime(2));
    printf("%d: %d\n", 24, is_prime(24));
    printf("%d: %d\n", 13, is_prime(13));
    printf("%d: %d\n", 1, is_prime(1));
    printf("%d: %d\n", 0, is_prime(0));
    printf("%lu: %d\n", 12345678901234, is_prime(12345678901234));
    printf("%lu: %d\n",8406433791189103301, is_prime(8406433791189103301));

    printf("%lu\n", sizeof(unsigned long));

    return 0;
}

