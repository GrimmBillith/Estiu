#include <stdio.h>
#include <stdlib.h>
#define MAXIM 50
int main(){
    //? Suposem que l'usuari només introdueix caràcters en aquest programa.

    //* Declaració de variables.
    char frase[MAXIM];
    int vocals, consonants, espai, total, i;
    i = 0;
    consonants = 0;
    vocals = 0;
    espai = 0;
    //  DEMANAR - AGAFAR
    printf("Usuari, introdueixi una frase i se'l contarà les vocals, consonants i total (de caracters): ");
    fgets(frase, MAXIM, stdin);
    //! AIXÒ SERIA INVALID!     -->    scanf("%c", &frase[MAXIM]);

    //! A continuació bucle i condicionals, explicats en altre programa..

    while(frase[i] != '\0'){
        if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' ||frase[i] == 'i' || frase[i] == 'I' ||
        frase[i] == 'o' || frase[i] == 'O' ||frase[i] == 'u' || frase[i] == 'U'){
            vocals++;
        }
        else{
            if(frase[i] == ' '){
                espai++;
            }
            else{
                consonants++;
            }
        }
        i++;
    }
    //? Aritmética del programa!
    consonants--;
    total = i - espai - 1;
    if(vocals == 0 && consonants == 0){
        total = 0;
    }

    //* Imprimir a l'usuari els resultats.
    printf("Vocals: %d\n", vocals);
    printf("Consonants: %d\n", consonants);
    printf("Total: %d\n", total);

    return 0;
}
