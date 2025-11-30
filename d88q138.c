#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    enum Days d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d -> %s\n", d, names[d]);
    }

    return 0;
}
