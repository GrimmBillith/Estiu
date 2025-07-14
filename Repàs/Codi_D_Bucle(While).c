#include <stdio.h>
#include <stdlib.h>

int main(){
    //TODO Això serà un bucle per agafar-ne exactament el nombre '21'.
    int nombremagic, i;
    //? Normalment "i" és acrónim per a "index" ("índice" en castellà). Serveix per a comptar i ciclar els bucles.
    i = 0;

    //* Demanem a l'usuari el nombre màgic.
    printf("Introdueix el nombre magic --> (10): ");
    scanf("%d", &nombremagic);

    while(nombremagic != 10){
        printf("ERROR!\nSi us plau, introdueix el nombre magic (10) (sense els parentesis)\n");
        scanf("%d", &nombremagic);
        //? Fins que l'usuari no introdueixi el nombre màgic, el programa estarà en bucle!
        i++;
    }
    printf("Has fet %d errors posant el nombre magic.\n", i);
    return 0;
}
