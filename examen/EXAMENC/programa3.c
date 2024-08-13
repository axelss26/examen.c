#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
} Departamento;

void ingresarDepartamentos() {
}

void mostrarDepartamentosOrdenados() {
}

int main() {
    int opcion;
    do {
        printf("1. Ingresar departamentos\n2. Mostrar departamentos ordenados de Z a A\n3. Salir\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                ingresarDepartamentos();
                break;
            case 2:
                mostrarDepartamentosOrdenados();
                break;
            case 3:
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 3);

    return 0;
}