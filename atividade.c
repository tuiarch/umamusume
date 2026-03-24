#include <stdio.h>

int main() {
    float lixo_toneladas;
    float custo_por_tonelada;
    float preco_por_tonelada;

    // Entrada de dados
    printf("Digite a quantidade de lixo coletado (em toneladas): ");
    scanf("%f", &lixo_toneladas);

    printf("Digite o custo de transporte por tonelada: ");
    scanf("%f", &custo_por_tonelada);

    printf("Digite o valor recebido por tonelada de lixo: ");
    scanf("%f", &preco_por_tonelada);

    // Cálculos
    float custo_total = lixo_toneladas * custo_por_tonelada;
    float receita = lixo_toneladas * preco_por_tonelada;
    float lucro = receita - custo_total;

    // Saída
    printf("\n=== RESULTADO ===\n");
    printf("Receita total: R$ %.2f\n", receita);
    printf("Custo total: R$ %.2f\n", custo_total);
    printf("Lucro: R$ %.2f\n", lucro);

    // Sugestão de melhoria
    printf("\n=== COMO MELHORAR A EFICIÊNCIA ===\n");
    if (custo_por_tonelada > preco_por_tonelada * 0.5) {
        printf("- Reduzir custos de transporte (rotas mais curtas ou caminhões mais eficientes).\n");
    } else {
        printf("- Aumentar a reciclagem para vender materiais com maior valor.\n");
    }

    printf("- Investir em separação de lixo para aumentar o valor de venda.\n");
    printf("- Otimizar rotas de coleta para economizar combustível.\n");

    return 0;
}