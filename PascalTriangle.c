#include <stdio.h>
#include <stdlib.h>

//The factorial function using recursion
int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}           

int main(){
    //Taking input
    int row = 0;
    printf("Input the number of rows: ");
    scanf("%d", &row);
    printf("\n");
    
    //Printing the Pascal Triangle
    for(int j = 0; j < row; j++){
        for(int k = 0; k < row-1-j; k++){
            printf(" ");
        }
        for(int k = 0; k <= j; k++){
            printf("%d ", factorial(j)/(factorial(k)*factorial(j-k)));
        }
        printf("\n");
    }
    
    return 0;
}        