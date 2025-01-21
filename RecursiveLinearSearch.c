#include <stdio.h>

//For the array size input
int arraySize(){
    int s;
    printf("Input the array size: ");
    scanf("%d", &s);
    return s;
}

//For the sorted array input
void arrayInput(int s, int x[]){
    printf("Input the array: ");
    
    for(int j = 0; j < s; j++){
        scanf("%d", &x[j]);
    }
}

//Takes the input of a target number
int targetInput(){
    int t = 0;
    do{
        printf("Input a target number: ");
        scanf("%d", &t);
        if(t%1 != 0){
            printf("\nInvalid Input!\n");
        }
    }while(t%1 != 0);
    return t;        
}

//The helper function
int helper(int a[], int n, int i, int t){
    if(i >= n){
        return -1;
    }
    else{
        if(a[i] == t){
            return i;
        }
        else{
            return helper(a, n, i+1, t);
        }       
    }
}    

//The function to implement the recursive Linear Search Algorithm
int RecursiveLinearSearch(int n, int a[], int t){
    return helper(a, n, 0, t);
}                        

//For printing the search results
void searchResults(int t, int ti){
    if(ti == -1){
        printf("\n%d not found in the array.\n", t);
    }
    else{
        printf("\n%d found at %d.\n", t, ti);
    }
}

int main()
{
    //Taking input
    int s = arraySize();
    int a[s];
    arrayInput(s, a);
    int t = targetInput();
    
    //Searching using Recursive Linear Search and storing the index of the first occurance
    int ti = RecursiveLinearSearch(s, a, t);
    
    //Printing the output
    searchResults(t, ti);
    
    return 0;
}