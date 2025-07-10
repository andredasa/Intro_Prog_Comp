🃏 Jogo de Comparação de Cidades Brasileiras

Este programa simula um jogo de cartas baseado em cidades do Brasil.  
Cada carta representa uma cidade com diversos atributos, e o jogador escolhe qual atributo será comparado para definir a cidade vencedora.

---

## 📌 Descrição

Neste jogo:

- O usuário cadastra **duas cidades** (cartas).
- Cada cidade possui atributos como:
  - População
  - Área
  - PIB
  - Pontos Turísticos
  - Densidade Demográfica
  - PIB per Capita
- O jogador escolhe um **atributo para comparação**, e o programa determina automaticamente qual cidade vence, com base em regras específicas.

---

## ⚙️ Como Compilar e Executar

Você precisará de um compilador C (como o `gcc`).

### 🔧 Compilação:
```bash
gcc -o jogo_cidades jogo_cidades.c
▶️ Execução:
bash
Copiar
Editar
./jogo_cidades
📊 Atributos Disponíveis para Comparação
Opção	Atributo	Tipo	Regra de Vitória
1	População	Inteiro	Vence a cidade com maior população
2	Área	Float	Vence a cidade com maior área
3	PIB	Float	Vence a cidade com maior PIB
4	Pontos Turísticos	Inteiro	Vence a cidade com mais pontos turísticos
5	Densidade Demográfica	Float	Vence a cidade com menor densidade demográfica
6	PIB per Capita	Float	Vence a cidade com maior PIB per capita

🧪 Exemplo de Uso
Ao rodar o programa, o usuário será solicitado a informar os dados das duas cidades:

text
Copiar
Editar
Cadastro da Carta 1:
Informe o Estado (A-H): A
Informe o Código da Carta (ex: A01): A01
Informe o Nome da Cidade: São Paulo
Informe a População da Cidade: 12300000
Informe a Área da Cidade (em km²): 1521.11
Informe o PIB da Cidade (em bilhões de reais): 700
Informe o Número de Pontos Turísticos: 35
Em seguida, será exibido o menu de comparação:

text
Copiar
Editar
Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
6 - PIB per Capita

Digite sua opção: 5
O programa exibirá os valores comparados e indicará a cidade vencedora com base no critério escolhido.

🧱 Estrutura Interna do Programa
Entrada de dados da Carta 1 e Carta 2

Cálculo de atributos derivados:

Densidade Demográfica = População / Área

PIB per Capita = PIB / População

Exibição do menu interativo

Comparação com estruturas switch-case e if-else

Exibição do resultado final

✅ Validações
O programa valida a opção digitada pelo usuário.
Caso a entrada seja inválida, uma mensagem é exibida:

text
Copiar
Editar
Opção inválida. Por favor, execute o programa novamente e escolha uma opção entre 1 e 6
