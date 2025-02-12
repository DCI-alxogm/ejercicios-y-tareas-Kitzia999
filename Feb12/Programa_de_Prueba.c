/*
Febrero 12, 2025
Kitzia Pérez
Segundo Programa, mostrando la estructura, difinicion de variables, imprimir y leer valores de variables en la pantalla
*/


#include <stdlib.h>
#include <stdio.h> 

int main( ){
char nombre[10];
int edad;
float temperatura;
printf("¿Cúal es tu nombre? \n");
scanf("%s", nombre);
printf("Hola %s este es el segundo programa del curso PB2025\n", nombre);
printf("Introduce tu edad \n");
scanf("%i", &edad);
printf("¿Que temperatura marco el termometro la ultima vez que te tomaste la temperatura? \n");
scanf("%f", &temperatura);
printf("Tu edad es: %i\n", edad);
printf("Tu ultimo registro de temperatura fue: %f\n", temperatura);
exit(0);
}
