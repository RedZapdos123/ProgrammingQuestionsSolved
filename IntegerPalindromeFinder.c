#include<stdio.h>

int reverseInt(int n, int p){
    if(n == 0){
        return 0;
    }
    else{
        return (n%10)*p + reverseInt(n/10, p*10);
    }
}        

int main()
{
    //Taking Input
    int n = 0;
    printf("Input an integer: ");
    scanf("%d", &n);
    
    //Finding the reverse of the number
    int pn = reverseInt(n, 1);
    
    //Printing the output (if it's palindrome).
    if(pn == n){
        printf("%d is a palindrome number.\n", n);
    }
    else{
        printf("\nNot a palindrome.\n");
    }       
    return 0;
}