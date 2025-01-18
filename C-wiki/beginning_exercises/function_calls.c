#include <stdio.h>

void A(void) {
    printf("Chamou A\n");
}

void B(void) {
    printf("Chamou B\n");
}

void C(void) {
    printf("Chamou C\n");
}

void D(void) {
    printf("Chamou D\n");
}


int main(void) {
    A();
    B();
    C();
    D();

    return 0;
}

