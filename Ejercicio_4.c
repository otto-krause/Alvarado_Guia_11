#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int F=0, A=0, P=0;

    void Presion()
    {
        printf("Ingrese la fuerza ejercida en una superficie y luego dicha superficie\n");
        scanf("%d",&F);
        scanf("%d",&A);

        system("cls");

        P=F/A;

        printf("La presion que se ejerce en la superficie es de %d pascales", P);
    }
    Presion();
    return 0;
}
