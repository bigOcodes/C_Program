//Program to Find the Size of int, float, double and char

#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %ld bytes\n", sizeof(intType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of char: %ld byte\n", sizeof(charType));
    
    return 0;
}

/*
      Output

Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte

-----------------------------------------------------------------------------------------------------------------
In this program, 4 variables intType, floatType, doubleType and charType are declared.

Then, the size of each variable is computed using the sizeof operator.
*/
