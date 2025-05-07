/*
Creado el 05 de mayo del 2025
*/

#include <stdio.h>

int main() {

    FILE *archivo;
    float var1,var2;
    char var[255];
    
    archivo = fopen("test.txt", "r");
    fgets(var,255,(FILE*)archivo);
    printf("%s", var);
    fscanf(archivo,"%s",var);
    printf("%s",var);
    fscanf(archivo,"%f %f",&var1, &var2);
    printf("%f %f\n", var1,var2);
    fclose(archivo);
    
    return(0);
}
