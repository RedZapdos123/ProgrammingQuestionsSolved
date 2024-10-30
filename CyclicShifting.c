#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s = 1;
    char str[255];
    printf("Input a sentence: ");
    fgets(str, 255, stdin);

    //Counting the number of words
    for(int j = 0; j < strlen(str); j++){
        if(str[j] == ' '){
            s++;
        }
    }
    
    char words[s][255];
    int v = 0, z = 0;
    
    //Splitting the sentence into words
    for(int k = 0; k < strlen(str); k++){
        if(str[k] == ' ' || str[k] == '\n'){
            words[v][z] = '\0';
            z = 0;
            v++;
        }
        else{
            words[v][z] = str[k];
            z++;
        }
    }
    
    //Printing the words with one postion shifted
    printf("%s ", words[s-1]);
    for(int j = 0; j < s-1; j++){
        printf("%s ", words[j]);
    }
    
    
    return 0;
}