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

    char a[1];
    int running = 1;
    char ppt[] = "Deseja sair do loop (Digite Q para sair.)? ";

    while (running)
    {
        printf("%s", ppt);
        scanf("%1c", a);
        if (a[0] == 'Q') {
            running = 0;
            break;
        }
        A();
        B();
        C();
        D();
        if (a[0] == '\n')
            continue;
        while (getchar() != '\n');
    }

    return 0;
}

