/*
Creado el 05 de mayo del 2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
   FILE *entrada, *salida;
   int n;
   float lim_inf, lim_sup, x, paso, resultado;
   // Abrir archivo de entrada
   entrada = fopen("entrada.txt", "r");
   if (entrada == NULL) {
       printf("No se pudo abrir el archivo de entrada.\n");
       return 1;
   }
   // Leer datos del archivo
   fscanf(entrada, "%d", &n);
   fscanf(entrada, "%f", &lim_inf);
   fscanf(entrada, "%f", &lim_sup);
   fclose(entrada);
   // Abrir archivo de salida
   salida = fopen("parabola.txt", "w");
   if (salida == NULL) {
       printf("No se pudo crear el archivo de salida.\n");
       return 1;
   }
   // Calcular paso
   paso = (lim_sup - lim_inf) / (n - 1);
   // Evaluar la función x^2 + 1
   for (int i = 0; i < n; i++) {
       x = lim_inf + i * paso;
       resultado = pow(x, 2) + 1;
       fprintf(salida, "x = %.2f, f(x) = %.2f\n", x, resultado);
   }
   fclose(salida);
   printf("Evaluación completada. Resultados en parabola.txt\n");
   return 0;
}
