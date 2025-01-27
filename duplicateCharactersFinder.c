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
char* duplicateChar(char* str){
    char m = '\0';
    char nstr[255];
    int len = strlen(str);
    int c = 0;
    for(int k = 0; k < len - 1; k++){
        if(str[k] == m){
            continue;
        }
        else if(str[k] == str[k + 1]){
            nstr[c] = str[k];
            m = str[k];
            c++;
        }
    }
    nstr[c+1] = '\0';
    return nstr;
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
    strcpy(nstr, duplicateChar(nstr));
    printf("%s", nstr);
    putchar('\n');
    return 0;
}