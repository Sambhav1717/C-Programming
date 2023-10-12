#include <stdio.h>
int main()
{
    int i, up, low, prime, n;
    printf("Enter Lower limit: ");
    scanf("%d", &low);
    printf("Enter Upper limit: ");
    scanf("%d", &up);
    for(n=low+1; n < up; n++)
    {
        prime=1;
        for(i=2; i<n/2; i++)
            if(n%i==0)
    }
}
