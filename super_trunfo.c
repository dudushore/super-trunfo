#include <stdio.h>
#include <stdlib.h>

int main() {
    // Carta 1
    unsigned long int population1, population2;
    unsigned int points1, points2;
    double area1, area2, pib1, pib2;
    char state1[50], code1[50], city1[50];
    char state2[50], code2[50], city2[50];

    printf("Digite os dados da Carta 1:\n");
    printf("Estado: "); scanf(" %[^\n]", state1);
    printf("Código: "); scanf("%s", code1);
    printf("Cidade: "); scanf(" %[^\n]", city1);
    printf("População: "); scanf("%lu", &population1);
    printf("Área: "); scanf("%lf", &area1);
    printf("PIB: "); scanf("%lf", &pib1);
    printf("Pontos turísticos: "); scanf("%u", &points1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: "); scanf(" %[^\n]", state2);
    printf("Código: "); scanf("%s", code2);
    printf("Cidade: "); scanf(" %[^\n]", city2);
    printf("População: "); scanf("%lu", &population2);
    printf("Área: "); scanf("%lf", &area2);
    printf("PIB: "); scanf("%lf", &pib2);
    printf("Pontos turísticos: "); scanf("%u", &points2);

    double density1 = population1 / area1;
    double density2 = population2 / area2;

    int op1, op2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional\n");
    scanf("%d", &op1);

    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional\n");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("\nErro: os atributos devem ser diferentes.\n");
        printf("Digite o segundo atributo novamente:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional\n");
        scanf("%d", &op2);

        if (op1 == op2) {
            printf("\nErro novamente: os atributos ainda são iguais. Encerrando.\n");
            return 1;
        }
    }

    double a1 = 0, a2 = 0, b1 = 0, b2 = 0;

    if (op1 == 1) { a1 = population1; a2 = population2; }
    else if (op1 == 2) { a1 = area1; a2 = area2; }
    else if (op1 == 3) { a1 = pib1; a2 = pib2; }
    else if (op1 == 4) { a1 = points1; a2 = points2; }
    else if (op1 == 5) { a1 = density1; a2 = density2; }

    if (op2 == 1) { b1 = population1; b2 = population2; }
    else if (op2 == 2) { b1 = area1; b2 = area2; }
    else if (op2 == 3) { b1 = pib1; b2 = pib2; }
    else if (op2 == 4) { b1 = points1; b2 = points2; }
    else if (op2 == 5) { b1 = density1; b2 = density2; }

    int pontos1 = 0, pontos2 = 0;

    if (op1 == 5) {
        if (a1 < a2) pontos1++;
        else if (a1 > a2) pontos2++;
    } else {
        if (a1 > a2) pontos1++;
        else if (a1 < a2) pontos2++;
    }

    if (op2 == 5) {
        if (b1 < b2) pontos1++;
        else if (b1 > b2) pontos2++;
    } else {
        if (b1 > b2) pontos1++;
        else if (b1 < b2) pontos2++;
    }

    double soma1 = a1 + b1;
    double soma2 = a2 + b2;

    printf("\nComparação entre as cartas:\n");
    printf("Carta 1 - %s (%s): %.2lf e %.2lf (soma: %.2lf)\n", city1, state1, a1, b1, soma1);
    printf("Carta 2 - %s (%s): %.2lf e %.2lf (soma: %.2lf)\n", city2, state2, a2, b2, soma2);

    if (soma1 > soma2) {
        printf("\nCarta 1 venceu a rodada.\n");
    } else if (soma2 > soma1) {
        printf("\nCarta 2 venceu a rodada.\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
