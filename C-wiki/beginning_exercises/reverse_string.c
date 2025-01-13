#include <ctype.h>
#include <stdio.h>


int main(void) {

    const int max_length = 10;
    char palavra[max_length];
    printf("Digite uma palavra qualquer: ");
    scanf("%10s", palavra);

    printf("A palavra digitada, invertida, é: ");
    for (int i = max_length; i >= 0; i--)
    {
        if (isalpha(palavra[i]))
            printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}

