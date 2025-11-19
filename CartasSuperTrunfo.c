#include <stdio.h>
int main() {
    /* DESAFIO - CARTAS SUPER TRUNFO - SI - ESTÁCIO*/

    /* CARTA SUPER TRUNFO - 01 */

    char estado1 [10] = "Bahia"; 
    char codigo1[4] = "29";
    char nomeCidade1[20] = "Salvador";
    float area1 = 12.345679;
    float pib1 = 1.23;
    int numeroPontos1 = 1; 

   /* CARTA SUPER TRUNFO - 02 */

    char estado2[10] = "Ceara";
    char codigo2[4] = "23";
    char nomeCidade2[20] = "Fortaleza";
    float area2 = 87.654321;
    float pib2 = 3.21;
    int numeroPontos2 = 1; 

     
    printf("\n CARTA SUPER TRUNFO 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontos1); 

    printf("\n CARTA SUPER TRUNFO 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontos2); 

    return 0;
}
