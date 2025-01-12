#include <stdarg.h>
#include <stdio.h>


float average(int n_args, ...) {

    va_list myList;
    va_start (myList, n_args);

    int numbersAdded = 0;
    int sum = 0;

    while (numbersAdded < n_args)
    {
        int number = va_arg (myList, int);  /* Get next number from list. */
        sum += number;
        numbersAdded += 1;
    }

    va_end (myList);

    float avg = (float) (sum) / (float) (numbersAdded);  /* Find the average. */
    return avg;
}


int main(void) {

    int a = 10, b = 20;
    printf("Average of %d and %d is: %f\n", a, b, average(2, a, b));

    return 0;
}

