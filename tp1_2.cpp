#include <math.h>
#include <stdio.h>

int cuadrado(int numero);
void cuadradovoid(int *numero);
void invertir(int *c, int *b);
void orden(int *c, int *b);

int main(){
    int numero, *pnumero, *pa, *pb, a, b;

    puts("Ingrese un numero");
    scanf("%d",&numero);
    pnumero=&numero;
    printf("contenido de la variable: %d \n",*pnumero);
    printf("direccion de la variable: %p \n",pnumero);
    printf("el cuadrado del numero es: %d \n",cuadrado(*pnumero));
    cuadradovoid(pnumero);
    puts("-------------------------");
    puts("Ingrese dos numeros");
    scanf("%d",&a);
    scanf("%d",&b);
    pa=&a;
    pb=&b;
    printf("La variable a es: %d\n",a);
    printf("La variable b es: %d\n",b);
    invertir(pa,pb);
    printf("La variable a ahora es: %d\n",a);
    printf("La variable b ahora es: %d\n",b);
    orden(pa,pb);
    printf ("El valor mas chico es: %d\n",a);
    printf ("El valor mas grande es: %d\n",b);
return 0;
}