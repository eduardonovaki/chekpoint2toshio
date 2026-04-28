#include <stdio.h> // corrigindo o erro, trocando "" por <>

int main() {
    float nota1, nota2, media

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);   //adicionado &

    media = (nota1 + nota2) / 2; // adicionei parenteses na expressão para fazer sentido

    if (media >= 6) { //Adicionei ">" para manter a logica de aprovação
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}