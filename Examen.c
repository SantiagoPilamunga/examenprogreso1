#include <stdio.h>
#include <math.h>
int main()
{
    int num,resultado;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);
    resultado=suma(num);
    printf("La suma es: %d \n",resultado);
    return 0;
}
int suma(int a)
{
    int digito,suma=0;
    while (a!=0)
    {
        digito=a%10;
        a=trunc(a/10);
        suma+=digito;
        if (suma<10 && suma>=0)
        {
            suma=suma;
        }else{
            suma=suma-digito;
        }
    }
    
    return suma;
}