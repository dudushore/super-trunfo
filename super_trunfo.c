#include <stdio.h>
 
int main() {
    int population, points;
    float area, pib;
    char state[50];
    char code[50];
    char city[50];

    printf("Digite o Estado: \n");
    scanf (" %[^\n]", state);

    printf("Digite o código para esta carta: \n");
    scanf("%s", code);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", city);

    printf("Digite a população da cidade: \n");
    scanf("%d", &population);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &points);

    float density = (float)population / area;
    float pib_per_capita = (float)pib / population;

    printf("\nEstado: %s\n", state);
    printf("Código: %s\n", code);
    printf("Cidade: %s\n", city);
    printf("População: %d\n", population);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", points);
    printf("Densidade populacional: %.2f hab/km²\n", density);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("\n\nAgora, vamos criar uma segunda carta com os mesmos dados.\n");




    int population2, points2;
    float area2, pib2;
    char state2[50];
    char code2[50];
    char city2[50];

    printf("\nDigite o Estado: \n");
    scanf (" %[^\n]", state2);

    printf("Digite o código para esta carta: \n");
    scanf("%s", code2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", city2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &population2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &points2);

    float density2 = (float)population2 / area2;
    float pib_per_capita2 = (float)pib2 / population2;

    printf("\nEstado: %s\n", state2);
    printf("Código: %s\n", code2);
    printf("Cidade: %s\n", city2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", points2);
    printf("Densidade populacional: %.2f hab/km²\n", density2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);


    return 0;
}
