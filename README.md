🃏 Jogo de Comparação de Cidades Brasileiras

Este programa simula um jogo de cartas baseado em cidades do Brasil.  
Cada carta representa uma cidade com diversos atributos e o jogador escolhe qual atributo será comparado para definir a cidade vencedora.

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

🚀 Como Compilar e Executar um Programa em C
Estas instruções mostram como compilar e executar um programa escrito em C usando o compilador gcc.

🛠️ Pré-requisitos
Você precisa ter o compilador GCC instalado:

Linux (Ubuntu/Debian)

bash

sudo apt update
sudo apt install build-essential

macOS (via Homebrew)

bash

brew install gcc

Windows (via MinGW)

Baixe o MinGW: https://www.mingw-w64.org

Instale e adicione o caminho do gcc à variável de ambiente PATH.

📁 Estrutura do Projeto

Exemplo básico:

css

meu_programa/
├── main.c
└── README.md

⚙️ Compilando o Programa

Abra o terminal no diretório do projeto e execute:

bash

gcc -o jogo main.c
gcc: chama o compilador.

-o jogo: define o nome do executável como jogo.

main.c: é o arquivo-fonte do programa.

Se você estiver usando múltiplos arquivos .c, compile assim:

bash

gcc -o jogo main.c outro_arquivo.c util.c

▶️ Executando o Programa

Linux/macOS
bash

./jogo

Windows (CMD ou PowerShell)
c

jogo.exe

🧪 Exemplo de Código

c

// main.c
#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}

📝 Dicas

Use make para automatizar a compilação (veja abaixo).

Compile com -Wall para ver avisos úteis:

bash

gcc -Wall -o jogo main.c

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

make      # Compila o programa
make clean  # Remove o executável

📊 Atributos Disponíveis para Comparação

População
• Tipo: Inteiro
• Regra de vitória: vence a cidade com maior população

Área
• Tipo: Float
• Regra de vitória: vence a cidade com maior área

PIB
• Tipo: Float
• Regra de vitória: vence a cidade com maior PIB

Pontos Turísticos
• Tipo: Inteiro
• Regra de vitória: vence a cidade com mais pontos turísticos

Densidade Demográfica
• Tipo: Float
• Regra de vitória: vence a cidade com menor densidade demográfica

PIB per Capita
• Tipo: Float
• Regra de vitória: vence a cidade com maior PIB per capita

🧪 Exemplo de Uso

Ao rodar o programa, o usuário será solicitado a informar os dados das duas cidades:

Cadastro da Carta 1:
Informe o Estado (A-H): A
Informe o Código da Carta (ex: A01): A01
Informe o Nome da Cidade: São Paulo
Informe a População da Cidade: 12300000
Informe a Área da Cidade (em km²): 1521.11
Informe o PIB da Cidade (em bilhões de reais): 700
Informe o Número de Pontos Turísticos: 35
Em seguida, será exibido o menu de comparação:

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

Opção inválida. Por favor, execute o programa novamente e escolha uma opção entre 1 e 6
