#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[255], s2[255];
    printf("Input the string 1: ");
    scanf("%s", s1);
    printf("Input the string 2: ");
    scanf("%s", s2);
    
    if(strlen(s1) != strlen(s2)){
        printf("Not an Anagram");
        return 0;
    }
    
    for(int k = 0; k < strlen(s1); k++){
        s1[k] = tolower(s1[k]);
    }
    for(int k = 0; k < strlen(s2); k++){
        s2[k] = tolower(s2[k]);
    }
    
    for(int k = 0; k < strlen(s1)-1; k++){
        for(int j = 0; j < strlen(s1)-k-1; j++){
            if(s1[j] > s1[j+1]){
                char temp = s1[j];
                s1[j] = s1[j+1];
                s1[j+1] = temp;
            }
        }        
    }
    
    for(int k = 0; k < strlen(s2)-1; k++){
        for(int j = 0; j < strlen(s2)-k-1; j++){
            if(s2[j] > s2[j+1]){
                char temp = s2[j];
                s2[j] = s2[j+1];
                s2[j+1] = temp;
            }
        }        
    }
    
    for(int j = 0; j < strlen(s2); j++){
        if(s1[j] != s2[j]){
            printf("Not Anagram.");
            return 0;
        }
    }
    printf("It's an Anagram.");
    
    return 0;
}