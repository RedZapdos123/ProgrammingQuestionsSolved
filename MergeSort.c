#include <stdio.h>
#include <stdlib.h>

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

//The function to merge the array halves
void merge(int a[], int s, int m, int e){
    //Creating the array halces to sort
    int s1 = m - s + 1;
    int s2 = e - m;
    
    int *b1 = (int*)calloc(s1, sizeof(int));
    int *b2 = (int*)calloc(s2, sizeof(int));
    
    //Demerging the array halves
    for(int j = 0; j < s1; j++){
        b1[j] = a[s + j];
    }
    
    for(int j = 0; j < s2; j++){
        b2[j] = a[m + 1 + j];
    }
    
    //Merging the array halves
    int j = 0, k = 0, v = s;
    while(j < s1 && k < s2){
        if(b1[j] < b2[k]){
            a[v] = b1[j];
            j++;
        }
        else{
            a[v] = b2[k];
            k++;
        }
        v++;
    }
    
    //Filling up the remaining array
    while(j < s1){
        a[v] = b1[j];
        j++;
        v++;
    }
    while(k < s2){
        a[v] = b2[k];
        k++;
        v++;
    }
    
    //Freeing the allocated memory
    free(b1);
    free(b2);
}                    
//The recursive Merge Sorting algorithm
void mergeSort(int a[], int s, int e){
    if(s < e){
        //Finding the mid point
        int m = s + (e - s)/2;
        
        //Sorting the arrays recursively using merge sort
        mergeSort(a, s, m);
        mergeSort(a, m+1, e);
        
        //Sorting and merging the array halves
        merge(a, s, m, e);
    }
    return;
}

//For printing out the array's elements on the screen
void arrayOutput(int s, int a[]){
    printf("The new array is: ");
    for(int k = 0; k < s; k++){
        printf("%d ", a[k]);
    }
    printf("\n");
}

int main()
{
    //Taking input
    int s = arraySize();
    int *a = (int *)calloc(s, sizeof(int));
    arrayInput(s, a);
    
    //Sorting using mergeSort
    mergeSort(a, 0, s - 1);
    
    //Printing the output
    arrayOutput(s, a);
    
    //Freeing the allocated memory
    free(a);
    return 0;
}