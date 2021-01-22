#include <stdio.h>
#include <stdlib.h>

void zgadnij (int a){
    int dozga=0;
    do
    {
        printf("\nPodaj liczbe od 1 do 1000\n");
        scanf("%d", &dozga);
        if (dozga < a)
            printf("Za malo\n");
        if (dozga > a)
            printf("Za duzo");
    } while (dozga != a);
    printf("Gratulacje, zgadles!");

}
int main()
{
    int i, zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    int liczb_zgad = rand() % 1000;
    printf("%d",liczb_zgad);
    zgadnij(liczb_zgad);
    return 0;
}
