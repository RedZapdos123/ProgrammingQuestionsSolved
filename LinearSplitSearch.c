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

//The Linear Split Search Helper function for recursion
int helper(int s, int a[], int l, int r, int t, int f){
    if(l > r){
        return -1;
    }
    else if (f == 1){
        if(a[l] == t)
            return l;
        int ls = helper(s, a, l+1, r, t, 1);
        if(ls != -1)
            return ls;
        else
            return -1;
    }
    else if(f == -1){
        if(a[r] == t)
            return r;
        int rs = helper(s, a, l, r-1, t, -1);
        if(rs != -1)
            return rs;
        else
            return -1;    
    }        
}

//The Linear Split Search algorithm using recursion
int linearSearch(int s, int a[], int t){
    int m = s/2;
    
    int ls = helper(s, a, 0, m, t, 1);
    if(ls != -1)
        return ls;
    
    int rs = helper(s, a, m+1, s-1, t, -1);
    if(rs != -1)
        return rs;
    
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
    
    //Searching using Recursive Linear Split Search and storing the index of the first occurance
    int ti = linearSearch(s, a, t);
    
    //Printing the output
    searchResults(t, ti);
    
    return 0;
}