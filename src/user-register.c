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
    printf("\nDetalhes importantes:\n1. Por padrão falamos PT-BR, então na hora de colocar números \"reais\" utilizem \",\" e não \".\".");
    printf("\n2. O CPF se trata de uma String pois o C não lida bem com este tipo de conceito.(Pelo menos no meu conhecimento.)\n");
    printf("Digite \"Confirme\" para continuar: ");
    scanf("%s", confirmacao);

    if (strcmp(confirmacao, "Confirme") == 0){
        puts("Obrigado pela lealdade, prosseguimos.");
    }   else{
            puts("Eerr...oi? Adeus.");
            return 0;
            getchar();
            getchar();
        }
    
    printf("\n|============================================================================================|\n");   
    //separacoes de informacoes. (nome):
    printf("Poderia digitar o seu nome a seguir: ");
    scanf("%49s", nome);
    printf("Olá %s, prazer em conhece-lo, gostaria de lhe pedir algumas informações.\n", nome);
    int n1 = 0;

    do {
    printf("Agora, digite sua idade aqui: ");
    n1 = scanf("%d", &idade);

    if (n1 != 1) { 
        printf("Erro: Digite apenas números inteiros!\n");
        while (getchar() != '\n');
    } else {
        if (idade >= 18 && idade <= 40) {
            printf("Interessante, %d é uma ótima idade.\n", idade);
        } else if (idade > 40) {
            puts("Já possui uma idade mais avançada, mas tem mais experiência.");
        } else {
            puts("Jovenzinho, ainda há muito o que desenvolver.");
        }
    }

} while (n1 != 1);
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

    char escolaridade1 [20] = "", area1[20] = "";
    int e1, e2, area, escolaridade;
    do{
    puts("Agora gostaria que me dissesse seu nível de escolaridade, selecione uma das opções a seguir:");
    puts("1 - Ensino Fundamental");
    puts("2 - Ensino Médio");
    puts("3 - Ensino Superior");
    printf("Digite o número correspondente a sua escolaridade: ");

    e1 = scanf("%d", &escolaridade);
    while(getchar() != '\n');

        if (e1 == 1){
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
                puts("1 - Exatas");
                puts("2 - Humanas");
                puts("3 - Biológicas");
                do{
                    printf("Digite o número correspondente a área do seu curso: ");
                    e2 = scanf("%d", &area);
                        if (e2 == 1){
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
                        }   else{
                                puts("Escolha inválida!");
                                e2 = 0, area = 0;
                            }
                }while(e2 != 1);
                break;
            default:
                puts("Opção inválida.");
                break;            
            }
        }   else{
                puts("Escolha inválida!!");
                e1 = 0, escolaridade = 0;
        }
    }while (e1 != 1);

    printf("Escolaridade: %s", escolaridade1);
    if (area1[0] > 0){
        printf("\nÁrea: %s", area1);
    }

    printf("\n|============================================================================================|\n");
    //Separação para documentação pessoal!!

    char cpf [20];
    printf("Abaixo digite alguns documentos pessoais para finalizarmos seu cadastro.\n");

    do{
    printf("Digite o CPF (Apenas números): ");
    scanf("%11s", cpf);
    while(getchar() != '\n');
        if(strlen(cpf) != 11){
            printf("Você digitou %d caracteres, seu CPF necessita ter 11 caracteres!!\n", (int)strlen(cpf));
        }   else{
                puts("CPF confirmado com sucesso!!");
            }
    }while(strlen(cpf) != 11);

    char cidade [25], estado [25], pais [20], rua [40], numerocasa[5];
    int confirmation5 = 0, choice;

	puts("informe seu endereço abaixo: ");
	do{
		printf("Páis: ");
		scanf("%19s", pais);
		while(getchar() != '\n');
		printf("Estado: ");
		scanf("%24s", estado);
		while(getchar() != '\n');
        printf("Cidade: ");
        scanf("%24s", cidade);
        while(getchar() != '\n');
		printf("Rua: ");
		scanf("%39s", rua);
		while(getchar() != '\n');
		printf("Número da casa (Se não possui, digite SN): ");
		scanf("%4s", numerocasa);
		while(getchar() != '\n');
		printf("Endereço está correto?\n1 - Correto\n2 - Incorreto (Refazer)\n");
		scanf("%d", &choice);
		while(getchar() != '\n');

		if(choice == 2){
			puts("Ok, coloque novamente seu endereço.");
		}	else if(choice == 1){
				puts("Endereço foi adicionado sucesso.");
				confirmation5 = 1;
			}	else{
					puts("Escolha inválida.");
                }
    }while(confirmation5 == 0);

    printf("\n|============================================================================================|\n");
    printf("                                     Programa finalizado                                          ");
    printf("\n|============================================================================================|\n");
    getchar();
    getchar();    
    return 0;
}