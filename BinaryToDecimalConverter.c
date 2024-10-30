#include<stdio.h>

int main()
{
    //Taking Input
    long int dec = 0, bin = 0;
    printf("Input a decimal number: ");
    scanf("%d", &dec);
    
    //Converting the decimal number to a binary number
    int p = 1;
    while(dec != 0){
        bin += (dec%2)*p;
        p *= 10;
        dec /= 2;
    }
    
    //Printing the output
    printf("The binary equivalent is: %ld.", bin);
    return 0;
}