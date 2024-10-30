#include<stdio.h>
#include <stdlib.h>

int main()
{
    double pie = 0.0;
    for(int j = 1; j < pow(2, 25)+1; j++){
        if(j%2 == 1){
            pie += (1.0/(double)(2*j-1));
        }
        else{
            pie -= (1.0/(double)(2*j-1));
        }
    }            
    printf("\nThe value of pie is: %lf\n", 4.0*pie);
    return 0;
}