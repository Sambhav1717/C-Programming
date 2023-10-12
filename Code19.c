#include <stdio.h>
void Namaste();
void Bonjour();
void other();
int main()
{
    char ch;
    printf("Enter Character 'i' for indian and 'f' for french: ");
    scanf("%c", &ch);
    if(ch == 'i') {
namaste();
}
else if(ch =='f') {
    bonjour();
}
else {
 other();
}
return 0;
}
void namaste() {
printf("Namaste!!\n"); }
void bonjour() {
printf("Bonjour\n"); }
void other() {
printf("Wrong input");
}
