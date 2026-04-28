#include<stdio.h>

void calcularDerivada() {
    
    float coeficiente;
    int expoente;

    printf("\nPara a funcao f(x) = ax^n");
    printf("\nDigite o coeficiente (a): ");
    scanf("%f", &coeficiente);
    printf("Digite o expoente (n): ");
    scanf("%d", &expoente);
    
     if (expoente == 0) {
        printf("Derivada: f'(x) = 0\n");
    } else {
        float novoCoeficiente = coeficiente * expoente;
        int novoExpoente = expoente - 1;
        printf("Derivada: f'(x) = %.2fx^%d\n", novoCoeficiente, novoExpoente);
    }
}

void calcularMedia() {
    float nota1;
    float nota2;
    float media;
    printf("Nota 1: ");
    scanf("%f", &nota1);
    while (nota1 > 10 || nota1 < 0) {
        printf("Digite um valor valido: ");
        scanf("%f", &nota1);
    }
    printf("Nota 2: ");
    scanf("%f", &nota2);
    while (nota2 > 10 || nota2 < 0) {
        printf("Digite um valor valido: ");
        scanf("%f", &nota2);
    }

    media = (nota1 + nota2) / 2;
    printf("Media Final: %.2f\n", media);

    if (media >= 7.0) {
        printf("Classificacao: APROVADO\n");
    } else if (media >= 4.0) {
        printf("Classificacao: EXAME FINAL\n");
    } else {
        printf("Classificacao: REPROVADO\n");
    }
}

int main() {
     int opcao;
    do {
        printf("\n--- SISTEMA ACADEMICO ---\n");
        printf("1. Media e Classificacao\n");
        printf("2. Derivada\n");
        printf("3. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                calcularMedia();
                break;
            case 2:
                calcularDerivada();
                break;
            case 3:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

     } while (opcao != 3 || opcao >3);
    return 0;
}