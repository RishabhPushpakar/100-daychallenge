#include <stdio.h>
#include <ctype.h>   // for isalpha()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("textfile.txt", "r");
    if (fp == NULL) {
        printf("Error: textfile.txt cannot be opened.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);   // convert to lowercase for easy checking

        if (isalpha(ch)) {  // check if the character is alphabetic
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        // digits, spaces, punctuation are automatically ignored
    }

    fclose(fp);

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
