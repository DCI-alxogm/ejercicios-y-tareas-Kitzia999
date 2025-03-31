/*
Creado el 31 de Marzo del 2025
*/

#include<stdio.h>

int main(){
        int numero;
        
        //Pedir al usuario que ingrese un numero
        do {
            printf("Ingrese un numero positivo: ");
            scanf("%d", &numero);
            
            if (numero <=0) {
                printf("Numero invalido. Intente de nuevo.\n");
            }
        }while (numero <=0);
        
        printf("Numero valido ingresado: %d\n", numero);
        
        return 0;
}
