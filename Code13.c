#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    switch(number) {
    case 1: (number > 0);
    printf("Number is positive");
    break;
    case 2: (number < 0);
    printf("Number is negative");
    break;
    default: printf("Number is Zero");
    }
    return 0;
}
