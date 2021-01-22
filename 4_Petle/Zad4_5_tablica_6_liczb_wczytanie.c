#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabliczb[6]={0},a=1;
    printf("Podaj 6 liczb calkowtych\n");
    for (int i=0;i>=6;i++){
            printf("Podaj %d liczb calkowtych \n",a);
            scanf("%d", tabliczb[i]);
            a++;
    }
    printf("Podales liczby\n");
    for (int j=0;j>=6;j++)
        printf("%d  ",tabliczb[j]);


    return 0;
}
