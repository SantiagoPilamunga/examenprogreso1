#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);
     int resultado=suma(num);
    return 0;
}
int suma(int a){
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
        printf("SUMA: %d \n",suma);
    }
    
        return suma;
}