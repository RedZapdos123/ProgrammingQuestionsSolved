#include <stdio.h>
#include <stdbool.h>
#include <time.h>

//For the array size input
int arraySize(){
    int s;
    printf("Input the array size: ");
    scanf("%d", &s);
    return s;
}

//For the array input
void arrayInput(int s, int x[], int n){
    printf("Input the array %d: ", n);
    
    for(int j = 0; j < s; j++){
        scanf("%d", &x[j]);
    }
}

//Swaps two variables' values
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Checks if an array is sorted
bool checker(int s, int a[]){
    int flag = true;
    for(int j = 0; j < s-1; j++){
        if(a[j+1] < a[j]){
            flag = false;
            break;
        }    
        else{
            flag = true;
        }    
    }    
    return flag;    
}

//The bogosort algorithm
void bogosort(int s, int a[]){
    while(!(checker(s, a))){
        srand(time(0));
        swap(&a[rand()%s], &a[rand()%s]);
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
    arrayInput(s, a, 1);
    
    //Sorting using bogosort
    bogosort(s, a);
    
    //Printing the output
    arrayOutput(s, a);
    return 0;
}