#include <stdio.h>
#include <math.h>       //Agregamos otra libreria
int main()
{
    int num,resultado; 
    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);
    resultado=suma(num);    //Llamamos a nuestra funcion suma
    printf("La suma es: %d \n",resultado);  //Imprimimos el resultado de la funcion suma
    return 0;
}
int suma(int a)     //Funcion suma
{
    int digito,suma=0;      
    while (a!=0)        //Inicializamos un ciclo
    {
        digito=a%10;
        a=trunc(a/10);      //Realizamos las operaciones
        suma+=digito;
        if (suma<10 && suma>=0)     //Le damos condiciones para obtener la respuesta 
        {                           //de nuestro problema
            suma=suma;
        }else{
            suma=suma-digito;
        }
    }
    
    return suma;    //Retornamos el valor de nuestro resultado
}