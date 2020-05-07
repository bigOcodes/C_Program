//Program to Multiply Two Floating-Point Numbers

#include <stdio.h>
int main() {
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2lf", product);
    
    return 0;
}
/*
      Output

Enter two numbers: 2.4
1.12
Product = 2.69
---------------------------------------------------------------------------------------------------------------------------------------
In this program, the user is asked to enter two numbers which are stored in variables a and b respectively.

printf("Enter two numbers: ");
scanf("%lf %lf", &a, &b); 
Then, the product of a and b is evaluated and the result is stored in product.

product = a * b;

Finally, product is displayed on the screen using printf().

printf("Product = %.2lf", product);
Notice that, the result is rounded off to the second decimal place using %.2lf conversion character.
*/
