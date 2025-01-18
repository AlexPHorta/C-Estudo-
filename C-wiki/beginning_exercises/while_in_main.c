#include <ctype.h>
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

    char a = '.';
    int running = 1;
    char ppt[] = "Deseja sair do loop (Digite Q para sair.)? ";

    while (running)
    {
        printf("%s", ppt);
        scanf("%c", &a);
        if (a == 'Q')
            break;
        A();
        B();
        C();
        D();
    }

    return 0;
}

