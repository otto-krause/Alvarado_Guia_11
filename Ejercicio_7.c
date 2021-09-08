#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int num1=0, num2=0;

    void RelacionNumeros()
    {
        printf ("Ingrese dos numeros\n");
        scanf ("%d",&num1);
        scanf ("%d",&num2);

        system ("cls");

        if (num1==num2)
            {
            printf("Ambos numeros son iguales");
            }
        else
            {
            if (num1>num2)
                {
                printf("El primer numero es mayor al segundo");
                }
            else
                {
                printf("El segundo numero es mayor al primero");
                }
            }
    }
    RelacionNumeros();
    return 0;
}
