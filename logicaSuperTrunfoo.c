#include <stdio.h>

int main() {
    // Definindo variáveis das cartas 1 e 2
    char Estado1[15] = "BAHIA", Estado2[15] = "SAO PAULO";
    char Codigodacarta1[15] = "BA123", Codigodacarta2[15] = "SP456";
    char Cidade1[15] = "SALVADOR", Cidade2[15] = "SAO PAULO";
    int Populacao1 = 15000000, Populacao2 = 12000000;
    float area_km1 = 564733.0, area_km2 = 248222.0;
    float PIB1 = 2000000.0, PIB2 = 3000000.0;
    int Pontosturisticos1 = 10, Pontosturisticos2 = 20;

    // Imprimindo informações
    printf("Estado 1: %s\n", Estado1);
    printf("Estado 2: %s\n", Estado2);
    printf("Codigo da carta 1: %s\n", Codigodacarta1);
    printf("Codigo da carta 2: %s\n", Codigodacarta2);
    printf("Cidade 1: %s\n", Cidade1);
    printf("Cidade 2: %s\n", Cidade2);
    printf("População 1: %d\n", Populacao1);
    printf("População 2: %d\n", Populacao2);
    printf("Área em km² 1: %.2f\n", area_km1);
    printf("Área em km² 2: %.2f\n", area_km2);
    printf("PIB 1: %.2f\n", PIB1);
    printf("PIB 2: %.2f\n", PIB2);
    printf("Pontos turísticos 1: %d\n", Pontosturisticos1);
    printf("Pontos turísticos 2: %d\n", Pontosturisticos2);

    // Fazendo as comparações
    printf("Qual estado tem a maior População?\n");
    if (Populacao1 > Populacao2) {
        printf("A população do estado 1 é maior que a do estado 2\n");
    } else if (Populacao1 < Populacao2) {
        printf("A população do estado 2 é maior que a do estado 1\n");
    } else {
        printf("As populações dos estados são iguais\n");
    }

    printf("A carta vencedora foi Estado 1: %s\n", Estado1);
   
}