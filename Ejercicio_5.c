#include<stdlib.h>
#include<stdio.h>

int main()
{
    int R=0, I=0, SumaR=0;

    int SumaResistencias()
    {
        printf("Ingrese las cinco resistencias en serie\n");
        for (I= 1; I<=5; I++)
        {
            scanf("%d", &R);
            SumaR=SumaR+R;
        }
        system("cls");

        printf("La resistencia total es %d", SumaR);    
    }
    SumaResistencias();
    return 0;
}