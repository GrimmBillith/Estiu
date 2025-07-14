#include <stdio.h>
#include <stdlib.h>

int main(){
    //? Suposem que l'usuari només introdueix nombres enters en aquest programa.
    
    //* Declaració de variables.
    int primernombre, segonnombre, resultat;
    //DEMANAR - AGAFAR
    printf("Introdueix primer valor de una suma de dos operands: ");
    scanf("%d", &primernombre);
    printf("Introdueix el segon valor de una suma de dos operands: ");
    scanf("%d", &segonnombre);
    //? Calcular resultat
    resultat = primernombre + segonnombre;
    printf("La suma de %d i %d equival a: %d + %d = %d\n", primernombre, segonnombre, primernombre, segonnombre, resultat);
    return 0;
}
