#include <stdio.h>

void printSpaces(int spaces) {
    int i;
    for (i = 0; i < spaces; i++) {
        printf(" ");
    }
}

void printStars(int stars) {
    int i;
    for (i = 0; i < stars; i++) {
        printf("*");
    }
}

void printPyramid(int rows) {
    int i;
    for (i = 1; i <= rows; i++) {
        printSpaces(rows - i);
        printStars(2 * i - 1);
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    printPyramid(rows);

    return 0;
}
