#include<stdio.h>

int main(){

    int v[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("\n\n");
    
    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    
    printf("\n\n");

    return 0;
}