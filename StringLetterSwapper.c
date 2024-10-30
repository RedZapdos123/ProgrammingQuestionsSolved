#include <stdio.h>
#include <string.h>
int main()
{
    char str[255];
    printf("Input a string: ");
    fgets(str, 255, stdin);
    
    int k = strlen(str)-1;
    char temp;
    for(int j = 0; j < strlen(str)/2; j++){
        temp = str[j];
        str[j] = str[k];
        str[k] = temp;
        k--;
    }
    printf("The new string is: %s.", str);    
    return 0;
}