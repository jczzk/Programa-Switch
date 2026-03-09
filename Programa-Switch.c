#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção:\n");
    printf("1. Verificar Saldo:\n");
    printf("2. Fazer Depósito:\n");
    printf("3. Fazer Saque:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %.2f\n", saldo);
        break;
    case 2: 
    printf("Digite o Banco que você deseja depositar\n");
    printf("Digite a Agencia que você deseja depositar\n");
    printf("Digite a conta você deseja depositar\n"); 
    break;
    case 3: 
    printf("Digite o valor à sacar\n");
    break;
    default:
    printf("Opção inválida!\n");
        
    }

    return 0;
}