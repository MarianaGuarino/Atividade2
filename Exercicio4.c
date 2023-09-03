#include <stdio.h>

int conta_int_array(int array[], int tamanho, int busca) {
    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        if (array[i] == busca) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int array[] = {5, 7, 9, 6, 7, 11, 6, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int numero_busca = 7;

    int quantidade = conta_int_array(array, tamanho, numero_busca);

    printf("O número %d aparece no array %d vezes.\n", numero_busca, quantidade);

    return 0;
}
