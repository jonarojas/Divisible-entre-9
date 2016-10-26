# include <stdio.h>
# include <stdlib.h>
int main ()
{
    int num, div;
    char op;
    printf ("\n\t Porgrama para ver numeros divisibles entre 9 \n\t");
    do
    {
        printf ("\n Ingrese el dividendo \n\t");
        scanf ("%i", &num);
        div=num%9;
        if (div==0)
        {
            printf ("\n\t El numero  %i es divisible entre 9", num);
        }
        else
        {
            printf ("\n\t El numero  %i no es divisible entre 9", num);
        }
        fflush (stdin);
        printf ("\n\t Desea ingresar otro numero? s/n ");
        scanf  ("%c", &op);
    }
    while (op !='n' && op !='N');
    getch();
    return 0;
}
