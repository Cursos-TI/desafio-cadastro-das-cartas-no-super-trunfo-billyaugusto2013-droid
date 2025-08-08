#include <stdio.h>


int main() {
char estado[20];
char codcarta[3];
char nomecity[20];
int populacao;
float area;
float pib;
int numeroturisticos;
//entrada de dados para primeira carta//


char estado2[20];
char codcarta2[3];
char nomecity2[20];
int populacao2;
float area2;
float pib2;
int numeroturisticos2;
//entrada de dados para segunda carta//

printf("Digite o nome do estado1: ");
scanf("%s", estado);
printf("Digite o codigo da carta1: ");
scanf("%s", codcarta);
printf("Digite o nome da cidade1: ");
scanf("%s", nomecity);
printf("Digite a populacao da cidade1: ");
scanf("%d", &populacao);
printf("Digite a area da cidade1: ");
scanf("%f", &area);
printf("Digite o PIB da cidade1: ");
scanf("%f", &pib);
printf("Digite o numero de pontos turisticos da cidade1: ");
scanf("%d", &numeroturisticos);

//coleta de dados da primeira cidade//


printf("Digite o nome do estado2: ");
scanf("%s", estado2);
printf("Digite o codigo da carta2: ");
scanf("%s", codcarta2);
printf("Digite o nome da cidade2: ");
scanf("%s", nomecity2);
printf("Digite a populacao da cidade2: ");
scanf("%d", &populacao2);
printf("Digite a area da cidade2: ");
scanf("%f", &area2);
printf("Digite o PIB da cidade2: ");
scanf("%f", &pib2);
printf("Digite o numero de pontos turisticos da cidade2: ");
scanf("%d", &numeroturisticos2);

//coleta de dados da segunda cidade//

//impressao dos dados da primeira cidade//
printf("\nCarta1\n");
printf("Estado: %s\n", estado);
printf("Codigo da carta: %s\n", codcarta);
printf("Cidade: %s\n", nomecity);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("Numero de pontos turisticos: %d\n", numeroturisticos);


//impressao dos dados da segunda cidade//
printf("\nCarta2\n");
printf("Estado: %s\n", estado2);
printf("Codigo da carta: %s\n", codcarta2);
printf("Cidade: %s\n", nomecity2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Numero de pontos turisticos: %d\n", numeroturisticos2);

return 0;

}
