#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    char nome[50],confirmacao[10];
    int idade;

    printf("\n|============================================================================================|\n");    
    puts("Olá Dev!");
    printf("Digite \"Confirme\" para continuar: ");
    scanf("%s", confirmacao);

    if (strcmp(confirmacao, "Confirme") == 0){
        puts("Obrigado pela lealdade, prosseguimos.");
    }   else{
            puts("Eerr...oi? Adeus.");
            return 0;
        }
    
    printf("\n|============================================================================================|\n");   
    //separacoes de informacoes. (nome):

    printf("Poderia digitar o seu nome a seguir: ");
    scanf("%49s", nome);
    printf("Olá %s, prazer em conhece-lo, gostaria de lhe pedir algumas informações.\n", nome);
    printf("Agora, digite sua idade aqui: ");
    while(getchar() != '\n');
    scanf("%d", &idade);
    if (idade >= 18 && idade <= 40){
        printf("Interessante, %d é uma ótima idade.\n", idade);
    }       else if (idade > 40){
                puts("Já possui uma idade mais avançada, mas isso significa que tem mais experiência de vida.");
            }       else{
                        puts("Jovenzinho, ainda há muito do que se desenvolver.");
                    }
    printf("Nome: %s\nIdade: %d", nome, idade);
    int r1 = 0, r2 = 0;
    float peso, altura; 
                    
    printf("\n|============================================================================================|\n");
    //separacao de informacoes. (Peso e Altura):  

    do{
    if(r1 != 1){
        printf("Digite seu peso: ");
        r1 = scanf("%f", &peso);

        if (r1 != 1 || peso > 200 || peso <= 0){
            puts("Entrada inválida ou peso invalido");
            while (getchar() != '\n');
            r1 = 0; 
        }
    }

    if (r2 != 1){
        printf("Digite sua altura: ");
        r2 = scanf("%f", &altura);

        if (r2 != 1 || altura > 2.50 || altura <= 0){
            puts("Entrada inválida ou altura invalida.");
            while (getchar() != '\n');
            r2 = 0;
        }
    }
    }while (r1 != 1 || r2 != 1 || peso > 200 || peso <= 0 || altura > 2.50 || altura <= 0);

    if (peso < 80 && altura >= 1.60){
        puts("Você tem uma ótima estrutura corporal!");
    }   else{
                puts("Você tem uma estrutura comum!");
        }
    printf("Peso: %.2f\nAltura: %.2f", peso, altura);

    printf("\n|============================================================================================|\n");    
    //separacao de informacoes Escolaridade e Área de Estudo
    
    int escolaridade;
    char escolaridade1 [20], area1[20];
    puts("Agora gostaria que me dissesse seu nível de escolaridade, selecione uma das opções a seguir:");
    puts("1 - Ensino Fundamental");
    puts("2 - Ensino Médio");
    puts("3 - Ensino Superior");
    printf("Digite o número correspondente a sua escolaridade: ");
    while (getchar() != '\n'); 
    scanf("%d", &escolaridade);

    switch (escolaridade){
        case 1:
            puts("Você selecionou Ensino Fundamental.");
            strcpy(escolaridade1,"Ensino Fundamental");
            break;
        case 2:
            puts("Você selecionou Ensino Médio.");
            strcpy(escolaridade1,"Ensino Médio.");
            break; 
        case 3:
            puts("Você selecionou Ensino Superior.");
            strcpy(escolaridade1,"Ensino Superior.");
            puts("Em que área seu curso corresponde?");
            int area;
            puts("1 - Exatas");
            puts("2 - Humanas");
            puts("3 - Biológicas");
            printf("Digite o número correspondente a área do seu curso: ");
            while(getchar() != '\n');
            scanf("%d", &area);
            switch (area){
                case 1:
                    puts("Você selecionou Exatas.");
                    strcpy(area1, "Exatas");
                    break;
                case 2:
                    puts("Você selecionou Humanas.");
                    strcpy(area1, "Humanas");
                    break;
                case 3:
                    puts("Você selecionou Biológicas.");
                    strcpy(area1, "Biológicas.");
                    break;
                default:
                    puts("Opção inválida.");
                    break;
            }

            break;
        default:
            puts("Opção inválida.");
            break;
    
        }
    printf("Escolaridade: %s", escolaridade1);
    if (area1[0]){
        printf("\nÁrea: %s", area1);
    }
    printf("\n|============================================================================================|\n");
    printf("                                     Programa finalizado                                          ");
    printf("\n|============================================================================================|\n");
    getchar();
    getchar();    
    return 0;
}