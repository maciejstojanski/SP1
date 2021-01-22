#include <stdio.h>
#include <stdlib.h>

int potega(int a, int n)
{
    if (n == 1){
        return a;
    }
    int s = potega(a, n - 1);
    return a * s;
}

int main()
{
    int n1;
    int k1;
    printf("Jesli chcesz policzyc potege dwoch liczb, podaj liczby 'n' i druga 'k'\n\n");
    scanf("%d %d",&n1,&k1);
    int x=potega(n1,k1);
    printf("n=%d\nk=%d\n",n1,k1);
    printf("Potega %d i %d wynosi %d\n",n1,k1,x);
    return 0;
}