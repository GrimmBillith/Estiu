#include <stdio.h>
#include <stdlib.h>

int main(){
    int primervalor, segonvalor, diferencia;
    //* Aquest programa informarà a l'usuari si els dos nombres introduïts son iguals o diferents, i si son diferents,
    //* quanta diferencia de valor numeric hi ha.
    printf("Introdueix el primer nombre enter: ");
    scanf("%d", &primervalor);
    printf("Introdueix el segon nombre enter: ");
    scanf("%d", &segonvalor);
    //! SI 1rValor Y 2nValor SON == (IGUALS), LLAVORS...
    if(primervalor == segonvalor){
        printf("Son iguals!\n");
    }
    //! SINO...
    else{
        printf("Son diferents!\n");
        //? Per calcular la diferencia, hem de restar el gran menys el petit, farem altre condicional!
        if(primervalor>segonvalor){
            diferencia = primervalor - segonvalor;
        }
        else{
            diferencia = segonvalor - primervalor;
        }
        printf("La diferencia de %d i %d es: %d\n", primervalor, segonvalor, diferencia);
    }
    return 0;
}
