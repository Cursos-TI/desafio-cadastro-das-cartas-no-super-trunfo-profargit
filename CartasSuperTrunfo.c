#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {


int populacao, area, pib, turismo, cod;
char estado;
char cid[50];




printf("Digite a letra do Carta:\n");
scanf("%c", &estado);

printf("Digite o código da Cidade:\n");
scanf("%d", &cod);

printf("Digite o nome da Cidade:\n");
scanf("%s", &cid);

printf("Digite a população:\n");
scanf("%d", &populacao);

printf("Digite a área:\n");
scanf("%d", &area);

printf("Digite o PIB:\n");
scanf("%d", &pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &turismo);



printf("Carta: %c %d\n", estado, cod);
printf("Cidade: %s\n", cid);
printf("População: %d\n", populacao);
printf("Área: %d\n", area);
printf("PIB: %d\n", pib);
printf("Pontos turísticos: %d\n", turismo);


    
    

    return 0;
}
