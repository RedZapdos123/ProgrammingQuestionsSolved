#include <stdio.h>
#include <string.h>

//Sorting the string using Insertion Sort
void InsertionSort(char str[], char nstr[]){
    int len = strlen(str);
    strcpy(nstr, str);

    for(int k = 1; k < len; k++){
        int j = k - 1;
        char key = nstr[k];
        while(j >= 0 && key < nstr[j]){
            nstr[j + 1] = nstr[j];
            j--;
        }
        nstr[j + 1] = key;
    }
    nstr[len] = '\0';
}

//Finding the duplicate characters
void duplicateChar(char* str){
    char m = '\0';
    int len = strlen(str);
    for(int k = 0; k < len - 1; k++){
        if(str[k] == m){
            continue;
        }
        else if(str[k] == str[k + 1]){
            printf("%c ", str[k]);
            m = str[k];
        }
    }
}

int main(){
    //Taking String input
    char str[255];
    char nstr[255];
    printf("Input a string: ");
    scanf("%s", str);
    
    //Sorting the array
    InsertionSort(str, nstr);
    
    //Finding the duplicates and printing them.
    printf("\nThe duplicate characters are: ");
    duplicateChar(nstr);
    putchar('\n');
    return 0;
}