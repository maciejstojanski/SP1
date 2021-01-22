#include <stdio.h>
#include <stdlib.h>

void odwrotnie(int n)
{
    if (n > 0){
        char znak;
        scanf("%c",&znak);
        odwrotnie(n-1);
        printf("%c",znak);
    }

}

int main() {
    int k;
    printf("Podaj 5 literowy wyraz \n");
    odwrotnie(5);
    return 0;
}