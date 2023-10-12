#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Adult \n");
    }
    else if(age < 18 && age > 13)
    {
        printf("Teenager \n");
    }
    else {printf("Child \n");}
    return 0;
}
