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

//The Insertion Sorting algorithm
void InsertionSort(int s, int a[]){
    int key = 0, k = 0;
    
    for(int i = 1; i < s; i++){
        key = a[i];
        for(k = i-1; k >= 0; k--){
            if(a[k] > key){
                a[k+1] = a[k];
            }
            else{
                break;
            }    
        }
        a[k+1] = key;
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
    
    //Sorting using bogosort
    InsertionSort(s, a);
    
    //Printing the output
    arrayOutput(s, a);
    return 0;
}