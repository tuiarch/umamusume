# Entrada de dados
lixo_toneladas = float(input("Digite a quantidade de lixo coletado (em toneladas): "))
custo_por_tonelada = float(input("Digite o custo de transporte por tonelada: "))
preco_por_tonelada = float(input("Digite o valor recebido por tonelada de lixo: "))

# Cálculos
custo_total = lixo_toneladas * custo_por_tonelada
receita = lixo_toneladas * preco_por_tonelada
lucro = receita - custo_total

# Saída
print("\n=== RESULTADO ===")
print(f"Receita total: R$ {receita:.2f}")
print(f"Custo total: R$ {custo_total:.2f}")
print(f"Lucro: R$ {lucro:.2f}")

# Sugestão de melhoria
print("\n=== COMO MELHORAR A EFICIÊNCIA ===")
if custo_por_tonelada > preco_por_tonelada * 0.5:
    print("- Reduzir custos de transporte (rotas mais curtas ou caminhões mais eficientes).")
else:
    print("- Aumentar a reciclagem para vender materiais com maior valor.")
print("- Investir em separação de lixo para aumentar o valor de venda.")
print("- Otimizar rotas de coleta para economizar combustível.")