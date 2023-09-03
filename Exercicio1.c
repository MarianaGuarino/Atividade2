#include <stdio.h>

// Função para calcular a soma dos elementos de um array
int soma_array(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int array[] = {5, 7, 9, 6};
    int tamanho = sizeof(array) / sizeof(array[0]);

    int resultado = soma_array(array, tamanho);

    printf("Soma dos elementos do array: %d\n", resultado);

    return 0;
}
