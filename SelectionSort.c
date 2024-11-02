#include <stdio.h>

//For the array size input
int arraySize(){
    int s;
    printf("Input the array size: ");
    scanf("%d", &s);
    return s;
}

//For the array input
void arrayInput(int s, int x[]){
    printf("Input the array: ");
    
    for(int j = 0; j < s; j++){
        scanf("%d", &x[j]);
    }
}
//The swapper function using bitwise operator XOR
void swap(int *a, int *b){
    if(a != b || *a != *b){
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }    
}    

//The Selection Sorting algorithm
void selectionSort(int s, int a[]){
    for(int j = 0; j < s; j++){
        int min = j;
        for(int k = j+1; k < s; k++){
            if(a[min] > a[k]){
                min = k;
            }
        }
        swap(&a[min], &a[j]);
    }
}

//For printing out the array's elements on the screen
void arrayOutput(int s, int a[]){
    printf("The new array is: ");
    for(int k = 0; k < s; k++){
        printf("%d ", a[k]);
    }    
}

int main()
{
    //Taking input
    int s = arraySize();
    int a[s];
    arrayInput(s, a);
    
    //Sorting using selectionSort
    selectionSort(s, a);
    
    //Printing the output
    arrayOutput(s, a);
    return 0;
}