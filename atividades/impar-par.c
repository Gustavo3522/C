#include <stdio.h>

int main(){
    int num1;
    
    printf("Informe o numero: ");
    scanf("%d", &num1);
    
    
if (num1 % 2) {
    printf("impar");
    }else {
        printf("Par");
    }
    
    return 0;
    
}
