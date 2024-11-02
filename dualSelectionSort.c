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

//The Dual Selection Sorting algorithm
void dualSelectionSort(int n, int a[]){
    for(int j = 0; j < n/2; j++){
        int min = j, max = j;
        for(int k = j+1; k < n-j; k++){
            if(a[min] > a[k]){
                min = k;
            }
            if(a[max] < a[k]){
                max = k;
            }    
        }
        swap(&a[min], &a[j]);
        if(max == j){
            max = min;
        }
        swap(&a[n-j-1], &a[max]);
    }
}

//For printing out the array's elements on the screen
void arrayOutput(int n, int a[]){
    printf("The new array is: ");
    for(int k = 0; k < n; k++){
        printf("%d ", a[k]);
    }    
}

int main()
{
    //Taking input
    int n = arraySize();
    int a[n];
    arrayInput(n, a);
    
    //Sorting using dualSelectionSort
    dualSelectionSort(n, a);
    
    //Printing the output
    arrayOutput(n, a);
    return 0;
}