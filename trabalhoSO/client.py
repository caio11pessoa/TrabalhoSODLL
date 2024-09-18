from ctypes import cdll

# Carrega a biblioteca compartilhada .so
accountSecurity = cdll.LoadLibrary('/Users/caiodealmeidapessoa/Development/trabalhoSO/servidor.so')

# Função para exibir o menu e capturar a escolha do usuário
def mostrar_menu():
    print("\n--- Menu de Operações ---")
    print("1. Ver Saldo")
    print("2. Adicionar Dinheiro")
    print("3. Retirar Dinheiro")
    print("4. Sair")
    
    escolha = input("Escolha uma operação (1-4): ")
    return escolha

# Inicializa a conta especial
accountSecurity.ContaEspecialCriada()

# Loop principal do menu
while True:
    escolha = mostrar_menu()
    
    if escolha == '1':
        # Exibe o saldo
        saldo = accountSecurity.getSaldo()
        print(f"Saldo atual: {saldo}")
    
    elif escolha == '2':
        # Adiciona dinheiro
        accountSecurity.addMoney()
    
    elif escolha == '3':
        # Retira dinheiro
        accountSecurity.receiveMoney()
    
    elif escolha == '4':
        # Encerra o programa
        print("Saindo...")
        break
    
    else:
        print("Opção inválida! Escolha uma opção válida.")
