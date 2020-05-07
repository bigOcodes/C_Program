//Program to Find ASCII Value of a Character

/*
In C programming, a character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself. That value is known as it's ASCII value.

For example, the ASCII value of 'A' is 65.

What this means is that, if you assign 'A' to a character variable, 65 is stored in the variable rather than 'A' itself.

Now, let's see how we can print the ASCII value of characters in C programming.
*/

#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}

/*
      Output

Enter a character: G
ASCII value of G = 71

---------------------------------------------------------------------------------------------------------------------------------------
In this program, the user is asked to enter a character. The character is stored in variable c.

When %d format string is used, 71 (the ASCII value of G) is displayed.

When %c format string is used, 'G' itself is displayed.
*/
