#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool primeAnagram(char *a, char *b){
    if(strlen(a) != strlen(b)){
        return false;
    }    
    int ap = 1, bp = 1;
    int keys[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107};
    for(int j = 0; j < strlen(a); j++){
        a[j] = tolower(a[j]);
        b[j] = tolower(b[j]);
        if(a[j] == ' '){
            ap *= keys[26];
        }
        if(b[j] == ' '){
            bp *= keys[26];
        }    
        ap *= keys[a[j] - 'a'];
        bp *= keys[b[j] - 'a'];
    }
    if(ap == bp)
        return true;
    else
        return false;    
}          

int main()
{
    //Taking the Strings Input
    char s1[255], s2[255];
    printf("Enter the 1st String: ");
    fgets(s1, 255, stdin);
    printf("\nEnter the 2nd String: ");
    fgets(s2, 255, stdin);
    
    //Removing the '\n' character from the strings
    s1[strlen(s1)-1] = '\0';
    s2[strlen(s2)-1] = '\0';
        
    //The Anagram Finder function using a 'prime number Anagram' algorithm
    bool a = primeAnagram(s1, s2);
    
    //Printing the results
    if(a == true){
        printf("\n'%s' and '%s' are Anagrams of each other.\n", s1, s2);
    }
    else{
        printf("\nNot Anagrams.\n");
    }       
    return 0;
}