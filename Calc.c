// ======================================
// Calculadora em C
// ======================================

// Algorítmo
// 1. Cria uma lista de regiões e seus fretes
// 2. Mostra os produtos disponíveis e pede pra escolher
// 3. Mostra informações do produto escolhido e pede região de entrega
// 4. Calcula o frete baseado na região e mostra o preço total (produto + frete) junto com a data e hora da compra e a data prevista de entrega
// Deve apresentar no final: Código, nome, peso, preço, local, frete, preço compra, data e hora, data prevista de entrega. (um dia depois da data da compra)

#include <stdio.h>
#include <time.h>

int main()
{
    char *_regioes[] = {"sul", "sudeste", "norte", "nordeste"};

    char *_codigo_produtos[] = {"cod1", "cod2", "cod3", "cod4", "cod5"}; //obs: substituir pelos valores reais e trocar para int 

    char *_nome_produtos[] = {"produto1", "produto2", "produto3", "produto4", "produto5"}; // substituir pelos nomes reais, tirar o ponteiro e trocar o tipo pra string

    char *_peso_produtos[] = {"peso1", "peso", "peso3", "peso4", "peso5"}; // quando for colocar o peso, troca o tipo pra int ou float e tira o ponteiro

    char *_preco_produtos[] = {"preco1", "preco2", "preco3", "preco4", "preco5"}; // Trocar para int ou float

    char _regiao_escolhida;
    float _frete;
    float _preco_compra;
    char _data_hora_compra;
    char _data_prevista_entrega; // calcular um dia depois da compra. Planejo usar o time.h pra isso

// ---------------EXECUÇÃO---------------------------------------------------------------------------------------------------------------------------------------------------

    printf("\n", "\n"); // Espaço vazio pra dar duas linhas
    printf("Para escolher um produto, digitar o numero à esquerda dele.\n");
    printf("Produtos\n");
    printf("\n");

    for (int i = 0; i <5; i++)
    {
        printf("%d. %s\n",i + 1, _nome_produtos[i]);
    }

    getchar();
    return 0;
}