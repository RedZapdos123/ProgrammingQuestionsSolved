#include <stdio.h>
#include <string.h>

int main()
{
    //Taking input of the sentence and the word to be searched in it.
    int s = 1;
    char str[255];
    printf("Input a sentence: ");
    fgets(str, 255, stdin);
    
    char word[255];
    printf("Input a word: ");
    scanf("%s", word);

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
    
    //Printing an inputed word
        
    for(int j = 0; j < s; j++){
        if(strcmp(word, words[j]) == 0 && (strlen(word) == strlen(words[j]))){
            printf("The word has been found: %s at position: %d", words[j], j+1);
            return 0;
        }
    }
    
    printf("%s not found in the inputed sentence.", word);
    return 0;
}