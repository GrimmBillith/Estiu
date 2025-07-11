#include <stdio.h>
#include <stdlib.h>

int main(){
    //? Suposem que l'usuari nómes introdueix nombres reals al programa.

    //* Declaració de variables
    float primernombre, segonnombre, resultat;
    //! Per estètica, només es veuràn 3 xifres decimals com a molt!

    // DEMANAR - AGAFAR
    printf("Introdueix el primer valor per a una suma de dos operands (reals i com a molt 3 decimals!): ");
    scanf("%f", &primernombre);
    printf("Introdueix el segon valor per a una suma de dos operands (reals i com a molt 3 decimals!): ");
    scanf("%f", &segonnombre);
    
    //? Calculem resultat.
    resultat = primernombre + segonnombre;
    printf("La suma de %.3f i %.3f equival a: %.3f + %.3f = %3.f\n", primernombre, segonnombre, primernombre, segonnombre, resultat);

    return 0;
}
