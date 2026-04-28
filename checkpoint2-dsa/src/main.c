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

int main() {
    

    
    return 0;
}