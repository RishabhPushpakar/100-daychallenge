#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s;

    s = SUCCESS;   // Change to FAILURE or TIMEOUT to test

    if (s == SUCCESS)
        printf("Operation Successful!\n");
    else if (s == FAILURE)
        printf("Operation Failed!\n");
    else if (s == TIMEOUT)
        printf("Operation Timed Out!\n");

    return 0;
}
