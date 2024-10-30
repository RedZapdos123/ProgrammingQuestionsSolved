#include <stdio.h>
#include <math.h>
#include <time.h>

//For the array size input
int arraySize(){
    int s;
    do{
        printf("Input the array size: ");
        scanf("%d", &s);
        if(s < 1)
            printf("Invalid Input!\n");
    }while(s < 1);        
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

//Binary Search Helper function
int helper(int l, int r, int a[], int t){
    int m = l+(r-l)/2;
    if(l > r){
        return -1;
    }
    else{
        if(a[m] == t){
            return m;
        }
        else{
            int ml = helper(l, m-1, a, t);
            
            if(ml != -1)
                return ml;
            else
                return helper(m+1, r, a, t);    
        }
    }    
}
            
//The binary search implementation
int binarySearch(int s, int a[], int t){
    int l = 0, r = s-1;
    return helper(l, r, a, t);
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
    
    //Searching using binarySearch and storing the index of the first occurance
    int ti = binarySearch(s, a, t);
    
    //Printing the output
    searchResults(t, ti);
    
    return 0;
}