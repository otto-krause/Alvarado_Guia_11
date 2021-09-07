#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int Lado1=0, Lado2=0, P=0, A=0;

    int PerimetroArea()
    {
        printf ("Ingrese los dos lados del rectangulo\n");
        scanf ("%d", &Lado1);
        scanf ("%d", &Lado2);

        system ("cls");

        P=2*Lado1+2*Lado2;
        A=Lado1*Lado2;

    printf ("El perimetro del rectangulo es de: \n%d\ny su area de: \n%d", P, A);
    }
    PerimetroArea();
    return 0;
}
