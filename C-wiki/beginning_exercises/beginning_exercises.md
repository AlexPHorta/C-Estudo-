# Beginning Exercises

[Exercises](https://en.wikibooks.org/wiki/C_Programming/Beginning_exercises)

## Variable Naming

1. Can a variable name start with a number?
    - No. Variable names start only with a letter or underscore.
2. Can a variable name start with a typographical symbol(e.g. #)?
    - No, except for the underscore.
3. Give an example of a C variable name that would not work. Why doesn't it work? 
    - $variable. Because it starts with the $ symbol.


## Data Types

1. List at least three data types in C.
    - Char;
    - Int;
    - Float;
    - Double;
2. On your computer, how much memory does each require?
```C
#include <stdio.h>

int main(void) {

    printf("Char: %lu\n", sizeof(char));
    printf("Int: %lu\n", sizeof(int));
    printf("Float: %lu\n", sizeof(float));
    printf("Double: %lu\n", sizeof(double));

    return 0;
}
```
3. Which ones can be used in place of another? Why? Are there any limitations on these uses? If so, what are they? Is it necessary to do anything special to use the alternative?
    - The char data type can be used as ints, for example. Smaller data types can be assigned to the bigger ones. A bigger data type must be cast into a smaller one. This operation implies loss of information. The same happens with floats and doubles if they're cast into int (long).

4. Can the name we use for a data type (e.g. 'int', 'float') be used as a variable?
    - No, they're reserved expressions.

5. How would you assign the value 3.14 to a variable called pi?
```C
float pi = 3.14;
```

6. Is it possible to assign an int to a double? Is the reverse possible?
     - Yes. The reverse is not possible, unless you cast the value (which implies loss of information).

7. A common mistake for new students is reversing the assignment statement. Suppose you want to assign the value stored in the variable "pi" to another variable, say "pi2":

    - What is the correct statement? pi2 = pi;
    - What is the reverse? pi = pi2;
    - Is this a valid C statement (even if it gives incorrect results)? Yes, this is a correct statement.
    - What if you wanted to assign a constant value (like 3.1415) to "pi2"? You can use the const word.
    - What would the correct statement look like? const float pi2 = 3.1415;
    - Would the reverse be a valid or invalid C statement? This would be an invalid C statement.


## String Manipulation

1. Write a program that prompts the user for a string (pick a maximum length), and prints its reverse. 
```C
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
```

2. Write a program that prompts the user for a sentence (again, pick a maximum length), and prints each word on its own line.
```C
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
```

## Loops

1. Write a function that outputs a right isosceles triangle of height and width n, so n = 3 would look like:
```
*
**
***
```

```C
#include <stdio.h>


void isosceles (int size) {

    char fill_char = '*';

    for (int i=0; i<size; i++)
    {
        for (int k=0; k<(i+1); k++)
            printf("%c", fill_char);
        printf("\n");
    }
}


int main (void) {

    isosceles(8);

    return 0;
}
```
