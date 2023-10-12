//If Else statement
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if(age >= 18) {
        printf("Adult \n");
        printf("You can Vote \n");
        printf("You can Drive \n");
    }
    else {
        printf("Not an Adult");
    }
    return 0;
}
