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

int num_primes(unsigned long num) {
    if (num == 0 || num == 1)
        return 0;

    int number_primes = 0;
    for (unsigned long i = 0; i<num; i++) {
        if (is_prime(i))
            number_primes++;
    }

    return number_primes;
}


int main(void) {
    printf("Número de primos abaixo de N\n\n");
    printf("N\tNúmero de primos\n============================\n");
    printf("%d\t%d\n", 0, num_primes(0));
    printf("%d\t%d\n", 1, num_primes(1));
    printf("%d\t%d\n", 2, num_primes(2));
    printf("%d\t%d\n", 3, num_primes(3));
    printf("%d\t%d\n", 13, num_primes(13));
    printf("%d\t%d\n", 24, num_primes(24));
    printf("%d\t%d\n", 2465, num_primes(2465));

    return 0;
}

