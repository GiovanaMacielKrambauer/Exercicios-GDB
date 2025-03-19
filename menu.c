
#include <stdio.h>

 int financeiro(int fi){
     if(fi==201){
         printf("registrar despesas");
     }else if(fi==202){
         printf("registrar receitas");
     }else if(fi==203){
         printf("consultar saldo");
     }else if(fi==204){
         printf("voltar ao menu principal");
     }
     return fi;
 }
 
 int vendas(int ve){
     int q;
     int a= 10;
     int b= 20;
     int c= 15;
     int d= 25;
     int multi= q * a;
     int mul= q * d;
     int mut= q * b;
     int muti= q * c;
     if(ve==301){
         printf("produto a- R$10.00");
         printf("\nquantos produtos você quer?");
         scanf(" %d", &q);
         multi= q * a;
         printf("%d", multi);
         //printf("multiplicaçao");
         //printf("%d", multi);
     }else if(ve==302){
         printf("produto b - R$20.00");
         printf("quantos produtos você quer?");
         scanf(" %d", &q);
         mut= q * b;
         printf("%d", mut);
         //printf("multiplicaçao");
         //printf("%d" , mut);
     }else if(ve==303){
         printf("produto c - R$15.00");
         printf("quantos produtos você quer?");
         scanf(" %d", &q);
         muti= q * c;
         printf("%d" , muti);
         //printf("multiplicaçao");
         //printf("%d" , muti);
     }else if(ve==304){
         printf("produto d - R$25.00");
         printf("quantos produtos você quer?");
         scanf(" %d", &q);
         mul=q * d;
         printf(" %d", mul);
         //printf("multiplicaçao");
         //printf(" %d", multi);
         
        
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
     }else if(es==105){
         printf("voltar ao menu principal");
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
 
 int main(){ 
     
    char escolha;
    printf("Escolha: \n 1) controle de estoque\n 2) -controle vendas\n 3) -controle financeiro\n 4) -sair\n ");
    scanf("%c", &escolha);
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
         printf("digite o código:");
         scanf("%d", &sa);
         sair(sa);
         break;
         
       default:
            printf(" escolha invalida, burro!");
            break;
    
    }

    return 0;
}
