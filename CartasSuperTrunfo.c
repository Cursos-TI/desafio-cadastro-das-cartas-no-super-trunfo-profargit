#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {


int populacao, ptur;
float area, pib;
char estado;
char cod[2];
char cidade[20];
float densidade, percapi;




printf("Digite a letra do Estado: \n");
scanf("%c", &estado);

printf("Digite o número da Carta: \n");
scanf("%s", &cod);

printf("Digite o nome da Cidade: \n");
scanf("%s", &cidade);

printf("Digite a população: \n");
scanf("%d", &populacao);

printf("Digite a área(Km²): \n");
scanf("%f", &area);

printf("Digite o PIB(bilhões de reais): \n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &ptur);


pib *= 1000000000;
densidade  = (float) populacao / area;
percapi = (float) pib / populacao;



printf("Estado: %c\n", estado);
printf("Código da carta: %c%s \n", estado, cod);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área(Km²): %.2f\n", area);
printf("PIB(Bilhões de reais): %.2f\n", pib);
printf("Pontos turísticos: %d\n", ptur);
printf("Densidade populacional(hab/Km²): %.2f\n", densidade);
printf("PIB per capita(reais): %.2f\n", percapi);

    
    

    return 0;
}
