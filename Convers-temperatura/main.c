#include<stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    
    printf("Digite a temperatura em celsius:\n");
    scanf("%f", &celsius);
    
    if (celsius > 100){
    printf("A temperatura em Celsius é limitada a 100°");
    }else{
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("Temperatura em Fahrenheit: %f", fahrenheit);
    }
}
