#include<stdio.h>

int input(){
    //Taking Input
    int dec = 0;
    printf("Input a decimal number: ");
    scanf("%d", &dec);
    return dec;
}

long int decToBin(int dec){  
    //Converting the decimal number to a binary number
    long int bin = 0;
    int p = 1;
    while(dec != 0){
        bin += (dec%2)*p;
        p *= 10;
        dec /= 2;
    }
    return bin;
}

void output(long int bin, int n){    
    //Printing the output
    int c = 0;
    while(bin != 0){
        if(bin%10 == 1){
            c++;
        }
        bin /= 10;
    }
    printf("\nThe count of 1s in binary representation of %d, is: %d\n", n, c);
}

int main(){
    //Taking Input
    int dec = input();
    
    //Converting the decimal number to a binary number
    long int bin = decToBin(dec);
    
    //Printing the output
    output(bin, dec);
    
    return 0;
}    