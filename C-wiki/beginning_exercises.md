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
    - What if you wanted to assign a constant value (like 3.1415) to "pi2"? You can use the const word. Like: const float pi2 = 3.1415;

        a. What would the correct statement look like?
        b. Would the reverse be a valid or invalid C statement?

