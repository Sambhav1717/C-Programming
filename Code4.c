#include <stdio.h>
// if divisible then 1
// if not divisible then 0
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}
