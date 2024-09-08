#include <stdio.h>

typedef struct varchar varchar;

typedef struct string string;

int main(void) {

    float saldo,rendimento;

    printf("coloque seu saldo: ");
    scanf("%f",&saldo);

    printf("\nquantos %% de rendimento: ");
    scanf("%f",&rendimento);

    rendimento = saldo * (rendimento/100);


    printf("\nseu saldo: %0.2f com rendimento fica: %0.2f",saldo,saldo+rendimento);

    return 0;
}