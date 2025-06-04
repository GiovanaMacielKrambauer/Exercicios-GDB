
#include <stdio.h>

int main(){
    
    int fat, num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    fat = num;
    
    while(num>1){
        fat = fat * (num-1);
        num = num - 1;
}

    printf("fatorial = %d", fat);
    
    return 0;
}
