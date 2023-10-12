#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows for the hollow isosceles triangle: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
