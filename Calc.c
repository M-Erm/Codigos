// ======================================
// Calculadora  C - Bases de programação.
// ======================================

// 1. Coleta dados básicos
// 2. Pede região de entrega para o usuário
// 3. Calcula frete baseado na região
// 4. Pede dia e hora da compra
// 5. Apresenta no final: Código, nome, peso, preço, local, frete, preço compra, data e hora, data prevista de entrega. (um dia depois da data da compra)

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Informações do produto
    char codigo[6];
    char produto[25];

    int peso;
    float preco;
    int regiao;

    // Valores a calcular
    float fretePadrao;
    float fretePeso;
    float freteFinal;

    int dia;
    int mes;
    int ano;
    float horaCompra;
    int previsaoEntrega;

    // Coleta dos dados do produto
    printf("Informe o codigo do produto: ");
    scanf("%s", codigo);

    printf("Informe o nome do produto: ");
    scanf("%s", produto);

    printf("Informe o peso do produto (kg): ");
    scanf("%d", &peso);

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    // Seleção da região
    do {
        printf("\nEscolha a regiao de entrega:\n");
        printf("[1] Sul\n[2] Sudeste\n[3] Norte\n[4] Nordeste\n");
        printf("Opcao: ");
        scanf("%d", &regiao);

        if (regiao < 1 || regiao > 4) {
            printf("Opcao invalida! Digite um numero entre 1 e 4\n");
        }

    } while (regiao < 1 || regiao > 4);

    // Valores de frete por região
    switch (regiao) {
        case 1:
            fretePadrao = 30;
            fretePeso   = 50;
            break;
        case 2:
            fretePadrao = 25;
            fretePeso   = 45;
            break;
        case 3:
            fretePadrao = 35;
            fretePeso   = 55;
            break;
        case 4:
            fretePadrao = 40;
            fretePeso   = 60;
            break;
    }

    // Valores (Calculo do frete e total da compra)

    printf("Valor padrao da regiao: R$ %.2f\n", fretePadrao);
    printf("Valor para produtos acima de 2kg: R$ %.2f\n", fretePeso);

    if (peso > 2) {
        freteFinal = fretePeso;
        printf("Valor aplicado: R$ %.2f (produto acima de 2kg)\n", freteFinal);
    } else {
        freteFinal = fretePadrao;
        printf("Valor aplicado: R$ %.2f (frete padrao)\n", freteFinal);
    }

    float total = preco + freteFinal;
    printf("\nValor total a pagar: R$ %.2f (Produto: R$ %.2f, Frete: R$ %.2f)\n", total, preco, freteFinal);
    
    // Data e hora da compra

    printf("\nDigite o dia da compra (DD/MM/AA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    while (getchar() != '\n');
    printf("Digite a hora da compra (ex: 14.20): ");
    scanf("%f", &horaCompra);

    previsaoEntrega = dia + 1;

    // Display das informações pedidas no final
    printf("\n===== RESUMO DO PEDIDO =====\n");
    printf("Produto: %s\n", produto);
    printf("Codigo: %s\n", codigo);
    printf("Peso: %d kg\n", peso);
    printf("Preco do produto: R$ %.2f\n", preco);
    printf("Regiao selecionada: %d\n", regiao);
    printf("Frete: R$ %.2f\n", freteFinal);
    printf("Valor total da compra: R$ %.2f\n", total);
    printf("Data da compra: %02d/%02d/%02d\n", dia, mes, ano);
    printf("Hora da compra: %.2f\n", horaCompra);
    printf("Entrega prevista para o dia: %d\n", previsaoEntrega);
    printf("============================\n");

    system("pause"); 
    return 0;
}
