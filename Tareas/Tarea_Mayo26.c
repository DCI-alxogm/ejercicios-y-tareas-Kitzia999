//Creado el 26 de mayo del 2025

#include <stdio.h>

// 1. Sin argumentos de entrada ni salida
void celsiusAKelvin1() {
    float celsius = 25.0;
    float kelvin = celsius + 273.15;
    printf("1. Sin entrada ni salida:\n");
    printf("%.2f °C = %.2f K\n\n", celsius, kelvin);
}

// 2. Con argumentos de entrada pero sin salida
void celsiusAKelvin2(float celsius) {
    float kelvin = celsius + 273.15;
    printf("2. Con entrada, sin salida:\n");
    printf("%.2f °C = %.2f K\n\n", celsius, kelvin);
}

// 3. Con salida pero sin argumentos de entrada
float celsiusAKelvin3() {
    float celsius = 30.0;
    return celsius + 273.15;
}

// 4. Con argumentos de entrada y salida
float celsiusAKelvin4(float celsius) {
    return celsius + 273.15;
}

// Extra: Con arreglo de entrada y sin salida
void convertirArregloCelsiusAKelvin(float celsius[], int n) {
    printf("Extra: Arreglo de temperaturas en Kelvin:\n");
    for (int i = 0; i < n; i++) {
        float kelvin = celsius[i] + 273.15;
        printf("%.2f °C = %.2f K\n", celsius[i], kelvin);
    }
    printf("\n");
}

int main() {
    // 1. Sin entrada ni salida
    celsiusAKelvin1();

    // 2. Con entrada, sin salida
    celsiusAKelvin2(15.5);

    // 3. Sin entrada, con salida
    float kelvin3 = celsiusAKelvin3();
    printf("3. Sin entrada, con salida:\n");
    printf("Resultado: %.2f K\n\n", kelvin3);

    // 4. Con entrada y salida
    float kelvin4 = celsiusAKelvin4(22.0);
    printf("4. Con entrada y salida:\n");
    printf("22.00 °C = %.2f K\n\n", kelvin4);

    // Extra: Arreglo
    float temperaturasCelsius[] = {0.0, 20.5, 37.0, -10.0, 100.0};
    int n = sizeof(temperaturasCelsius) / sizeof(temperaturasCelsius[0]);
    convertirArregloCelsiusAKelvin(temperaturasCelsius, n);

    return 0;
}

