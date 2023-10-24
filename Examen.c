#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);
    return 0;
}
int suma(int a){
    int digito,suma=0;
    while (a!=0)
    
    {
        digito=a%10;
        a=trunc(a/10);
        suma+=digito;
        
    }
    
        return suma;
}