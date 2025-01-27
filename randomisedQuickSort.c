#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//The function to take input of the size of an array
int arraySize(int *s){
    //Checking if the size, entered is valid and asking to re-enter the array size
    do{
        printf("Enter the array size: ");
        scanf("%d", s);

        if(s <= 0){
            printf("\nInvalid Input! Enter a natural number.\n");
        }
    } while(s <= 0);
}

//The array input function
void arrayInput(int a[], int size){
    //Taking the array input
    printf("\nInput the array: ");
    for(int k = 0; k < size; k++){
        scanf("%d", a+k);
    }
    return;
}

//The swapper function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//THe random pivot generation function
int randomPivot(int a[], int s, int e){
    //Generating the random pivot
    int rp = s + (rand() % (e - s + 1));

    return rp;
}

//THe function to randomly partition the array
int randomPartition(int a[], int s, int e){
    
    int p = randomPivot(a, s, e);
    int k = s - 1;

    swap(&a[p], &a[e]);

    for(int j = s; j < e; j++){
        if(a[j] <= a[e]){
            k++;
            swap(a+j, a+k);
        }
    }
    swap(a+k+1, a+e);

    return k+1;
}

//The function to implement the randomised Quick Sort algorithm
void randomisedQuickSort(int a[], int s, int e){
    if(s >= e){
        return;
    }
    else{
        int p = randomPartition(a, s, e);
        randomisedQuickSort(a, s, p-1);
        randomisedQuickSort(a, p+1, e);
    }
}

//The function to print the output to the screen
void arrayOutput(int a[], int size){
    printf("\nThe array is: ");
    for(int j = 0; j < size; j++){
        printf("%d ", a[j]);
    }
    printf("\n");
}

//THe driver main function
int main(){
    //Taking the array size input
    int size = 0;
    arraySize(&size);

    //Taking the array input
    int *a = (int *)calloc(size, sizeof(int));
    arrayInput(a, size);

    //Seeding the random function
     srand(time(0));

    //Sorting the array using randomised Quick Sort
    randomisedQuickSort(a, 0, size - 1);
    
    //Printing the sorted arrray
    arrayOutput(a, size);

    //Freeing the allocated memory
    free(a);

    return 0;
}