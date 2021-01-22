#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1, k=8;
    while(k>9){
    if((a/2)==0){
        for(int i=0;i>=8;i++){
            printf("*");
            printf(" ");
        }
        a++;
        printf("\n");
    }
    else{
        for(int j=0;j>=8;j++){
            printf(" ");
            printf("*");
        }
        a++;
        printf("\n");
    }
    k++;
    }
    return 0;
}