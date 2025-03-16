#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar funções "printf" e "scanf".

int main()
{
    // Declaração dos atributos da Carta 01 - São Paulo.
    char estado1[3] = "SP";              // Estado.
    char codigo1[5] = "A01";             // Código da carta.
    char nome_cidade1[50] = "São Paulo"; // Nome da cidade.
    int populacao1 = 12300000;           // População em habitantes.
    float area1 = 1521.11;               // Área em km².
    float pib1 = 699000000000.0;         // PIB em reais (699 bilhões).
    int pontos_turisticos1 = 15;         // Número de pontos turísticos.
    float densidade_pop1;                // Densidade populacional (vai calcular).
    float pib_per_capita1;               // PIB per capita (vai calcular).

    // Declaração dos atributos da Carta 02 - Rio Grande do Norte.
    char estado2[3] = "RN";                        // Estado.
    char codigo2[5] = "B02";                       // Código da carta.
    char nome_cidade2[50] = "Rio Grande do Norte"; // Nome da cidade.
    int populacao2 = 6000000;                      // População em habitantes.
    float area2 = 1200.0;                          // Área em km².
    float pib2 = 329000000000.0;                   // PIB em reais (329 bilhões).
    int pontos_turisticos2 = 20;                   // Número de pontos turísticos.
    float densidade_pop2;                          // Densidade populacional (vai calcular).
    float pib_per_capita2;                         // PIB per capita (vai calcular).

    /* Cálculo carta 01
     Fórmulas: Densidade Populacional =  População / Área. */
    densidade_pop1 = (float)populacao1 / area1;
    // Fórmulas: PIB per capita = PIB / População.
    pib_per_capita1 = pib1 / populacao1;

    /* Cálculo carta 02
     Fórmulas: Densidade Populacional =  População / Área. */
    densidade_pop2 = (float)populacao2 / area2;
    // Fórmulas: PIB per capita = PIB / População.
    pib_per_capita2 = pib2 / populacao2;

    // Exibindo os cálculos para as cartas.
    // Exebição de dados da carta 01.
    printf("\n===|| Dados da Carta 01 ||===\n");                      // Cabeçalho de início.
    printf("Carta 01 - %s (%s):\n", nome_cidade1, estado1);           // Mostra o nome da cidade e estado juntos da carta 01
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1); // Mostra a densidade pop. com 2 casas dec. carta 01
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);             // Mostra o pib per capita em reais com 2 casas dec. carta 01

    // Exebição de dados da carta 02.
    printf("\n===|| Dados da Carta 02 ||===\n");                      // Cabeçalho de início.
    printf("Carta 02 - %s (%s):\n", nome_cidade2, estado2);           // Mostra o nome da cidade com estado juntos. carta 02
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2); // Mostra a densidade pop. com 2 casas dec. carta 02
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);             // Mostra o pib per capita em reais com 2 casas dec. carta 02

    // Comparação das cartas pelo atributo "Densidade Populacional" (menor valor: vence!).
    printf("\n===|| Comparação de cartas (Atributo escoilhido: Densidade Populacional): ||===\n"); // Exibe o cabeçalho de comparação.
    printf("Carta 01 - %s (%s): %.2f hab/km²\n", nome_cidade1, estado1, densidade_pop1);           // Mostra os dados da carta 01, cidade, estado e densi. pop.
    printf("Carta 02 - %s (%s): %.2f hab/km²\n", nome_cidade2, estado2, densidade_pop2);           // Mostra os dados da carta 02, cidade, estado e densi. pop.

    // Lógica de comparação usando "if e if-else".
    if (densidade_pop1 < densidade_pop2) // Condição para densi. pop. 01 menor que desid. pop. 02
    {
        printf("Resultado: Carta 01 (%s) |venceu!|\n", nome_cidade1); // Mostra a mensagem caso a carta 01 seja vencedor.
    }
    else if (densidade_pop1 > densidade_pop2) // Condição para densi. pop. 01 maior que densi. pop. 02
    {
        printf("Resultado: Carta 02 (%s) |venceu!|\n", nome_cidade2); // Mostra uma mensagem caso a carta 02 seja o vencedor.
    }
    else
    {
        printf("Resultado: |Empate entre as duas cartas!|\n"); // Mostra uma mensagem caso seja empate as opções entre as cartas 01 e 02.
    }

    return 0; // Retorna 0 para indicar que o programa termionou com sucesso.
}