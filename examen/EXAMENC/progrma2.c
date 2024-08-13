#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int carnet;
    char nombre[50];
    char grado[20];
    char departamento[50];
    int edad;
} Estudiante;

void registrarEstudiante() {

}

void buscarPorCarnet() {

}

void listaPorGrado() {
}

void editarEstudiante() {
}

int main() {
    int opcion;
    do {
        printf("1. Registrar estudiante\n2. Buscar estudiante por carnet\n3. Lista de estudiantes por grado\n4. Editar estudiante\n5. Salir\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                registrarEstudiante();
                break;
            case 2:
                buscarPorCarnet();
                break;
            case 3:
                listaPorGrado();
                break;
            case 4:
                editarEstudiante();
                break;
            case 5:
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 5);

    return 0;
}