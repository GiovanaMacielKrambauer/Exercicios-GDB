
#include <stdio.h>

int main(){
    char escolha;
    printf("digite + para soma, - para subtração, * para multiplicação, / para divisão");
    scanf("%c", &escolha);
    switch(escolha){
        case'+':
          printf("escolheu soma");
          break;
        case'-':
          printf("escolheu subtração");
          break;
        case'*':
          printf("escolheu multipliação");
          break;
        case'/':
          printf("escolheu divisão");
          break;
        default:
          printf("escolha invalida");
          break;
    }
    
    return 0;
}