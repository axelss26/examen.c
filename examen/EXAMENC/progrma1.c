#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int codigo;
    float sueldo;
    int horas_trabajadas;
} Trabajador;

void ingresarTrabajadores(Trabajador **trabajadores, int *num_trabajadores) {
    printf("Cuántos trabajadores desea ingresar? ");
    scanf("%d", num_trabajadores);
    *trabajadores = (Trabajador *)malloc((*num_trabajadores) * sizeof(Trabajador));

    for (int i = 0; i < *num_trabajadores; i++) {
        printf("Ingrese nombre del trabajador %d: ", i + 1);
        scanf("%s", (*trabajadores)[i].nombre);
        printf("Ingrese código de empleado: ");
        scanf("%d", &(*trabajadores)[i].codigo);
        printf("Ingrese sueldo: ");
        scanf("%f", &(*trabajadores)[i].sueldo);
        printf("Ingrese horas trabajadas: ");
        scanf("%d", &(*trabajadores)[i].horas_trabajadas);
    }
}

void consultarGenerales(Trabajador *trabajadores, int num_trabajadores) {
    
}

void consultarPorCodigo(Trabajador *trabajadores, int num_trabajadores) {
    
}

void consultarPorNombre(Trabajador *trabajadores, int num_trabajadores) {
    
}

int main() {
    Trabajador *trabajadores = NULL;
    int num_trabajadores = 0;
    int opcion;

    do {
        printf("1. Ingresar trabajadores\n2. Consultas generales\n3. Consultas por clave\n4. Consultas por nombre\n5. Salir\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                ingresarTrabajadores(&trabajadores, &num_trabajadores);
                break;
            case 2:
                consultarGenerales(trabajadores, num_trabajadores);
                break;
            case 3:
                consultarPorCodigo(trabajadores, num_trabajadores);
                break;
            case 4:
                consultarPorNombre(trabajadores, num_trabajadores);
                break;
            case 5:
                free(trabajadores);
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 5);

    return 0;
}