#include <stdio.h>

#define Max_brinquedos 100

struct Brinquedo {
    char nome[50];
    float valor;
    int quantidade_estoque;
    char descricao[100];
};

float Lucro(struct Brinquedo brinquedo, int quantidade_vendida, float margem_lucro) {
    
    float lucro_total = brinquedo.valor * quantidade_vendida * margem_lucro;
    return lucro_total;
}

void vendas(struct Brinquedo *brinquedo, int quantidade_vendida) {
    
    if (quantidade_vendida <= brinquedo->quantidade_estoque) {
        brinquedo->quantidade_estoque -= quantidade_vendida;
        printf("Venda realizada! Estoque restante: %d\n", brinquedo->quantidade_estoque);
    } else {
        printf("Quantidade de venda maior que o estoque!\n");
    }
}

void limpar_buffer() {
    while (getchar() != '\n');
}

int main() {
    int opcao;
    char resposta;
    struct Brinquedo brinquedos[Max_brinquedos] = {
        {"Carrinho de Controle Remoto", 79.99, 20, "Um carrinho de controle remoto veloz e divertido"},
        {"Boneca de Pano", 34.50, 20, "Uma boneca de pano macia e colorida"}
    };
    int cont = 2; 

    printf("LOJA DE BRINQUEDOS DO GUSTAVO\n");
    printf("Deseja entrar? [S/N]");
    scanf("%c", &resposta);

    while (resposta == 'S' || resposta == 's' ){
    printf("Escolha uma opcao:\n");
    printf("[1] Cadastrar brinquedo novo\n");
    printf("[2] Ver estoque\n");
    printf("[3] Calcular lucro de vendas\n");
    scanf("%d", &opcao);
    getchar();  

    switch (opcao) {
        case 1:
        if (cont < Max_brinquedos) {
                printf("Nome do brinquedo: ");
                fgets(brinquedos[cont].nome, sizeof(brinquedos[cont].nome), stdin);
                //brinquedos[cont].nome[strcspn(brinquedos[cont].nome, "\n")] = '\0';  

                printf("Valor do brinquedo: ");
                while (scanf("%f", &brinquedos[cont].valor) != 1 || brinquedos[cont].valor <= 0) {
                        printf("Valor inválido! Digite novamente o valor positivo: ");
                        limpar_buffer();   
                }
                getchar();
                
                printf("Quantidade de brinquedos: ");
                    while (scanf("%d", &brinquedos[cont].quantidade_estoque) != 1 || brinquedos[cont].quantidade_estoque <= 0) {
                        printf("Quantidade inválida! Digite novamente uma quantidade positiva: ");
                        limpar_buffer();  
                    }

                printf("Descricao do brinquedo: ");
                fgets(brinquedos[cont].descricao, sizeof(brinquedos[cont].descricao), stdin);
                limpar_buffer();
                //brinquedos[cont].descricao[strcspn(brinquedos[cont].descricao, "\n")] = '\0';

                cont++;

        }else{
            printf("Estoque de brinquedos atingiu o limite maximo.\n");
        }
            break;

        case 2:
            printf("Estoque de Brinquedos:\n");
            for (int i = 0; i < cont; i++) {
                printf("Brinquedo %d: Nome: %s, Valor: R$%.2f, Descricao: %s Quantidade em estoque %d\n", i + 1, brinquedos[i].nome, brinquedos[i].valor, brinquedos[i].descricao, brinquedos[i].quantidade_estoque);
            }
            break;

            case 3:
                // Calcular lucro de vendas
                printf("Selecione o brinquedo para calcular o lucro:\n");
                for (int i = 0; i < cont; i++) {
                    printf("[%d] %s - R$%.2f\n", i + 1, brinquedos[i].nome, brinquedos[i].valor);
                }
                int escolha, quantidade_vendido;
                float margem_lucro;  

                printf("Digite o numero do brinquedo: ");
                scanf("%d", &escolha);
                escolha--;

                while (escolha < 0 || escolha >= cont) {
                    printf("Escolha invalida!\n");
                    printf("Digite o numero do brinquedo: ");
                    scanf("%d", &escolha);
                    escolha--;
                }

                printf("Digite a quantidade vendida: ");
                while (scanf("%d", &quantidade_vendido) != 1 || quantidade_vendido <= 0 || quantidade_vendido > brinquedos[escolha].quantidade_estoque) {
                    printf("Quantidade invalida! Digite novamente uma quantidade valida: ");
                    limpar_buffer();
                }

                vendas(&brinquedos[escolha], quantidade_vendido);
                

                printf("Digite a margem de lucro (por exemplo, 0.20 para 20%%): ");
                while (scanf("%f", &margem_lucro) != 1 || margem_lucro <= 0) {
                    printf("Margem de lucro invalida! Digite novamente: ");
                    limpar_buffer();
                }

                // Calcula o lucro para o brinquedo escolhido
                float lucro = Lucro(brinquedos[escolha], quantidade_vendido, margem_lucro);
                printf("Lucro obtido com a venda de %d unidade(s) de %s: R$%.2f\n", quantidade_vendido, brinquedos[escolha].nome, lucro);
                break;

        default:
            printf("Opcao invalida.\n");
            break;
    }
    limpar_buffer();
    printf("\n Deseja continuar ? [S/N]");
        scanf("%c", &resposta);
        limpar_buffer();
    }
    
    printf("OBRIGADO, VOLTE SEMPRE !!!");

    return 0;
}
