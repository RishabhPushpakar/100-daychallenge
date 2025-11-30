#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: input.txt cannot be opened.\n");
        return 0;
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: output.txt cannot be created.\n");
        fclose(fin);
        return 0;
    }

    // Read character by character, convert to uppercase, write to output
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);     // convert lowercase to uppercase
        fputc(ch, fout);       // write to output file
    }

    printf("Conversion completed. Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
