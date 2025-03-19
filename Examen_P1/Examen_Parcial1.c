/* Creado el 19 de marzo del 2025*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int opcion;
    float base, altura, area;
    int numero, suma, digito;
    char letra;
    
    printf("Seleccione una opcion: \n");
    printf("1. Calcular el area de un rectangulo \n");
    printf("2. Convertir grados Celsius a Farhrenheit \n");
    printf("3. Verificar si un numero es un multiplo de otro\n");
    printf("4. Sumar los digitos de un numero de dos cifras\n");
    scanf("%d", opcion);
    scanf("%f", opcion);
    
    switch (opcion) {
        
        case 1:
            printf("Ingrese la base y la altura del rectangulo: ");
            scanf("%d","%f", &base , &altura);
            area= base * altura;
            printf("El area del rectangulo es: %d\n");
            
        case 2:
            printf("Ingrese la temperatura en grados Celsius: ");
            scanf("%d","%f", &base);
            (base * 9/5) +32;
            printf("La temperatura en Fahrenheit es: %d\n");
          break;
       
       default :
         printf("Opcion no valida\n");
       }
         return 0;
       }
   
        
