#include<stdio.h>
#include <string.h>

/*Warning: This Program best works with those sentences
           or strings which have no duplicate characters 
*/

int main(){

    //Taking input of the sentence and the characters to be extracted
    char s, e;
    int si = -1, ei;
    char str[255];
    printf("Input a sentence: ");
    fgets(str, 255, stdin);
    
    do{
    printf("\nInput the start character to slice: ");
    scanf(" %c", &s);
    si = (int)(strchr(str, s) - str);
    
    printf("\nInput the end character to slice: ");
    scanf(" %c", &e);
    ei = (int)(strchr(str, e) - str);
    
    if(si > ei || ei > strlen(str) || si < 0)
        printf("\nInvalid Input! Input again.\n");
    }while(si > ei || ei > strlen(str) || si < 0);
    
    //Slicing up the string to get a substring
    char sub[255];
    int k = 0;
    for(int j = si; j < ei+1; j++){
        sub[k] = str[j];
        k++;
    }
    sub[k] = '\0';
    
    //Printing the substring
    printf("\nThe substring is: %s\n", sub);    
    return 0;
}