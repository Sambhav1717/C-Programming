#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%cg", &ch);

    if(ch >= 'a' && ch <= 'z') {
        printf("Lower Case \n");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("Upper Case \n");
    }
    else {
        printf("Invalid Character");
    }
    return 0;
}
