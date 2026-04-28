#include<stdio.h>

void calcularDerivada() {
    // Para uma função simples: f(x) = ax^n -> f'(x) = (a*n)x^(n-1)
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
    float n1, n2, media;
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;
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
    
    return 0;
}