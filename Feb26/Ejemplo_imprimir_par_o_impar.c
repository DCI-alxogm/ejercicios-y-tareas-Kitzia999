/*Creado el 26 de Febrero de 2025
Imprimir los numeros para saber si este es par o impar*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int numero, residuo;
  char opcion;
do{
//Para que me pida un numero  
  printf("Ingrese un numero: ");
  scanf("%d", &numero);

//Calcular el residuo de la division
  residuo=numero %2;

//Mostrar el residuo  
  printf("El residuo de %d %% 2 es: %d\n", numero, residuo);

//Determinar si es par o impar
  if(residuo ==0) {
    printf("El numero es par\n");
  } else {
    printf("El numero es impar\n");
  }
  
do {
 
  printf("¿Quieres agregar otro numero? (s/n) o escribe 'a' si aun no sabes hacerlo: ");
  scanf("%c", &opcion);
 
 if(opcion =='a' || opcion =='A') {
   printf("No ah llegado a ese nivel del curso, no puede avanzar mas.\n");
 }
 } while (opcion =='a' || opcion =='A');
 
 } while (opcion == 's' || opcion == 'n');
  printf("Programa terminado.\n");
 
 return (0);
} 
  
   
