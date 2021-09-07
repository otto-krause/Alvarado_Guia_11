#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int num1=0, num2=0;

    int RelacionNumeros()
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