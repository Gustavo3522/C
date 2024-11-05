#include <stdio.h>
int main () {
    double saque, deposito, trasferencia;
    double saldo_total = 500.00;
    char login;
    int opcao;
    printf("Deseja entrar ? [S/N]\n");
    scanf("%c", & login);
    printf("\nBEM VINDO AO BANCO UCB !!!\n");
    while (login == 'S' || login == 's' ){
        
        printf("---------------------------\n");
        printf("[1]- SAQUE\n");
        printf("[2]- TRASFERENCIA\n");
        printf("[3]- DEPOSITO\n");
        printf("[4]- SALDO ATUAL\n");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            printf("Quanto voce desseja sacar? ");
            scanf("%lf", &saque);
            
            if (saque <= saldo_total)
            {
                saldo_total = saldo_total - saque;

                printf("Saque feito com sucesso\n");

            }else{
                printf("Saldo insuficiente\n");
            }
            
            break;

        case 2:
            printf("Quanto voce desseja Trasferir? ");
            scanf("%lf", &trasferencia);

            if (trasferencia <= saldo_total)
            {
                saldo_total = saldo_total - trasferencia;

                printf("Trasferencia feito com sucesso\n");

            }else{
                printf("Saldo insuficiente\n");
            }
            break;

        case 3:
            printf("Quanto voce desseja depositar? ");
            scanf("%lf", &deposito);

            saldo_total = saldo_total + deposito;

            printf("Deposito feito com sucesso\n");

            break;

        case 4:

            printf("seu saldo atual e %.2lf\n", saldo_total);
            break;
        
        default:
            break;
        
    }
        printf("\n Deseja continuar ? [S/N]");
        scanf("%c", &login);
}
    return 0;

}
