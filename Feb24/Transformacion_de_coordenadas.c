/*creado el 19 de Febrero del 2025*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){ 

   float x,y,z; //coordenadas cartesianas de entrada
   float r, theta,phi; //coordenadas esfericas de salida
   float rc,theta_c,zc; //coordenadas cilindricas de salida
   
  x=1;
  y=1;
  z=1;
   
   printf("Introduce los valores de las variables x,y,z que quieres convertir\n");
   scanf("%f ",&x);
   scanf("%f ",&y);
   scanf("%f ",&z);
 
   //Realice operaciones de transformacion de coordenadas
   //Coordenadfas esfericas
   r=sqrt(x*x+y*y+z*z);
   theta=atan(y/x);
   phi=acos(z/r);
   
   //Coordenadas cilindricas
   rc= sqrt(x*x+y*y);
   theta_c = atan(y/x);
   zc=z;
   
    
   //SALIDA
   
   printf("Las coordenadas esfericas son r=%f, theta=%f, phi=%f \n", r, theta, phi);
   printf("Las coordenadas cilindricas son r=%f, theta=%f, z=%f \n", rc, theta_c, zc);
   exit(0);
  }
