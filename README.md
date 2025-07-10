🃏 Jogo de Comparação de Cidades Brasileiras
📌 Descrição do Programa
Este programa simula um jogo de cartas com cidades brasileiras.
Cada carta representa uma cidade com diversos atributos, como:

População

PIB

Área

Densidade Demográfica

Pontos Turísticos

PIB per Capita

🎯 O objetivo é cadastrar duas cartas, escolher um atributo e deixar o programa decidir qual cidade vence com base nesse critério.

⚙️ Como Compilar e Executar
Você precisará de um compilador C, como o GCC.

Para compilar:
bash
Copiar
Editar
gcc -o jogo_cidades jogo_cidades.c
Para executar:
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
5	Densidade Demográfica	Float	Vence a cidade com menor densidade
6	PIB per Capita	Float	Vence a cidade com maior PIB per capita

🧪 Exemplo de Uso
Cadastro das Cartas:
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
Menu de Comparação:
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
O programa exibirá os valores comparados e indicará a cidade vencedora com base no atributo escolhido.

🧱 Estrutura do Programa
O funcionamento está dividido em etapas:

Entrada de dados da Carta 1

Entrada de dados da Carta 2

Cálculo de atributos derivados:

Densidade Demográfica = População / Área

PIB per Capita = PIB / População

Exibição de menu interativo

Comparação usando estruturas switch-case e if-else

Exibição clara do resultado final

✅ Validação e Segurança
O programa garante que o usuário escolha uma opção válida (entre 1 e 6).

Se for digitado um valor inválido:

text
Copiar
Editar
Opção inválida. Por favor, execute o programa novamente e escolha uma opção entre 1 e 6.
