#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerar_numero(int a){
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
    int num_1, num_2;
    do{
        num_1 = gerar_numero(100);
        num_2 = gerar_numero(100);
    }while(num_1 < num_2);
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
    }while(num_1 % num_2 != 0);
    printf("Conta: %d / %d\n", num_1, num_2);
    return num_1 / num_2;
}

int main(void){
    srand(time(NULL));
    int num_1;
    int num_2;
    int op;
    int resultado;
    char revelar;
    
    do{
        op = gerar_operacao();
        printf("Aperte o botao para comecar.\n");
        scanf("%c", &revelar);
        if (revelar == '0') return 0;
        switch (op){
            case 1:
                resultado = soma();
                break;
            case 2:
                resultado = subtracao();
                break;
            case 3:
                resultado = multiplicacao();
                break;
            case 4:
                resultado = divisao();
                break;
        }
        scanf("%c", &revelar);
        printf("Resultado: %d\n", resultado);
        printf("========================\n");
    }while(revelar != '0');
    return 0;
}