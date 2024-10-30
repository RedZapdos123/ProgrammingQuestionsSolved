#include <stdio.h>
#include <math.h>
#include <time.h>

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

//Takes input of a target number
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

//The factorial function
int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
       return n*(factorial(n-1));
    }       
}

//The bogoSearch algorithm
int bogoSearch(int s, int a[], int t){
    int v = -1;
    int n = (int)(pow(s, s)*factorial(s));
    while(n != 0){
        srand(time(0));
        v = rand()%s;
        if(a[v] == t){
            return v;
        }
        n--;  
    }
    return -1;        
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
    
    //Searching using BogoSearch and storing the index of the first occurance
    int ti = bogoSearch(s, a, t);
    
    //Printing the output
    searchResults(t, ti);
    
    return 0;
}