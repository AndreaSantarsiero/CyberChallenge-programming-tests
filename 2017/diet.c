//day 1 starting time: 23:26
//after 1h 40min is not working.
//day 2 starting time: 21:52
//after 1h 10min is not working, but improved. official time finished

#include <stdio.h>
int scanfReturn = 0;




void ordineDecrescenteParziale(int* array, int posizione);
int calcolaPesoTotale(int* array, int arrayLenght);
int calcolaPotenziale(int* array, int arrayLenght, int posizione);
void copiaArray(int* array, int* copia, int arrayLenght);
void printOutput(int* array, int arrayLenght);
int findNextPosizione(int posizione, int* array, int arrayLenght);




int main(int argc, char *argv[]){
    //inizializzazione
    int sandwitchNumber = 0, maxPotenziale = 0;
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
        maxPotenziale = 0;

        for(int j = i; j < sandwitchNumber; j++){
            copiaArray(sandwitches, temp, sandwitchNumber);
            ordineDecrescenteParziale(temp, j);
            if(calcolaPotenziale(temp, sandwitchNumber, j) > maxPotenziale){
                maxPotenziale = calcolaPotenziale(temp, sandwitchNumber, j);
                copiaArray(temp, solution, sandwitchNumber);
            }
        }
        sandwitches[i] = solution[i];

        /* printf("iterazione %d:\n", i);
        printOutput(solution, sandwitchNumber);
        printf("\n-----------------------------------\n"); */
    }

    
    printOutput(sandwitches, sandwitchNumber);
    return 0;
}




void ordineDecrescenteParziale(int* array, int posizione){
    int max = 0;

    for(int i = 0; i <= posizione; i++){
        if(array[i] >= array[posizione]){
            max = array[i];
            break;
        }
    }

    for(int i = 0; i < posizione; i++){
        if(array[i] > max){
            array[i] = 0;
        }
        else if (array[i] > 0){
            max = array[i];
        }
    }
}


int calcolaPotenziale(int* array, int arrayLenght, int posizione){
    int potenziale = 0;

    for(int i = 0; i < arrayLenght; i++){
        if(i < posizione && array[i] > array[posizione]){
            potenziale += array[i];
        }
        else if(i > posizione && array[i] < array[posizione]){
            potenziale += array[i];
        }
        else if(i == posizione){
            potenziale += array[i];
        }
        else{
            array[i] = 0;
        }
    }

    return potenziale;
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
        if(array[i] > 0){   //array[i] > 0
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}