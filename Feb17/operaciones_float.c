/*Programa 17 de febrero: jerarquia de operaciones con numeros reales*/

#include <stdio.h>

int main(){
  int a,b,c,d;
  int e1,e2,e3,e4;
  a=-9;
  b=7;
  c=3;
  d=-2;
  e1=(a+b)*c/d;
  e2=((a+b)*c)/d;
  e3=(a+b)*(c/d);
  e4=a+b*c/d;
  printf("e=(a+b)*c/d=%d",e1);
  printf("e=((a+b)*c)/d=%d",e2);
  printf("e=(a+b)*(c+d)=%d",e3);
  printf("e=a+b*c/d=%d",e4);
}
