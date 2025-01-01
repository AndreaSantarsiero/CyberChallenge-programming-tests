//versione corretta basata sugli spunti della soluzione proposta
//per accedere alla mia versione al termine delle 3 ore (non corretta), consultare i commit precedenti

#include <stdio.h>
int scanfReturn = 0;




int findMaxIndex(int* array, int arrayLenght);
void printOutput(int* array, int arrayLenght);




int main(int argc, char *argv[]){
    //inizializzazione
    int sandwitchNumber = 0, index = 0;
    scanfReturn = scanf("%d", &sandwitchNumber);

    if(sandwitchNumber < 1 && sandwitchNumber > 10000){
        printf("invalid input\n");
        return 0;
    }


    int sandwitches[sandwitchNumber], weights[sandwitchNumber], nextIndex[sandwitchNumber], solution[sandwitchNumber];

    for(int i = 0; i < sandwitchNumber; i++){
        scanfReturn = scanf("%d", &sandwitches[i]);
    }
    for(int i = 0; i < sandwitchNumber; i++){
        nextIndex[i] = -1;
    }
    for(int i = 0; i < sandwitchNumber; i++){
        solution[i] = 0;
    }


    for(int i = (sandwitchNumber-1); i >= 0; i--){
        weights[i] = sandwitches[i];

        for(int j = i+1; j < sandwitchNumber; j++){
            if(sandwitches[j] > sandwitches[i]){
                continue;   //non devo fare nulla perchè weights[i] già vale sandwitches[i]
            }
            if(weights[j]+sandwitches[i] > weights[i]){
                weights[i] = weights[j]+sandwitches[i];
                nextIndex[i] = j;
            }
        }
    }


    index = findMaxIndex(weights, sandwitchNumber);
    for(int i = 0; i < sandwitchNumber && index > -1; i++){
        solution[i] = sandwitches[index];
        index = nextIndex[index];
    }

    printOutput(solution, sandwitchNumber);
    return 0;
}




int findMaxIndex(int* array, int arrayLenght){
    int index = 0;

    for(int i = 0; i < arrayLenght; i++){
        if(array[i] > array[index]){
            index = i;
        }
    }

    return index;
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