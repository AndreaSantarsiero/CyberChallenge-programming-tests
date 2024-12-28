//starting time: 23:26
//after 1h 40min is not working. I think I unduerstood the problem

#include <stdio.h>
int scanfReturn = 0;




void ordineDecrescente(int* array, int posizione, int arrayLenght);
int calcolaPesoTotale(int* array, int arrayLenght);
void copiaArray(int* array, int* copia, int arrayLenght);
void printOutput(int* array, int arrayLenght);
int findNextPosizione(int posizione, int* array, int arrayLenght);




int main(int argc, char *argv[]){
    //inizializzazione
    int sandwitchNumber = 0, pesoTotale = 0;
    scanfReturn = scanf("%d", &sandwitchNumber);


    if(sandwitchNumber < 1 && sandwitchNumber > 10000){
        printf("invalid input\n");
        return 0;
    }


    int sandwitches[sandwitchNumber], temp[sandwitchNumber], solution[sandwitchNumber];
    for(int i = 0; i < sandwitchNumber; i++){
        scanfReturn = scanf("%d", &sandwitches[i]);
    }

    for(int i = 0; i < sandwitchNumber; i++){
        copiaArray(sandwitches, temp, sandwitchNumber);
        ordineDecrescente(temp, i, sandwitchNumber);
        if(pesoTotale < calcolaPesoTotale(temp, sandwitchNumber)){
            pesoTotale = calcolaPesoTotale(temp, sandwitchNumber);
            copiaArray(temp, solution, sandwitchNumber);
        }

        /* printf("iterazione %d:\n", i);
        printOutput(solution, sandwitchNumber);
        printf("\n-----------------------------------\n"); */
    }

    
    printOutput(solution, sandwitchNumber);
    return 0;
}




void ordineDecrescente(int* array, int posizione, int arrayLenght){
    int max = array[0];

    for(int i = 0; i < posizione; i++){
        if(array[i] < array[posizione]){
            array[i] = 0;
        }
    }

    for(int i = 0; i < arrayLenght; i++){
        if(array[i] > max){
            array[i] = 0;
        }
        else if (array[i] > 0){
            max = array[i];
        }
    }
}



int calcolaPesoTotale(int* array, int arrayLenght){
    int pesoTotale = 0;

    for(int i = 0; i < arrayLenght; i++){
        pesoTotale += array[i];
    }

    return pesoTotale;
}



void copiaArray(int* fonteDati, int* copia, int arrayLenght){
    for(int i = 0; i < arrayLenght; i++){
        copia[i] = fonteDati[i];
    }
}



void printOutput(int* array, int arrayLenght){
    int contatore = 0;
    for(int i = 0; i < arrayLenght; i++){
        if(array[i] > 0){
            contatore++;;
        }
    }

    printf("%d\n", contatore);

    for(int i = 0; i < arrayLenght; i++){
        if(array[i] > 0){   //
            if((i+1) < arrayLenght){
                printf("%d ", array[i]);
            }
            else{
                printf("%d", array[i]);
            }
        }
    }
    printf("\n");
}