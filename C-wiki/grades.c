#include <stdio.h>


/* The check function is defined here. */
void check(int x) {

    if (x < 60)
        printf("Sorry, better luck next time.\n");
    else
        printf("Enjoy your vacation! You passed!\n");
}


/* The program starts here, it call check three times. */
int main(void) {

    int a, b, c;

    printf("Type your grade in Mathematics (whole number). \n");
    scanf("%d", &a);
    check(a);
    
    printf("Type your grade in Science (whole number). \n");
    scanf("%d", &b);
    check(b);
    
    printf("Type your grade in Programming (whole number). \n");
    scanf("%d", &c);
    check(c);

    return 0;
}

