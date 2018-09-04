#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include <conio.h>


int main()
{
    float x;
    float y;
    int opcion;
    float suma;// se usa para almacenar el return de la funcion suma
    float resta;
    float divi;
    float multi;
    float facto;
    float facto2;
    do
    {
        system("cls"); //limpia la pantalla

        printf("\nMENU\n\n");
        printf("\n1.Ingresar primer numero (A=%.2f)\n ",x);
        printf("\n2.Ingresar segundo numero(B=%.2f)\n",y);
        printf("\n3.calcular todos las operaciones\n");
        printf("\n4.Informar todos los resultados\n");
        printf("\n5.Salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:

            x = primerOperando();

            break;
        case 2:

            y = segundoOperando();
            break;

        case 3:

            suma = sumatoria(x,y);
            //printf("\nLa suma de %.2f y %.2f es: %.2f",x, y, suma);
            getch();// se hara una pausa despues de mostrar el resultado

            resta = restar(x,y);
            //printf("\nLa resta de %.2f y %.2f es: %.2f",x, y, resta);
            getch();

            divi = division(x,y);
            getch();

            multi=multiplicacion(x,y);
            getch();

            facto = calcularFactorial1(x);
            getch();
            facto2 = calcularFactorial2(y);
            getch();
            break;

        case 4:
            printf("Todas las operaciones: ");
            printf("\n\n1.La suma de %.2f y %.2f es: %.2f",x, y, suma);
            printf("\n\n2.La resta de %.2f y %.2f es: %.2f",x, y, resta);
            //printf("\n\n3. La division de %.2f y %.2f es: %.2f",x,y, divi);
            if(divi==-1)
            {
                printf("\nIngrese otro numero diferente de CERO en el 2do operando");

            }
            else
            {
                printf("\n\n3. La division de %.2f y %.2f es: %.2f",x,y, divi);
            }
            printf("\n\n4.La multiplicacion de %.2f y %.2f es: %.2f \n",x,y, multi);
            //printf("\n\n5.nEl factorial de %.2f es: %.2f ",y, facto2);
            //printf( "\n\nY el factorial de %.2f es: %.2f",x, facto);


            if(facto==-1)
            {
                printf("\n5.No hay suficiente espacio para calcular el factorial, elija un numero menor a 13");

            }
            else
            {
                printf( "\n\n 5. El factorial de %.2f es: %.2f\n",x, facto);

            }


            if(facto2==-1)
            {
                printf("\n6.No hay suficiente espacio para calcular el factorial, elija un numero menor a 13");

            }
            else
            {
               printf("\n\n6.nEl factorial de %.2f es: %.2f \n", y, facto2);
            }

            printf("\n");
            system("pause");
            break;

            //lo que valla dos o puntos o puntos y coma
        }
    }
    while(opcion!=5); //con 5 salgo
    return 0;
}




