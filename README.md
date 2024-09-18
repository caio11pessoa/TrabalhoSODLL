Projeto: Integração de DLL em C com Python

Este projeto demonstra como criar uma biblioteca compartilhada (DLL no Windows ou .so no Linux/macOS) em C e utilizá-la em um aplicativo Python, utilizando a biblioteca ctypes.

Descrição do Projeto

Este projeto simula uma Conta no Banco Especial, onde o usuário pode:

Visualizar o saldo da conta
Adicionar dinheiro à conta (com verificação de senha)
Retirar dinheiro da conta (com verificação de senha)
A lógica principal foi implementada em C, e o programa Python se comunica com essa biblioteca compartilhada para interagir com a conta.

Estrutura do Projeto:
conta.c: Código-fonte em C que implementa a lógica da conta bancária.
app.py: Script em Python que carrega e usa a biblioteca C para interagir com o usuário.
servidor.so: Biblioteca compartilhada compilada a partir do código C (para sistemas baseados em UNIX/macOS).
Como Executar

1. Compilando a Biblioteca C
Primeiro, compile o código em C para gerar a biblioteca compartilhada (.so no Linux/macOS ou .dll no Windows).

No Linux/macOS, use o seguinte comando no terminal para compilar o código C e gerar a biblioteca:

bash
Copiar código
gcc -shared -o servidor.so -fPIC conta.c
Explicação do comando:

gcc: Compilador GNU C.
-shared: Indica que o objetivo é criar uma biblioteca compartilhada.
-o servidor.so: Define o nome do arquivo de saída (no caso, servidor.so).
-fPIC: Gera código independente de posição, necessário para bibliotecas compartilhadas.
2. Executando o Script Python
Depois de compilar a biblioteca C, você pode executar o script Python.

No terminal, execute o seguinte comando:

bash
Copiar código
python3 app.py
Certifique-se de que a biblioteca compartilhada (servidor.so) está no mesmo diretório que o script Python ou especifique o caminho correto no script Python.

3. Uso do Aplicativo
Quando o aplicativo Python é iniciado, ele apresenta um menu com as seguintes opções:

Ver o saldo da conta.
Adicionar dinheiro à conta.
Retirar dinheiro da conta.
Sair do aplicativo.
Escolha uma das opções e siga as instruções no terminal para interagir com o sistema.

Requisitos

Python 3.x: Para executar o script Python.
GCC: Para compilar o código C (disponível em sistemas Linux/macOS).
ctypes: Biblioteca Python nativa, usada para carregar e interagir com bibliotecas compartilhadas.
Observações

Certifique-se de que o arquivo .so (ou .dll no Windows) está corretamente compilado antes de executar o script Python.
A função ContaEspecialCriada inicializa a conta bancária e define o "secret" necessário para adicionar e retirar dinheiro.
O código em Python usa o módulo ctypes para interagir com a biblioteca C.
