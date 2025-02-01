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

2. Write a function that outputs a sideways triangle of height 2n-1 and width n, so the output for n = 4 would be:
```
*
**
***
****
***
**
*
```

```C
#include <stdio.h>

void sideways(int size) {
    
    for (int i=1; i<=(size); i++)
    {
        for (int k=0; k<(i) && k<size; k++)
            printf("*");
        printf("\n");
    }
    for (int i=(size-1); i>0; i--)
    {
        for (int k=i; k>0; k--)
            printf("*");
        printf("\n");
    }
}


int main(void) {
    printf("Size 5\n");
    sideways(5);

    printf("\n");

    printf("Size 6\n");
    sideways(6);

    return 0;
}
```

3. Write a function that outputs a right-side-up triangle of height n and width 2n-1; the output for n = 6 would be:
```
     *
    ***
   *****
  *******
 *********
***********
```
```C
#include <stdio.h>

void triangle(int size) {

    for (int i=0; i<size; i++)
    {
        for (int k=size-i-1; k>=1; k--)
            printf(" ");
        for (int k=0; k<(i*2+1); k++)
            printf("*");
        printf("\n");
    }
}


int main(void) {
    triangle(6);

    return 0;
}
```

## Program Flow

1. Build a program where control passes from main to four different functions with 4 calls.
```C
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
```

2. Now make a while loop in main with the function calls inside it. Ask for input at the beginning of the loop. End the while loop if the user hits Q
```C
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
```

3. Next add conditionals to call the functions when the user enters numbers, so 1 goes to function1, 2 goes to function 2, etc.
```C
#include <ctype.h>
#include <stdio.h>

int func1(void) {
    printf("Chamou func1\n\n");
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
```

4. Have function 1 call function a, which calls function b, which calls function c
```C
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
```

5. Draw out a diagram of program flow, with arrows to indicate where control goes
TBD

## Functions

1. Write a function to check if an integer is negative; the declaration should look like bool is_positive(int i);
```C
#include <stdbool.h>
#include <stdio.h>


bool is_positive(int a) {
    if (a > 0)
        return true;
    else
        return false;
}


int main(void) {
    printf("1: %d\n", (int) is_positive(1));
    printf("-1: %d\n", (int) is_positive(-1));
    printf("0: %d\n", (int) is_positive(0));
}
```

2. Write a function to raise a floating point number to an integer power, so for example to when you use it
```
float a = raise_to_power(2, 3);    //a gets 8
float b = raise_to_power(9, 2);    //b gets 81
float raise_to_power(float f, int power);    //make this your declaration
```

```C
#include <stdio.h>


float raise_to_power(float base, int power) {
    float result = 1;
    for (int i=0; i<power; i++)
        result = result * base;
    return result;
}


int main(void) {
    printf("%f\n", raise_to_power(2, 3));
    printf("%f\n", raise_to_power(9, 2));
    printf("%f\n", raise_to_power(-2, 3));

    return 0;
}
```

## Math

1. Write a function to calculate if a number is prime. Return 1 if it is prime and 0 if it is not a prime.
```C
#include <tgmath.h> /* Math functions need to be linked in Clang/GCC with -lm */
#include <stdbool.h>
#include <stdio.h>


bool is_prime(unsigned long num) {
    if (num == 0 || num == 1)
        return false;
    unsigned long sq = sqrt(num);
    for (unsigned long i=1; i<=sq; i++)
    {
        if ((num%i == 0) && i != 1 && i != num)
            return false;
    }

    return true;
}


int main(void) {
    printf("Números Primos\n");
    printf("%d: %d\n", 2, is_prime(2));
    printf("%d: %d\n", 24, is_prime(24));
    printf("%d: %d\n", 13, is_prime(13));
    printf("%d: %d\n", 1, is_prime(1));
    printf("%d: %d\n", 0, is_prime(0));
    printf("%lu: %d\n", 12345678901234, is_prime(12345678901234));
    printf("%lu: %d\n",8406433791189103301, is_prime(8406433791189103301));

    printf("%lu\n", sizeof(unsigned long));

    return 0;
}
```

2. Write a function to determine the number of prime numbers below n.
```C
#include <tgmath.h> /* Math functions need to be linked in Clang/GCC with -lm */
#include <stdbool.h>
#include <stdio.h>


bool is_prime(unsigned long num) {
    if (num == 0 || num == 1)
        return false;
    unsigned long sq = sqrt(num);
    for (unsigned long i=1; i<=sq; i++)
    {
        if ((num%i == 0) && i != 1 && i != num)
            return false;
    }

    return true;
}

int num_primes(unsigned long num) {
    if (num == 0 || num == 1)
        return 0;

    int number_primes = 0;
    for (unsigned long i = 0; i<num; i++) {
        if (is_prime(i))
            number_primes++;
    }

    return number_primes;
}


int main(void) {
    printf("Número de primos abaixo de N\n\n");
    printf("N\tNúmero de primos\n============================\n");
    printf("%d\t%d\n", 0, num_primes(0));
    printf("%d\t%d\n", 1, num_primes(1));
    printf("%d\t%d\n", 2, num_primes(2));
    printf("%d\t%d\n", 3, num_primes(3));
    printf("%d\t%d\n", 13, num_primes(13));
    printf("%d\t%d\n", 24, num_primes(24));
    printf("%d\t%d\n", 2465, num_primes(2465));

    return 0;
}
```

3. Write a function to find the square root by using Newton's method.

4. Write functions to evaluate the trigonometric functions.

5. Try to write a random number generator.

6. Write a function to determine the prime number(s) between 2 and 100. 
