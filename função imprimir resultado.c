
#include <stdio.h>

void imprime_resultado(int valor){
    printf("resultado %d \n", valor);
}
void imprimir(int numero){
    printf("funcao %d \n", numero);
    numero = numero + 10;
    imprime_resultado(numero);
}

int main(){
    int numero = 54;
    imprimir(numero);
    printf("main %d", numero);

    return 0;
}