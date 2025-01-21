#include <ctype.h>
#include <stdio.h>


void C(void) {
    printf("Chamou C\n\n");
}

void B(void) {
    printf("Chamou B\n");
    C();
}

void A(void) {
    printf("Chamou A\n");
    B();
}

int func1(void) {
    printf("Chamou func1\n");
    A();
    return 0;
}

int func2(void) {
    printf("Chamou func2\n\n");
    return 0;
}

int func3(void) {
    printf("Chamou func3\n\n");
    return 0;
}

int func4(void) {
    printf("Chamou func4\n\n");
    return 0;
}

void prompt(void) {
    printf("Deseja executar qual função (Digite Q para sair.)?\n\n");
    printf("1. Função 1\n2. Função 2\n3. Função 3\n4. Função 4\n\n");
}


int main(void) {

    char a;
    int running = 1;

    while (running)
    {
        prompt();
        scanf("%c", &a);
        switch (a) {
            case 'Q':
                running = 0;
                break;
            case '1':
                func1();
                break;
            case '2':
                func2();
                break;
            case '3':
                func3();
                break;
            case '4':
                func4();
                break;
            default:
                printf("Opção inválida\n\n");
                break;
        }
        while (getchar() != '\n');
    }

    return 0;
}

