# 🃏 Jogo de Comparação de Cidades Brasileiras

Este programa simula um jogo de cartas baseado em cidades do Brasil.  
Cada carta representa uma cidade com diversos atributos, e o jogador escolhe dois atributos para comparar e definir a cidade vencedora.

---

## 📌 Descrição

Neste jogo:

- O usuário cadastra duas cidades (cartas).
- Cada cidade possui os seguintes atributos:
  - População
  - Área
  - PIB
  - Pontos Turísticos
  - Densidade Demográfica
  - PIB per Capita
- O jogador escolhe **dois atributos diferentes** para a comparação.
- O programa determina a cidade vencedora com base nas regras de cada atributo e na **soma total dos dois valores comparados**.

---

## 🚀 Como Compilar e Executar

### 🛠️ Pré-requisitos

Você precisa ter o compilador GCC instalado.

#### Linux (Ubuntu/Debian):

```bash
sudo apt update
sudo apt install build-essential
macOS (via Homebrew):
bash
Copiar
Editar
brew install gcc
Windows (via MinGW):
Baixe o MinGW: https://www.mingw-w64.org

Instale e adicione o caminho do gcc à variável de ambiente PATH.

📁 Estrutura do Projeto
bash
Copiar
Editar
meu_programa/
├── main.c
└── README.md

⚙️ Compilando o Programa
No terminal, no diretório do projeto:

bash
Copiar
Editar
gcc -Wall -o jogo main.c
Explicação:

gcc: chama o compilador.

-Wall: ativa todos os avisos recomendados.

-o jogo: define o nome do executável como jogo.

main.c: é o arquivo-fonte do programa.

Se houver mais arquivos .c:

bash

gcc -o jogo main.c outro_arquivo.c util.c

▶️ Executando o Programa
Linux/macOS:
bash

./jogo
Windows (CMD ou PowerShell):
c

jogo.exe

📊 Atributos Disponíveis para Comparação
População

Tipo: Inteiro

Regra de vitória: vence a cidade com maior população

Área

Tipo: Float

Regra de vitória: vence a cidade com maior área

PIB

Tipo: Float

Regra de vitória: vence a cidade com maior PIB

Pontos Turísticos

Tipo: Inteiro

Regra de vitória: vence a cidade com mais pontos turísticos

Densidade Demográfica

Tipo: Float

Regra de vitória: vence a cidade com menor densidade demográfica

PIB per Capita

Tipo: Float

Regra de vitória: vence a cidade com maior PIB per capita

🧪 Exemplo de Uso Interativo
Cadastro de Cidades

Cadastro da Carta 1:
Informe o Estado (A-H): A
Informe o Código da Carta (ex: A01): A01
Informe o Nome da Cidade: São Paulo
Informe a População da Cidade: 12300000
Informe a Área da Cidade (em km²): 1521.11
Informe o PIB da Cidade (em bilhões de reais): 700
Informe o Número de Pontos Turísticos: 35

Cadastro da Carta 2:
Informe o Estado (A-H): B
Informe o Código da Carta (ex: B02): B02
Informe o Nome da Cidade: Rio de Janeiro
Informe a População da Cidade: 6700000
Informe a Área da Cidade (em km²): 1200.50
Informe o PIB da Cidade (em bilhões de reais): 340
Informe o Número de Pontos Turísticos: 50
Menu de Comparação - Escolha do 1º atributo

Escolha o PRIMEIRO atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica (MENOR vence)
6 - PIB per Capita

Digite sua opção: 5
Menu de Comparação - Escolha do 2º atributo (sem repetir o primeiro)

Escolha o SEGUNDO atributo (diferente do primeiro):
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
6 - PIB per Capita

Digite sua opção: 1
Resultado Final

Comparação dos atributos:
São Paulo:
 - Densidade Demográfica: 8084.60
 - População: 12300000.00

Rio de Janeiro:
 - Densidade Demográfica: 5582.01
 - População: 6700000.00

Soma dos atributos:
São Paulo: 12308084.60
Rio de Janeiro: 6705582.01

Resultado final:
São Paulo venceu a rodada!

🧱 Estrutura Interna do Programa
Entrada de dados da Carta 1 e Carta 2

Cálculo dos atributos derivados:

Densidade Demográfica = População / Área

PIB per Capita = PIB / População

Menus dinâmicos com validação

Comparação com switch-case, if-else e operador ternário

Soma dos dois atributos escolhidos

Tratamento de empate

Exibição clara e organizada do resultado

✅ Validações
O programa valida entradas incorretas do usuário.
Exemplo de tratamento:

Opção inválida. Escolha um atributo diferente do primeiro.

🔧 Makefile (opcional)
makefile

# Makefile

CC = gcc
CFLAGS = -Wall
TARGET = jogo
SRCS = main.c

all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)
Para usar:
bash

make       # Compila o programa
make clean # Remove o executável
