#include <stdio.h>

void tribonacci(int firma[], int n, int resultado[]) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    for (int i = 0; i < 3 && i < n; i++) {
        resultado[i] = firma[i];
    }

    for (int i = 3; i < n; i++) {
        resultado[i] = resultado[i-1] + resultado[i-2] + resultado[i-3];
    }
}

int calcular_puntuacion(int matriz[], int cantidad) {
    int puntuacion = 0;

    for (int i = 0; i < cantidad; i++) {
        if (matriz[i] == 5) {
            puntuacion += 5;
        } else if (matriz[i] % 2 == 0) {
            puntuacion += 1;  
        } else {
            puntuacion += 3;  
        }
    }

    return puntuacion;
}

int main() {
    int firma[3];
    int n;

    printf("Introduce los 3 numeros iniciales para la secuencia Tribonacci: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &firma[i]);
    }

    printf("Introduce la cantidad de elementos n que deseas generar en la secuencia Tribonacci: ");
    scanf("%d", &n);

    int secuencia[n];
    tribonacci(firma, n, secuencia);

    printf("La secuencia Tribonacci generada es: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", secuencia[i]);
    }
    printf("\n");

    int cantidad_numeros;
    printf("Introduce la cantidad de numeros en la lista para calcular la puntuacion: ");
    scanf("%d", &cantidad_numeros);

    int numeros[cantidad_numeros];
    printf("Introduce los numeros de la lista uno por uno: \n");
    for (int i = 0; i < cantidad_numeros; i++) {
        scanf("%d", &numeros[i]);
    }

    int puntuacion = calcular_puntuacion(numeros, cantidad_numeros);
    printf("La puntuacion total de la lista es: %d\n", puntuacion);

    return 0;
}

