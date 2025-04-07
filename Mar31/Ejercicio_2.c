/*
Creado el 31 de Marzo del 2025
*/

#include<stdio.h>

int main() {
    int inicio, fin, incremento;
    char opcion;
 
 do {   
    printf("Ingrese el valor inicial: ");
    scanf("%d", &inicio);
    printf("Ingrese el valor final: ");
    scanf("%d", &fin);
    printf("Ingrese el valor del incremento; ");
    scanf("%d", &incremento);
    
    //Validar que el incremento sea positivo
    if (incremento <= 0) {
        printf("El incremento debe ser positivo. Intentelo de nuevo. \n");
        continue; //Vuelve a pedir los valores sin hacer calculos
        
        }  
    //Calcular y mostrar los valores de x² en el rango
    for (int x = inicio; x <= fin; x += incremento) {
        printf("x: %d, x²: %d\n", x, x * x);
    }
    
    //Preguntar si desea repetir el calculo
    printf("¿Desea calcular otra vez? (s/n): ");
    scanf("%c",&opcion); //Espacio antes de %c para evitar problemas con el buffer
  } while (opcion == 's' || opcion == 'S');
  
    printf("Saliendo del programa. \n");
    
    return 0;
}
