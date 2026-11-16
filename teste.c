#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerar_numero(a){
    int num_rand;
    num_rand = rand() % a + 1;
    return num_rand;
}

int gerar_operacao(){
    int operacao_rand;
    operacao_rand = rand() % 4 + 1;
    return operacao_rand;
}

int soma(){
    int num_1 = gerar_numero(100);
    int num_2 = gerar_numero(100);
    printf("Conta: %d + %d\n", num_1, num_2);
    return num_1 + num_2;
}

int subtracao(){
    int num_1 = gerar_numero(100);
    int num_2 = gerar_numero(100);
    printf("Conta: %d - %d\n", num_1, num_2);
    return num_1 - num_2;
}

int multiplicacao(){
    int num_1 = gerar_numero(10);
    int num_2 = gerar_numero(10);
    printf("Conta: %d * %d\n", num_1, num_2);
    return num_1 * num_2;
}

int divisao(){
    int num_1, num_2, aux;
    do{
        num_1 = gerar_numero(100);
        num_2 = gerar_numero(100);
    }while(((num_1 % 5 != 0) || (num_1 % 2 != 0)) && ((num_2 % 5 != 0) || (num_2 % 2 != 0)));
    if (num_2 > num_1){
        aux = num_1;
        num_1 = num_2;
        num_2 = aux;
    }
    printf("Conta: %d / %d\n", num_1, num_2);
    return num_1 / num_2;
}

/*int main(void){
    srand(time(NULL));
    int num_1;
    int num_2;
    int resultado;
    char revelar;
    do{
        num_1 = gerar_numero();
        num_2 = gerar_numero();
        printf("Conta: ");
        printf("%d * %d\n", num_1, num_2);
        resultado = num_1 * num_2;
        printf("Aperte enter para revelar a resposta.\n");
        scanf("%c", &revelar);
        printf("Resultado: %d\n", resultado);
        printf("====================\n\n");
    }while (revelar != '0');
    return 0;
}*/
