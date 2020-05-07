//Program to Compute Quotient and Remainder

#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
/*
    Output

Enter dividend: 25
Enter divisor: 4
Quotient = 6
Remainder = 1

----------------------------------------------------------------------------------------------------------------
In this program, the user is asked to enter two integers (dividend and divisor). They are stored in variables dividend and divisor respectively.

printf("Enter dividend: ");
scanf("%d", &dividend);
printf("Enter divisor: ");
scanf("%d", &divisor);
Then the quotient is evaluated using / (the division operator), and stored in quotient.

quotient = dividend / divisor;
Similarly, the remainder is evaluated using % (the modulo operator) and stored in remainder.

remainder = dividend % divisor;
Finally, the quotient and remainder are displayed using printf().

printf("Quotient = %d\n", quotient);
printf("Remainder = %d", remainder);
*/
