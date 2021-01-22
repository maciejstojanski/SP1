#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void przeciw(double a, double b)
{
    double x=hypot(a,b);
    printf("\nPrzeciwprostokatna z bokow %f i %f wynosi %f",a,b,x);

}


int main() {
    double n1, w1;
    printf("Podaj boki trojkata - n i w \n");
    scanf("%f %f",&n1,&w1);
    printf("%f %f",n1,w1);
    przeciw(n1,w1);
    return 0;
}
