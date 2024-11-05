#include <stdio.h>

int main(){
    int ano;
    
    printf("Informe o ano: ");
    scanf("%d", &ano);
    
    
if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    printf("bissexto");
    }else {
        printf("Nao e bissexto");
    }
    
    return 0;
    
}
