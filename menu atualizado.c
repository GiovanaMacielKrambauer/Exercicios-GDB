
#include <stdio.h>
int financeiro(int fi);
int vendas(int ve);
int estoque(int es);
int sair(int sa);
void menu_principal();



 int financeiro(int fi){
     if(fi==201){
         printf("registrar despesas");
     }else if(fi==202){
         printf("registrar receitas");
     }else if(fi==203){
         printf("consultar saldo");
     }else if(fi==204){
         printf("voltar ao menu principal");
         menu_principal();
     }
     return fi;
 }
 
 int vendas(int ve){
     int quantidade;
     float valor;
     float verificacao;
     int preco_a = 10;
     int preco_b = 20;
     int preco_c = 15;
     int preco_d = 25;
     float preco_final;
     float multi;
     float mut;
     float muti;
     float mul;
     int escolha_pagamento;
     if(ve==301){
         printf("produto a- R$10.00");
         printf("\nquantos produtos você quer?");
         scanf("%d", &quantidade);
         multi= quantidade * preco_a;
         printf("Preco com desconto %f", multi);
         //printf("multiplicaçao");
         //printf("%d", multi);
            printf("\n1-dinheiro\n");
            printf("\n2-cartao\n");
            printf("\n3-cancelar compra\n");
            printf("qual a forma de pagamento?");
            scanf("%d", &escolha_pagamento);
            
            switch(escolha_pagamento) {
            case 1:
             if (preco_a <= 50) { // se o preço for menor que 50, desconto de 5 porcento 
                 preco_final = preco_a - preco_a * (5.00/100); // calculando desconto
               printf("Total com desconto: R$%.2f\n", preco_final);
                  
               printf("Valor que o cliente entregou: ");
               scanf(" %f", &valor);

                valor = valor - preco_final; // calculando troco

                printf("O troco ficou: R$%.2f", valor);

                     break;
                    
             }
             
             case 2:
             printf("cartão passou? (0 = nao , 1 = sim) :");
             scanf("%f" , &verificacao);
             if(verificacao == 0){
                 printf("cartão recusado");
             }else{
                 printf("compra finalizada");
                 valor = valor + preco_final;
             }
               
              break;
        }
                 
    }else if(ve==302){
         printf("produto b - R$20.00");
         printf("quantos produtos você quer?");
         scanf(" %d", &quantidade);
         mut= quantidade * preco_b;
         printf("preço com desconto %f" , mut);
         //printf("multiplicaçao");
         //printf("%d" , mut);
          printf("\n1-dinheiro\n");
            printf("\n2-cartao\n");
            printf("\n3-cancelar compra\n");
            printf("qual a forma de pagamento?");
            scanf("%d", &escolha_pagamento);
            switch(escolha_pagamento)
            case 1:
            preco_final= preco_b - preco_b * (10.00/100.00);
            printf(" %.2f", preco_final);
            
    }else if(ve==303){
         printf("produto c - R$15.00");
         printf("quantos produtos você quer?");
         scanf(" %d", &quantidade);
         muti= quantidade *preco_c;
         printf(" preço com desconto %f" , muti);
         //printf("multiplicaçao");
         //printf("%d" , muti);
         printf("\n1-dinheiro\n");
            printf("\n2-cartao\n");
            printf("\n3-cancelar compra\n");
            printf("qual a forma de pagamento?");
            scanf("%d", &escolha_pagamento);
            switch(escolha_pagamento)
            case 1:
            preco_final= preco_c - preco_c * (18.00/100.00);
            printf(" %.2f", preco_final);
            
           }else if(ve==304){
         printf("produto d- R$25.00");
         printf("\nquantos produtos você quer?");
         scanf("%d", &quantidade);
         mul= quantidade * preco_d;
         printf("Preco com desconto %f", mul);
         //printf("multiplicaçao");
         //printf("%d", multi);
            printf("\n1-dinheiro\n");
            printf("\n2-cartao\n");
            printf("\n3-cancelar compra\n");
            printf("qual a forma de pagamento?");
            scanf("%d", &escolha_pagamento);
            
            switch(escolha_pagamento)
            case 1:
            preco_final= preco_d * (75.00/100.00);
            printf(" %.2f", preco_final);
            
           }else if(ve==305){
         printf("voltar ao menu principal");
         
            
         
    }
        
     return ve;
}
 
 int estoque(int es){
     int q;
     if(es==101){
         printf("produto a- 50un");
     }else if(es==102){
         printf("produto b - 30un ");
     }else if(es==103){
         printf("produto c - 20un");
     }else if(es==104){
         printf("produto d - 15un");
     }else if (es==105){
         printf("voltar ao menu principal");
         menu_principal();
         
     }
     return es;
 }
 
 int sair(int sa){
     if(sa==11){
         printf("continuar no programa");
     }else if(sa==22){
         printf("sair do programa");
     }
     return sa;
 }
 
 void menu_principal(){
     char escolha;
    printf("Escolha: \n 1) controle de estoque\n 2) -controle vendas\n 3) -controle financeiro\n 4) -sair\n ");
    scanf(" %c", &escolha);
    switch(escolha)
    {
        
        case '1':
         int es;
         printf(" controle de estoque");
         printf("digite o código:");
         scanf("%d", &es);
         estoque(es);
         break;
         
        case '2':
        int ve;
         printf(" controle de vendas");
         printf("digite o código:");
         scanf("%d", &ve);
         vendas(ve);
         break;
         
        case '3':
        int fi;
         printf(" controle financeiro");
         printf("digite o código:");
         scanf("%d", &fi);
         financeiro(fi);
         
         break;
         
         case '4':
         int sa;
         printf(" sair");
         scanf("%d", &sa);
         sair(sa);
         break;
         
        default:
            printf(" escolha invalida");
            break;
    }
 }
 
 
 int main(){
    menu_principal();
    return 0;
    
}