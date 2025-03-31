/*
Creado el 26 de Marzo del 2025
*/

#include <stdio.h>
#include <math.h>
int main() {
   double x_inicio, x_fin, paso, x;
   // Aqui me solicita los datos
   printf("Ingrese el valor inicial de x: ");
   scanf("%lf", &x_inicio);
   printf("Ingrese el valor final de x: ");
   scanf("%lf", &x_fin);
   printf("Ingrese el espaciado: ");
   scanf("%lf", &paso);
   // Este es el encabezado de la tabla
   printf("\n%-10s %-10s %-10s %-10s %-10s %-10s\n", "x", "exp(x)", "log(x)", "sin(x)", "cos(x)", "sqrt(x)");
   printf("------------------------------------------------------------\n");
   // Esto es para evaluar las funciones en el intervalo definido
   for (x = x_inicio; x <= x_fin; x += paso) {
       if (x > 0) {
           printf("%-10.2lf %-10.2lf %-10.2lf %-10.2lf %-10.2lf %-10.2lf\n",
                   x, exp(x), log(x), sin(x), cos(x), sqrt(x));
       } else {
           printf("%-10.2lf %-10.2lf %-10s %-10.2lf %-10.2lf %-10s\n",
                   x, exp(x), "N/A", sin(x), cos(x), "N/A");
       }
   }
   return 0;
}
