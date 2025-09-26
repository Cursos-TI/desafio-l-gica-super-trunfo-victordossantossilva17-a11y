#include <stdio.h>

#include <string.h>

int main() {
    // Variáveis da Carta 1: Japão
    char nome1[] = "Japão";
    int populacao1 = 125000000;          // 125 milhões
    float area1 = 377975.0;              // km²
    float pib1 = 4.9;                    // trilhões USD
    int pontos1 = 40;
    float densidade1 = populacao1 / area1;

    // Variáveis da Carta 2: Alemanha
    char nome2[] = "Alemanha";
    int populacao2 = 83000000;           // 83 milhões
    float area2 = 357022.0;              // km²
    float pib2 = 4.2;                    // trilhões USD
    int pontos2 = 35;
    float densidade2 = populacao2 / area2;

    // Escolha do atributo
    int atributo;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    // Comparação
    float valor1, valor2;
    char nomeAtributo[30];

    switch (atributo) {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            strcpy(nomeAtributo, "População");
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            strcpy(nomeAtributo, "Área");
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            strcpy(nomeAtributo, "PIB");
            break;
        case 4:
            valor1 = pontos1;
            valor2 = pontos2;
            strcpy(nomeAtributo, "Pontos Turísticos");
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            strcpy(nomeAtributo, "Densidade Demográfica");
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Exibição dos resultados
    printf("\nComparando %s x %s\n", nome1, nome2);
    printf("Atributo usado: %s\n", nomeAtributo);
    printf("%s: %.2f\n", nome1, valor1);
    printf("%s: %.2f\n", nome2, valor2);

    if (atributo == 5) { // Densidade: menor vence
        if (valor1 < valor2)
            printf("Carta vencedora: %s\n", nome1);
        else if (valor2 < valor1)
            printf("Carta vencedora: %s\n", nome2);
        else
            printf("Empate!\n");
    } else {
        if (valor1 > valor2)
            printf("Carta vencedora: %s\n", nome1);
        else if (valor2 > valor1)
            printf("Carta vencedora: %s\n", nome2);
        else
            printf("Empate!\n");
    }

    return 0;
}