#include <stdio.h>

void main(){
    float nota1,nota2,nota3, media;

    printf("digite a nota 1: ");
    scanf("%f", &nota1);

    printf("digite a nota2: ");
    scanf("%f", &nota2);

    printf("digite a nota3: ");
    scanf("%f", &nota3);

    media =(nota1 + nota2 + nota3)/ 3;
    printf("media final: %2f", media);
}
