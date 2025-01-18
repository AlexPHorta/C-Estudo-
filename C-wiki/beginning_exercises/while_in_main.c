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
    char prev = 'x';
    int running = 1;
    char ppt[] = "Deseja sair do loop (Digite Q para sair.)? ";

    while (running)
    {
        printf("%s", ppt);
        while (! isalpha(prev))
            prev = a;
            scanf("%c", &a);
        if (a == 'Q')
        {
            A();
            B();
            C();
            D();
            break;
        } else {
            a = '.';
        }
    }

    return 0;
}

