//Program to Check Whether a Character is a Vowel or Consonant

#include <stdio.h>
int main() {
    char c;
    int lowercase, uppercase;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is lowercase
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is uppercase
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 if c is either lowercase or uppercase
    if (lowercase || uppercase)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}

/*
      Output

Enter an alphabet: G
G is a consonant.
-----------------------------------------------------------------------------------------------------------------
The character entered by the user is stored in variable c.

The lowercase variable evaluates to 1 (true) if c is a lowercase vowel and 0 (false) for any other characters.

Similarly, the uppercase variable evaluates to 1 (true) if c is an uppercase vowel and 0 (false) for any other character.

If either lowercase or uppercase variable is 1 (true), the entered character is a vowel.

However, if both lowercase and uppercase variables are 0, the entered character is a consonant.

Note: This program assumes that the user will enter an alphabet. If the user enters a non-alphabetic character, it displays the character is a constant.

To fix this, we can use the isalpha() function. The islapha() function checks whether a character is an alphabet or not.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int lowercase, uppercase;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is lowercase
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is uppercase
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // Show error message if c is not an alphabet
    if (!isalpha(c)) {
      printf("Error! Non-alphabetic character.");
    }
    // if c is an alphabet
    else {
      // evaluates to 1 if c is either lowercase or uppercase
      if (lowercase || uppercase)
        printf("%c is a vowel.", c);
      else
        printf("%c is a consonant.", c);
    }

    return 0;
}

//Now, if the user enters a non-alphabetic character, you will see:
//Error! Non-alphabetic character.
