#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, nombre;
    //? Aquest programa determinarà quants multiples té un nombre respecte el m.c.m. que introdueixi l'usuari.
    //* EXEMPLE: 35(INPUT). OUTPUT --> 5. 7.
    printf("Introdueix un nombre enter: ");
    scanf("%d", &nombre);
    
    printf("Divisors del nombre %d:\n", nombre);
    //! Comencem per par, si "i" es més petit o igual que la meitat de "nombre"...
    for (i = 2; i <= nombre / 2; i++) {
        //? I si es pot dividir amb residu 0...
        if (nombre % i == 0) {
            printf("%d\n", i);
        }

    }
    
    return 0;
}
