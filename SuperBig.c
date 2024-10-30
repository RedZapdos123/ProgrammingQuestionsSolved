#include<stdio.h>

long long int factorial(long long int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}            

int main()
{
    printf("The answer is: %lld", factorial(100)+factorial(69));
    return 0;
}