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
//The swapper function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//The function to partion the array and find the new pivot
int partition(int a[], int l, int r){
    //The pivot element
    int p = a[r];
    int k = l-1;
    
    for(int j = l; j < r; j++){
        if(a[j] < p){
            k++;
            swap(&a[k], &a[j]);
        }
    }
    swap(&a[k+1], &a[r]);
    return k+1;
}            

//The recursive Quick Sorting algorithm
void quickSort(int a[], int l, int r){
    if(l < r){
        int p = partition(a, l, r);
        
        quickSort(a, l, p-1);
        quickSort(a, p+1, r);
    }
    return;
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
    int *a = (int *)calloc(s, sizeof(int));
    arrayInput(s, a);
    
    //Sorting using quickSort
    quickSort(a, 0, s-1);
    
    //Printing the output
    arrayOutput(s, a);
    return 0;
}