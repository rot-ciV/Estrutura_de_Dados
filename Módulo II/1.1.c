#include <stdio.h>
#include <string.h>

typedef struct ContaBancaria{

    int numConta;
    double saldo;
    char nome[64];

}ContaBancaria;


void criarConta(ContaBancaria* c, int numero, char* titular){

    c->numConta = numero;
    strcpy(c->nome, titular);
    c->saldo = 0;
}

void depositar(ContaBancaria* c, double valor){

    c->saldo = c->saldo + valor;
}

void sacar(ContaBancaria* c, double valor){

    if(c->saldo < valor){

        printf("Não há saldo suficiente\n");
        return;
    }

    c->saldo = c->saldo - valor;
}

double consultarSaldo(ContaBancaria* c){

    return c->saldo;
}

void imprimirInfo(ContaBancaria* c){

    printf("Titular: %s\n", c->nome);
    printf("Número da conta: %d\n", c->numConta);
    printf("Saldo disponível: %.2lf\n", consultarSaldo(c));
}

int main(){

    ContaBancaria Conta;

    criarConta(&Conta, 748431, "Sapo_Que_Não_Lava_o_Pé_da_Silva\0");
    depositar(&Conta, 100000); //Sapo ganha bem
    sacar(&Conta, 20000); //Mosca tá caro
    imprimirInfo(&Conta);

    return 0;
}