#include <stdio.h>

void multiplica_array(int array1[], int array2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] * array2[i];
    }
}

int main() {
    int array1[] = {3, 8, 12, 5};
    int array2[] = {4, 7, 9, 2};
    int tamanho = sizeof(array1) / sizeof(array1[0]);
    int resultado[tamanho];

    multiplica_array(array1, array2, resultado, tamanho);

    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", resultado[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
