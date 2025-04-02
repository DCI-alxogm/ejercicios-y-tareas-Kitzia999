/*
Creado el 02 de Abril de 2025
*/

#include <stdio.h>
// Función para verificar si un número es primo
int esPrimo(int num) {
   if (num < 2) return 0;
   for (int i = 2; i * i <= num; i++) {
       if (num % i == 0) return 0;
   }
   return 1;
}
int main() {
   int inicio, fin;
   int intervaloValido = 0; // Variable para controlar si el intervalo es válido
   while (!intervaloValido) {
       // Solicitar al usuario el intervalo
       printf("Ingrese el inicio del intervalo: ");
       scanf("%d", &inicio);
       printf("Ingrese el fin del intervalo: ");
       scanf("%d", &fin);
       if (inicio > fin) {
           printf("Error: El inicio debe ser menor o igual al fin.\n");
           continue; // Volver a pedir los valores
       }
       int contador = 0;
       int primos[100]; // Almacenar los números primos encontrados
       // Buscar números primos en el intervalo
       for (int i = inicio; i <= fin; i++) {
           if (esPrimo(i)) {
               if (contador < 100) {
                   primos[contador++] = i;
               } else {
                   printf("Error: El intervalo contiene más de 100 números primos. Intente de nuevo.\n");
                   contador = -1; // Marcar error
                   break;
               }
           }
       }
       if (contador == -1) continue; // Volver a solicitar un intervalo si excede los 100 primos
       // Si llegamos aquí, el intervalo es válido
       intervaloValido = 1;
       // Imprimir los números primos en formato de 20 por línea
       printf("Numeros primos en el intervalo [%d, %d]:\n", inicio, fin);
       for (int i = 0; i < contador; i++) {
           printf("%d ", primos[i]);
           if ((i + 1) % 20 == 0) printf("\n");
       }
       printf("\n");
   }
   return 0;
}
