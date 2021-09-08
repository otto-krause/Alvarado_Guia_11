#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Num1=0, Num2=0;

    void NumerosEnPantalla ()
    {
        printf("Ingrese dos numeros\n");
        scanf("%d", &Num1);
        scanf("%d", &Num2);

        system("cls");

        printf("%d\n\n", Num1);
        printf("%d", Num2);
    }
    NumerosEnPantalla();
    return 0;
}
