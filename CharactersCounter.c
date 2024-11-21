#include <stdio.h>

//Function find the characters count
void countCharacters(char *str){
    int counts[255] = {0}; 

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' ' && str[i] != '\n'){
            counts[(int)(str[i])] += 1;
        }
    }

    for(int i = 0; i < 255; i++){
        if(counts[i] > 0){
            printf("%c = %d\n", i, counts[i]);
        }
    }
}

int main(){

    //Taking input
    char str[255];
    printf("Input a string: ");
    fgets(str, 255, stdin);
    
    //Printing the output
    printf("\nCharacters' counts:\n");
    countCharacters(str);
    
    return 0;
}