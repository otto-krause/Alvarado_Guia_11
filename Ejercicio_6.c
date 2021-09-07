#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Num=0, Num8=0;

    int OctavaParte()
    {
        printf("Ingrese un numero: ");
        scanf("%d", &Num);

        system("cls");

        Num8=Num/8;

        printf("La octava parte de %d es %d", Num, Num8);
    }
    OctavaParte();
    return 0;
}