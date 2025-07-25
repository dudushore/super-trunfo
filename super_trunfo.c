#include <stdio.h>
 
int main() {
    unsigned long int population;
    unsigned int points;
    double area, pib;
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
    scanf("%lu", &population);

    printf("Digite a área da cidade: \n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &points);

    double density = (double)population / area;
    double pib_per_capita = (double)pib / population;
    double super_trunfo = (double)population + area + pib + points + 1.0/density + pib_per_capita;

    printf("\nEstado: %s\n", state);
    printf("Código: %s\n", code);
    printf("Cidade: %s\n", city);
    printf("População: %lu\n", population);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos turísticos: %d\n", points);
    printf("Densidade populacional: %.2lf hab/km²\n", density);
    printf("PIB per capita: %.2lf\n", pib_per_capita);
    printf("Super Trunfo: %.2lf\n", super_trunfo);



    printf("\n\nAgora, vamos criar uma segunda carta com os mesmos dados.\n");

    unsigned long int population2;
    unsigned int points2;
    double area2, pib2;
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
    scanf("%lu", &population2);

    printf("Digite a área da cidade: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &points2);

    double density2 = (double)population2 / area2;
    double pib_per_capita2 = (double)pib2 / population2;
    double super_trunfo2 = (double)population2 + area2 + pib2 + points2 + 1.0/density2 + pib_per_capita2;

    printf("\nEstado: %s\n", state2);
    printf("Código: %s\n", code2);
    printf("Cidade: %s\n", city2);
    printf("População: %lu\n", population2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos turísticos: %d\n", points2);
    printf("Densidade populacional: %.2lf hab/km²\n", density2);
    printf("PIB per capita: %.2lf\n", pib_per_capita2);
    printf("Super Trunfo: %.2lf\n", super_trunfo2);




    int resultado_pop = population > population2;
    int resultado_area = area > area2;
    int resultado_pib = pib > pib2;
    int resultado_points = points > points2;
    int resultado_density = density > density2;
    int resultado_pib_per_capita = pib_per_capita > pib_per_capita2;
    int resultado_super_trunfo = super_trunfo > super_trunfo2;


    printf("\n\nResultado População: %d\n", resultado_pop);
    printf("Resultado Área: %d\n", resultado_area);
    printf("Resultado PIB: %d\n", resultado_pib);
    printf("Resultado Pontos Turísticos: %d\n", resultado_points);
    printf("Resultado Densidade: %d\n", resultado_density);
    printf("Resultado PIB per capita: %d\n", resultado_pib_per_capita);
    printf("Resultado Super Trunfo: %d\n", resultado_super_trunfo);


    return 0;
}
