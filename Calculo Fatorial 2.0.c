
#include <stdio.h>
int fatorial(int num){
    if(num == 0){
        return 1;
    }
    return num * fatorial(num-1);
}

int main()
{
    int fat, num;
    
    printf("digite um numero: ");
    scanf("%d", &num);
    
    fat = fatorial(num);
    
    printf("fatorial = %d", fat);

    return 0;
}