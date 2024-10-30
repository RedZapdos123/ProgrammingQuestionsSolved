#include <stdio.h>

//Function for array size input
int arraySize(int *n){
    printf("Input the array size: ");
    scanf("%d", n);
}

//Function for array input
void arrayInput(int a[], int s){
    printf("\nInput the array: ");
    for(int i = 0; i < s; i++){
        scanf("%d", a+i);
    }
}

//Finding the second largest element of an unsorted array
int secondLargestUnsorted(int a[], int s){
    int m1 = 0, m2 = 0;
    //Finding the largest element of the unsorted array
    for(int j = 0; j < s; j++){
        if(*(a+m1) < *(a+j)){
            m1 = j;
        }
    }
    //Finding the second largest element of the unsorted array
    for(int j = 0; j < s; j++){
        if(*(a+m2) < *(a+j) && j != m1){
            m2 = j;
        }
    }
    
    return *(a+m2);
}

int main(){
    //Taking input
    int s = 0;
    arraySize(&s);
    int a[s];
    arrayInput(a, s);
    
    //Finding the second largest element in the inputed unsorted array and print it
    printf("\nThe second largest element: %d.\n", secondLargestUnsorted(a, s));
    return 0;
}     
    
        