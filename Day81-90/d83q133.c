#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;

    for (m = JAN; m <= DEC; m++) {
        printf("%d - ", m);

        switch (m) {
            case JAN: printf("JANUARY -> 31 days\n"); break;
            case FEB: printf("FEBRUARY -> 28/29 days\n"); break;
            case MAR: printf("MARCH -> 31 days\n"); break;
            case APR: printf("APRIL -> 30 days\n"); break;
            case MAY: printf("MAY -> 31 days\n"); break;
            case JUN: printf("JUNE -> 30 days\n"); break;
            case JUL: printf("JULY -> 31 days\n"); break;
            case AUG: printf("AUGUST -> 31 days\n"); break;
            case SEP: printf("SEPTEMBER -> 30 days\n"); break;
            case OCT: printf("OCTOBER -> 31 days\n"); break;
            case NOV: printf("NOVEMBER -> 30 days\n"); break;
            case DEC: printf("DECEMBER -> 31 days\n"); break;
        }
    }

    return 0;
}
