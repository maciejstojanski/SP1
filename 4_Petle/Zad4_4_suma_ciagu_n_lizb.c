#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, a=1, i=2;
    printf("Podaj liczbe do ktorej ma byc suma n wyrazow ");
    scanf("%d", &n1);
    if(n1<1){
        printf("Podales mniejsza libza od 1.");
        }
    else
    {
        for(i ; i == n1 ; i++){
                a=a+i;
        }
        printf("\nSuma wynosi %d",a);
    }
    return 0;
}