/*
Creado el 31 de Marzo del 2025
*/

#include<stdio.h>

int main(){
        int numero;
        char opcion;
        
        //Pedir al usuario que ingrese un numero
        
     do{
        do {
            printf("Ingrese un numero positivo: ");
            scanf("%d", &numero);
            
            if (numero <=0) {
                printf("Numero invalido. Intente de nuevo.\n");
            }
        }while (numero <=0);
        
        printf("Numero valido ingresado: %d\n", numero);
        
        //Preguntar si desea repetir
        printf("¿Deseas ingresar otro numero? (s/n): ");
        scanf(" %c", &opcion); //Espacio antes de %c para evitar problemas con el buffer
        
    }while (opcion == 's' || opcion == 'S');
    
        printf("Saliendo del programa.\n");
        
        return 0;
}
