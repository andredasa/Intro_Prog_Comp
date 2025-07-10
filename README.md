Descrição do Programa

O programa simula um jogo de comparação de cartas de cidades brasileiras.
Cada carta representa uma cidade com vários atributos como população, PIB, área, densidade demográfica, etc.

O usuário cadastra os dados de duas cartas, escolhe qual atributo deseja comparar, e o programa determina qual carta vence com base no valor do atributo escolhido.

Como Compilar e Executar

Você precisará de um compilador C, como gcc.

Para compilar no terminal:
bash
Copiar
Editar
gcc -o jogo_cidades jogo_cidades.c

Para executar o programa:
bash
Copiar
Editar
./jogo_cidades

Atributos Disponíveis para Comparação
Após o cadastro das duas cartas, o usuário deve escolher uma opção no menu interativo:

Opção	Atributo	Tipo	Regra de Vitória
1	População	Inteiro	Vence a cidade com MAIOR população
2	Área	Float	Vence a cidade com MAIOR área
3	PIB	Float	Vence a cidade com MAIOR PIB
4	Pontos Turísticos	Inteiro	Vence a cidade com MAIS pontos turísticos
5	Densidade Demográfica	Float	Vence a cidade com MENOR densidade
6	PIB per Capita	Float	Vence a cidade com MAIOR PIB per capita

Exemplo de Uso
Ao executar o programa, você verá uma sequência de perguntas como:

java
Copiar
Editar
Cadastro da Carta 1:
Informe o Estado (A-H): A
Informe o Código da Carta (ex: A01): A01
Informe o Nome da Cidade: São Paulo
Informe a População da Cidade: 12300000
Informe a Área da Cidade (em km2): 1521.11
Informe o PIB da Cidade (em bilhões de reais): 700
Informe o Número de Pontos Turísticos: 35
Após o cadastro das duas cartas, aparecerá o menu:

sql
Copiar
Editar
Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
6 - PIB per Capita
Digite sua opção:
Digite um número entre 1 e 6, por exemplo:

nginx
Copiar
Editar
Digite sua opção: 5
O programa então exibirá os valores das densidades e dirá qual cidade venceu com base nesse critério (neste caso, a de menor densidade demográfica vence).

Estrutura do Programa
O programa é dividido nas seguintes etapas:

Entrada de dados da Carta 1

Entrada de dados da Carta 2

Cálculo de atributos derivados

Densidade demográfica = População / Área

PIB per capita = PIB / População

Exibição de menu interativo com switch-case

Comparação com if-else aninhado, respeitando regras específicas para cada atributo

Exibição clara do resultado

Validação e Segurança
O programa verifica se a opção digitada no menu é válida (1 a 6).

Caso contrário, exibe mensagem de erro:

lua
Copiar
Editar
Opção inválida. Por favor, execute o programa novamente e escolha uma opção entre 1 e 6.
