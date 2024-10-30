#include <stdio.h>
#include <limits.h>

int main()
{
    long unsigned int f = 1, f1 = 1, f0 = 0;
    while(f <= (UINT_MAX)){
        f = f1 +f0;
        f0 = f1;
        f1 = f;
    }    
    printf("\nThe Largest Fibbonacci Number is:\n%lu\n", f);
    
    if(f > 4807526976){
        printf("\nThe new Largest Fibbonacci Number!\n");
    }    
    return 0;
}