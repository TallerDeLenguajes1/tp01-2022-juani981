#include <stdio.h>


int main(){
    printf("Hola Mundo \n");
      int *puntero, variable=999;

    puntero=&variable;

    printf("Contenido del puntero: %d \n",*puntero);
    printf("Direccion de memoria almacenada: %p \n",puntero);
    printf("Direccion de memoria de la variable: %p \n",&variable);
    printf("Direccion de memoria del puntero: %p \n",&puntero);
    printf("Tamaño de la variable: %d \n",sizeof(variable));
return 0;
}