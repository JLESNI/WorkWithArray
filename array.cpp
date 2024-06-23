#include <iostream>
#include "array.h"


void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

void enterData(int array[]) {
    printf("Enter data into array\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int findMinimmumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float calcuateAverage(int array[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i];
    }
    float average = (float) sum / SIZE;
    return average;
}

int saveToFile(int array[]) {
    FILE *fptr = NULL;
    fptr = fopen("..\\array.txt","w");
    if (fptr == NULL) {
        return 1;
    }
    for (int i = 0; i < SIZE; ++i) {
        fprintf(fptr, "%d\n", array[i]);
    }
    return 0;
}
void changeElement(int array[]) {
    int i;
    printf("Enter which element would you change\n");
    scanf("%d", &i);
    if(i>=0 & i<=SIZE-1){
        printf("Enter value \n");
        scanf("%d", &array[i]);
    }else{
        printf("Error element don't exist\n");
    }
}

int restoreFromFile() {
    return 0;
}
