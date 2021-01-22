#include <stdio.h>
#include <stdlib.h>

void silnia(int a)
{
    long b=1;
    for(a;a>0;a--){
        b*=a;
    }
    printf("Silnia wynosi %d",b);
}


int main() {
    int n1;
    printf("Podaj silnie od obliczenia - n\n");
    scanf("%d",&n1);
    silnia(n1);
    return 0;
}