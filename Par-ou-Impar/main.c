#include<stdio.h>

int main()
{
    int numero;
    printf("Digite qualquer número:\n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
    printf("Este número é par");
    }else{
    printf("Este número é impar");
    }
}