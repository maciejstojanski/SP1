#include <stdio.h>
#include <stdlib.h>

void zamien(int *a, int *b)
{
   int tmp;
   tmp=*a;
   *a=*b;
   *b=tmp;
   return;

}

int nwd(int a, int b)
{
    if (a < b)
        zamien(&a,&b);
    if (b == 0)
        return a;
    return nwd(b, a % b);
}


int main() {
    int n1, w1;
    printf("Podaj liczby do NWD - n i w \n");
    scanf("%d %d",&n1,&w1);
    int x=nwd(n1,w1);
    printf("NWD %d i %d wynosi %d",n1,w1,x);
    return 0;
}
