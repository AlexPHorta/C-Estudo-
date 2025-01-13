#include <stdio.h>


/* This function computes the absolute value of a number. */
int abs(int x) {

    if ( x >= 0 ) return x;
    else return -x;
}


/* This program calls the abs function defined above twice. */
int main(void){

    int x, y;

    printf("Type the coordinates of a point in 2-plane, say P = (x, y).\nFirst x = ");
    scanf("%d", &x);
    printf("Second y = ");
    scanf("%d", &y);

    printf("The distance of the P point to the x-axis is %d. \n"
           "Its distance to the y-axis is %d. \n", abs(y), abs(x));

    return 0;
}


