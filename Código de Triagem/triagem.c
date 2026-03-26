#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float tamanho;
    char material[30];

    int pilhaA = 0;
    int pilhaB = 0;

    printf("=== Sistema de Triagem de Objetos ===\n");

    for (int i = 1; i <= 10; i++) {

        printf("\nObjeto %d:\n", i);

        // SENSOR
        printf("Digite o tamanho do objeto (em cm): ");
        scanf("%f", &tamanho);

        printf("Digite o material do objeto: ");
        scanf("%s", material);

        // UNIDADE DE CONTROLE (aceitando plastico e plástico)
        if (tamanho > 15 || 
            strcmp(material, "plastico") == 0 || 
            strcmp(material, "plástico") == 0) {

            // ATUADOR
            printf("-> Enviado para PILHA A\n");
            pilhaA++;

            // REGISTRADOR
            printf("Registro: Objeto %d foi para PILHA A\n", i);

        } else {

            // ATUADOR
            printf("-> Enviado para PILHA B\n");
            pilhaB++;

            // REGISTRADOR
            printf("Registro: Objeto %d foi para PILHA B\n", i);
        }
    }

    printf("\n=== RESULTADO FINAL ===\n");
    printf("Total na PILHA A: %d\n", pilhaA);
    printf("Total na PILHA B: %d\n", pilhaB);

    return 0;
}