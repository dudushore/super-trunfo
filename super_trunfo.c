#include <stdio.h>

int main() {
    char estado1[50], cidade1[50], codigo1[50];
    char estado2[50], cidade2[50], codigo2[50];
    unsigned long population1, population2;
    double area1, area2, pib1, pib2;
    unsigned int pontos1, pontos2;
    double densidade1, densidade2;

    // Entrada dos dados da carta 1
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

    // Entrada dos dados da carta 2
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

    densidade1 = population1 / area1;
    densidade2 = population2 / area2;

    // Menu de atributos
    printf("\nAtributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");

    int op1 = 0, op2 = 0;

    printf("Escolha o PRIMEIRO atributo pelo número: ");
    scanf("%d", &op1);
    if(op1 < 1 || op1 > 5) {
        printf("Opção inválida. Encerrando.\n");
        return 1;
    }

    printf("Escolha o SEGUNDO atributo (diferente do primeiro): ");
    scanf("%d", &op2);
    if(op2 < 1 || op2 > 5) {
        printf("Opção inválida. Encerrando.\n");
        return 1;
    }
    if(op2 == op1) {
        printf("Atributo repetido. Encerrando.\n");
        return 1;
    }

    double valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    int resultado1 = 0, resultado2 = 0;

    // Switch para comparar o PRIMEIRO atributo (operador ternário)
    switch(op1) {
        case 1:
            valor1_c1 = population1; valor1_c2 = population2;
            resultado1 = population1 > population2 ? 1 : (population1 < population2 ? -1 : 0);
            break;
        case 2:
            valor1_c1 = area1; valor1_c2 = area2;
            resultado1 = area1 > area2 ? 1 : (area1 < area2 ? -1 : 0);
            break;
        case 3:
            valor1_c1 = pib1; valor1_c2 = pib2;
            resultado1 = pib1 > pib2 ? 1 : (pib1 < pib2 ? -1 : 0);
            break;
        case 4:
            valor1_c1 = pontos1; valor1_c2 = pontos2;
            resultado1 = pontos1 > pontos2 ? 1 : (pontos1 < pontos2 ? -1 : 0);
            break;
        case 5:
            valor1_c1 = densidade1; valor1_c2 = densidade2;
            resultado1 = densidade1 < densidade2 ? 1 : (densidade1 > densidade2 ? -1 : 0);
            break;
        default:
            printf("Erro inesperado!\n");
            return 1;
    }

    // Switch para comparar o SEGUNDO atributo (operador ternário)
    switch(op2) {
        case 1:
            valor2_c1 = population1; valor2_c2 = population2;
            resultado2 = population1 > population2 ? 1 : (population1 < population2 ? -1 : 0);
            break;
        case 2:
            valor2_c1 = area1; valor2_c2 = area2;
            resultado2 = area1 > area2 ? 1 : (area1 < area2 ? -1 : 0);
            break;
        case 3:
            valor2_c1 = pib1; valor2_c2 = pib2;
            resultado2 = pib1 > pib2 ? 1 : (pib1 < pib2 ? -1 : 0);
            break;
        case 4:
            valor2_c1 = pontos1; valor2_c2 = pontos2;
            resultado2 = pontos1 > pontos2 ? 1 : (pontos1 < pontos2 ? -1 : 0);
            break;
        case 5:
            valor2_c1 = densidade1; valor2_c2 = densidade2;
            resultado2 = densidade1 < densidade2 ? 1 : (densidade1 > densidade2 ? -1 : 0);
            break;
        default:
            printf("Erro inesperado!\n");
            return 1;
    }

    double soma1 = valor1_c1 + valor2_c1;
    double soma2 = valor1_c2 + valor2_c2;

    printf("\n--- Comparação ---\n");
    printf("Carta 1: %s | Estado: %s | Código: %s\n", cidade1, estado1, codigo1);
    printf("Valores: %.2lf e %.2lf (soma: %.2lf)\n", valor1_c1, valor2_c1, soma1);
    printf("Carta 2: %s | Estado: %s | Código: %s\n", cidade2, estado2, codigo2);
    printf("Valores: %.2lf e %.2lf (soma: %.2lf)\n", valor1_c2, valor2_c2, soma2);

    if (soma1 > soma2)
        printf("\n%s (estado: %s, código: %s) venceu!\n", cidade1, estado1, codigo1);
    else if (soma2 > soma1)
        printf("\n%s (estado: %s, código: %s) venceu!\n", cidade2, estado2, codigo2);
    else
        printf("\nEmpate!\n");

    char *atributos[] = {"População", "Área", "PIB", "Pontos turísticos", "Densidade demográfica"};
    printf("\nResultados individuais:\n");
    printf("%s no atributo %s: %s\n", 
        resultado1 == 1 ? cidade1 : resultado1 == -1 ? cidade2 : "Empate", 
        atributos[op1-1],
        resultado1 == 0 ? "Empate" : "Venceu");

    printf("%s no atributo %s: %s\n", 
        resultado2 == 1 ? cidade1 : resultado2 == -1 ? cidade2 : "Empate", 
        atributos[op2-1],
        resultado2 == 0 ? "Empate" : "Venceu");

    return 0;
}
