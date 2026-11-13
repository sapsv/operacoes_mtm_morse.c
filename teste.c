#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerar_numero(){
    int num_rand;
    num_rand = rand() % 10 + 1;
    return num_rand;
}

/*int gerar_operacao(){
    int operacao_rand;
    operacao_rand = rand() % 2 + 1;
}*/

int main(void){
    srand(time(NULL));
    int num_1;
    int num_2;
    int resultado;
    char revelar;
    do{
        num_1 = gerar_numero();
        num_2 = gerar_numero();
        printf("%d * %d\n", num_1, num_2);
        resultado = num_1 * num_2;
        scanf("%c", &revelar);
        printf("%d\n", resultado);
    }while (revelar != '0');
    return 0;
}
