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
    printf("Input the sorted array: ");
    
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

//The helper function
int helper(int a[], int n, int l, int r, int t){
    if(l > r){
        return -1;
    }
    else{
        if(a[r] == a[l]){
            if(a[l] == t){
                return l;
            }
            else{
                return -1;
            }
        }            
            
        //Finding the middle
        int m = (l+r)/2;
        if(a[m] == t){
            return m;
        }
        else if(a[m] < t){
            return helper(a, n, m+1, r, t);
        }
        else if(a[m] > t){
            return helper(a, n, l, m-1, t);
        }
    }
}    

//The function to implement the recursive Binary Search Algorithm
int RecursiveBinarySearch(int n, int a[], int t){
    int l = 0, r = n-1;
    
    //Checking if the target is not in range
    if(a[l] > t || a[r] < t){
        return -1;
    }    
    else{
        return helper(a, n, l, r, t);
    }    
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
    
    //Searching using BinarySearch and storing the index of the first occurance
    int ti = RecursiveBinarySearch(s, a, t);
    
    //Printing the output
    searchResults(t, ti);
    
    return 0;
}