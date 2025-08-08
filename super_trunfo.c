#include <stdio.h>

int main() {
    char estado1[50], cidade1[50], codigo1[50];
    char estado2[50], cidade2[50], codigo2[50];
    unsigned long population1, population2;
    double area1, area2, pib1, pib2;
    unsigned int pontos1, pontos2;
    double densidade1, densidade2;

    printf("Digite o ESTADO da primeira carta: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o CÓDIGO da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite a CIDADE da primeira carta: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &population1);
    printf("Área: ");
    scanf("%lf", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Pontos turísticos: ");
    scanf("%u", &pontos1);

    printf("\nDigite o ESTADO da segunda carta: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o CÓDIGO da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite a CIDADE da segunda carta: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &population2);
    printf("Área: ");
    scanf("%lf", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Pontos turísticos: ");
    scanf("%u", &pontos2);

    double pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    densidade1 = (double)population1 / area1;
    densidade2 = (double)population2 / area2;
    
    pib_per_capita1 = pib1 / population1;
    pib_per_capita2 = pib2 / population2;

    super_poder1 = (float)population1 + (float)area1 + (float)pib1 + (float)pontos1 + (float)pib_per_capita1 + (1.0f / (float)densidade1);
    super_poder2 = (float)population2 + (float)area2 + (float)pib2 + (float)pontos2 + (float)pib_per_capita2 + (1.0f / (float)densidade2);

    printf("\nComparação de Cartas:\n");
    
    printf("População: Carta 1 venceu (%d)\n", population1 > population2);

    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);

    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
