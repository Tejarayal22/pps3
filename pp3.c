#include <stdio.h>

#include <ctype.h>



int main() {

    char letter;

    printf("Enter a letter: ");

    scanf(" %c", &letter);

    letter = tolower(letter);

    if (letter >= 'a' && letter <= 'z') {

        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {

            printf("%c is a vowel.\n", letter);

        } else {

            printf("%c is a consonant.\n", letter);

        }

    } else {

        printf("Invalid input. Please enter an alphabet.\n");

    }



    return 0;

}
