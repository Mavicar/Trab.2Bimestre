#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op = 1;
        printf("--------------------------------------\n");
        printf("Escolha dentre as opcoes:\n 1-Triangulo de Pascal\n 2-Arranjo\n 3-Permutacao Simples\n 4-Combinacao\n \n[0]Finalizar\n");
        scanf("%d", &op);

        switch (op){
        case 0:
            printf("\n# FINALIZADO #\n");
            printf("--------------------------------------\n");
            break;

        case 1:
            int linhas, i, j;
            unsigned long long valor;
            printf("--------------------------------------\n");
            printf("PARA CONSTRUIR O TRIANGULO\n");
            printf("Digite o numero de linhas: ");
            scanf("%d", &linhas);
            printf("--------------------------------------\n");
            for(i=0; i<linhas; i++){
                valor = 1;
            for(j=0; j<=i; j++){
                printf("%4llu", valor);
                valor = valor*(i-j)/(j+1);
                }
            printf("\n");
            }
            printf("--------------------------------------\n");
            break;

        case 2:
            int n, k;
            unsigned long long fatN = 1, fatNK = 1, arranjo;
            printf("--------------------------------------\n");
            printf("PARA A RESOLUCAO DO ARRANJO\n");
            printf("Digite a quantidade total de elementos: ");
            scanf("%d", &n);
            printf("Digite quantidade de elementos escolhidos: ");
            scanf("%d", &k);
            for(i=1; i<=n; i++){
                fatN *= i;
            }
            for(i=1; i<=(n-k); i++){
                fatNK *= i;
            }
            arranjo = fatN/fatNK;
            printf("--------------------------------------\n");
            printf("A(%d,%d) = %llu Possibilidades\n", n, k, arranjo);
            printf("--------------------------------------\n");
            break;

        case 3:
            int anag = 1;
            int elem;
            printf("--------------------------------------\n");
            printf("PARA O CALCULO DA PERMUTACAO SIMPLES\n");
            printf("Digite a quantidade de elementos: ");
            scanf("%d", &elem);
            for(i=1; i<=elem; i++){
                anag *= i;
            }
            printf("--------------------------------------\n");
            printf("Resposta = %d Anagramas Possiveis\n", anag);
            break;

        case 4:
            int a, b, comb;
            int fatA = 1;
            int fatB = 1;
            int fatAB = 1;
            printf("--------------------------------------\n");
            printf("PARA FAZER A RESOLUCAO DA COMBINACAO\n");
            printf("Digite o total de elementos: ");
            scanf("%d", &a);
            printf("Digite a quantidade necessaria: ");
            scanf("%d", &b);
            for(i=1; i<=a; i++){
                fatA *= i;
            }
            for(i=1; i<=b; i++){
                fatB *= i;
            }
            for(i=1; i<=(a-b); i++){
                fatAB *= i;
            }
            comb = fatA/(fatB*fatAB);
            printf("--------------------------------------\n");
            printf("Combinacao = %d\n", comb);
            break;

        default:
            printf("\n# OPCAO INVALIDA #\n");
            printf("--------------------------------------\n");
            break;
        }

    return 0;
}

