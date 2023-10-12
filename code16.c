#include <stdio.h>

int main() {
    int rows, i, j;

    // Get user input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to iterate over each row
    for (i = 1; i <= rows; i++) {
        // Loop to print stars in each row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
