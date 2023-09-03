#include <stdio.h>
#include <stdbool.h>

int busca_string(char *array[], int tamanho, char *busca) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    char *array[] = {"texto", "J", "EDA"};
    int tamanho = sizeof(array) / sizeof(array[0]);
    char *busca = "EDO";

    int resultado = busca_string(array, tamanho, busca);

    if (resultado) {
        printf("A string de busca existe no array.\n");
    } else {
        printf("A string de busca não existe no array.\n");
    }

    return 0;
}