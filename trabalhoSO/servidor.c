#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct ContaNoBancoEspecial {
    int idUsuario;
    int saldo;
    int secret;
};

static struct ContaNoBancoEspecial minhaConta;

void ContaEspecialCriada() {
    srand(time(NULL));  
    minhaConta.idUsuario = rand() % 1000 + 1;
    minhaConta.saldo = 0;
    printf("Informe o valor do secret: ");
    scanf("%d", &minhaConta.secret);
}

int getSaldo() {
    return minhaConta.saldo;
}

int addMoney() {
    int senha, valor;
    printf("Informe o secret para adicionar dinheiro: ");
    scanf("%d", &senha);
    
    if (senha == minhaConta.secret) {
        printf("Informe o valor a ser adicionado: ");
        scanf("%d", &valor);
        minhaConta.saldo += valor;
        printf("Saldo atualizado: %d\n", minhaConta.saldo);
    } else {
        printf("Senha incorreta!\n");
    }
    
    return minhaConta.saldo;
}

int receiveMoney() {
    int senha, valor;
    printf("Informe o secret para retirar dinheiro: ");
    scanf("%d", &senha);
    
    if (senha == minhaConta.secret) {
        printf("Informe o valor a ser retirado: ");
        scanf("%d", &valor);
        
        if (valor <= minhaConta.saldo) {
            minhaConta.saldo -= valor;
            printf("Saldo atualizado: %d\n", minhaConta.saldo);
        } else {
            printf("Saldo insuficiente!\n");
        }
    } else {
        printf("Senha incorreta!\n");
    }
    
    return minhaConta.saldo;
}
