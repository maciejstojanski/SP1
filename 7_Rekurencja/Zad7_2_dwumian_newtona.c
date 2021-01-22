#include <stdio.h>
#include <stdlib.h>

int newton(int n, int k){
    if(n == 0 || n == k || k==0){
      return 1;
    }
    if(n > 0& &k>0 && n>=k){
      return newton(n-1, k-1) + newton(n-1,k);
    }
}


int main()
{
    int n1;
    int k1;
    printf("Jesli chcesz policzyc Dwumian Newtona podaj liczbe pierwsza 'n' i druga 'k'\n\n");
    scanf("%d %d",&n1,&k1);
    int x=newton(n1,k1);
    printf("n=%d\nk=%d\n",n1,k1);
    printf("Dwumian Newtona z liczb %d i %d wynosi %d\n",n1,k1,x);
    return 0;
}
