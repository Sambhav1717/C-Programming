#include <stdio.h>
int main()
{
    int marks;
    printf(" Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 0 && marks <= 30) {
        printf("FAIL \n");
    } else if(marks > 30 && marks <= 100) {
    printf("PASS \n");}
    else {
        printf("Wrong Marks \n");
    }
    return 0;
}
