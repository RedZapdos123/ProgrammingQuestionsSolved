#include <stdio.h>

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

//Ternary Search Helper function
int helper(int l, int r, int a[], int t){
    int m1 = l+(r-l)/3;
    int m2 = r-(r-l)/3;
    if(l > r){
        return -1;
    }
    else{
        if(a[m1] == t){
            return m1;
        }
        else if(a[m2] == t){
            return m2;
        }    
        else{
            int ml = helper(l, m1-1, a, t);
            
            if(ml != -1)
                return ml;
            
            int mr = helper(m2+1, r, a, t);
            
            if(mr != -1)
                return mr;
                
            return helper(m1+1, m2-1, a, t);
        }
    }    
}
            
//The ternary search implementation
int ternarySearch(int s, int a[], int t){
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
    
    //Searching using ternarySearch and storing the index of the first occurance
    int ti = ternarySearch(s, a, t);
    
    //Printing the output
    searchResults(t, ti);
    
    return 0;
}