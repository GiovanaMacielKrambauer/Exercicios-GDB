
#include <stdio.h>

int main(){
    int menu;
    char escolha;
    
    printf("digite 1 para controle de estoque, 2 para controle financeiro, 3 para controle de vendas, 4 para sair do menu");
    scanf("%c", &escolha);
    switch(escolha){
        case'1':
          printf("controle de estoque");
          break;
        case'2':
          printf("controle financeiro");
          break;
        case'3':
          printf("controle de vendas");
          break;
        case'4':
          printf("sair do menu");
          break;
          
        default:
          printf("escolha invalida, burro");
          break;
    }
  
    return 0;
}
