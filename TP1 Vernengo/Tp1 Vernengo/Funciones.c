#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float primerOperando()
{
    float x;
    printf("Ingrese primer numero: ");
    scanf("%f",&x);
    return x;
}

float segundoOperando()
{
    float y;
    printf("Ingrese segundo numero: ");
    scanf("%f",&y);
    return y;
}

float sumatoria(float x, float y)
{
    float suma;
    suma = x + y;

    return suma;

}

float restar(float x, float y)
{
    float resta;
    resta = x - y;

    return resta;
}

float division(float x, float y)
{
    float dividir;
    if(y == 0)
    {
       return -1;

    }
    else
    {

        dividir = x / y;

        return dividir;
        //printf("\n\nLa division de %.2f y %.2f es: %.2f",a, b, dividir);
    }

}

float multiplicacion(float x, float y)
{
    float multiplicar;

    multiplicar = x * y;
    return multiplicar;
    //printf("\n\nLa multiplicacion de %.2f y %.2f es: %.2f",a, b, multiplicar);

}

float calcularFactorial1(float x )
{
    float num1 = x;

    float acum1 = 1;

    float i;


    for(i = num1; i>0; i--)
    {
        acum1 = acum1*i;
    }

if(num1>=13)
{
    return -1;

}

    return acum1;


}


float calcularFactorial2(float y )
{
    float num2 = y;

    float acum2 = 1;

    float j;


    for(j = num2; j>0; j--)
    {
        acum2 = acum2*j;
    }

if(num2>=13)
{
    return -1;

}

    return acum2;

    //printf("\n\nEl factorial de %.2f es: %.2f \n", a, acum1);
    //printf("\nEl factorial de %.2f es: %.2f \n", b, acum2);

}
