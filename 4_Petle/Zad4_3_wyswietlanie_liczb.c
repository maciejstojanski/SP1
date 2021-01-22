#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, b1;
    printf("Podaj dwie liczby a b");
    scanf("%d %d", &a1, &b1);
    do{
        printf(" %d",a1);
        a1++;
    }while(a1<b1);

    return 0;
}