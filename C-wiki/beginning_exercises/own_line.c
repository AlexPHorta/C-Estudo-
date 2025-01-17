#include <ctype.h>
#include <stdio.h>


int main(void) {
    const int max_length = 140;
    char sentence[141];

    printf("Digite uma sentenca (no maximo %d caracteres). Ela sera impressa no console, uma palavra por linha: ", max_length-1);
    scanf("%140[a-zA-Z0-9 ]", sentence);

    for (int i=0; i<(max_length-1); i++)
    {
        if (isalpha(sentence[i]))
            printf("%c", sentence[i]);
        else if (isspace(sentence[i]))
            printf("\n");
        else
            break;
    }
    printf("\n");

    return 0;
}

