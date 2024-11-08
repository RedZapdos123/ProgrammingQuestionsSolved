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

//The function to implement yhe Interpolation Search Algorithm
int InterpolationSearch(int n, int a[], int t){
    int l = 0, r = n-1, p = 0;
    
    //Checking if the targest is not in range
    if(a[l] > t || a[r] < t){
        return -1;
    }    
    
    while(l <= r){
        //To avoid the zero division error
        if(a[r] == a[l]){
            if(a[l] == t){
                return l;
            }
            else{
                break;
            }
        }            
            
        //Finding the probe
        p = l + (((double)(t - a[l])*(r - l))/(a[r] - a[l]));
        
        if(a[p] == t){
            return p;
        }
        else if(a[p] < t){
            l = p+1;
        }
        else if(a[p] > t){
            r = p-1;
        }
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
    
    //Searching using InterpolationSearch and storing the index of the first occurance
    int ti = InterpolationSearch(s, a, t);
    
    //Printing the output
    searchResults(t, ti);
    
    return 0;
}