#include<stdio.h>

int main(){

    //Taking input of the sentence and the indecies to be extracted
    int s = -1, e = -1;
    char str[255];
    printf("Input a sentence: ");
    fgets(str, 255, stdin);
    
    do{
    printf("\nInput the start index to slice: ");
    scanf("%d", &s);
    printf("\nInput the end index to slice: ");
    scanf("%d", &e);
    
    if(s > e || e > strlen(str) || s < 0)
        printf("\nInvalid Input! Input again.\n");
    }while(s > e || e > strlen(str) || s < 0);
    
    //Slicing up the string to get a substring
    char sub[255];
    int k = 0;
    for(int j = s; j < e+1; j++){
        sub[k] = str[j];
        k++;
    }
    sub[k] = '\0';
    
    //Printing the substring
    printf("\nThe substring is: %s\n", sub);    
    return 0;
}