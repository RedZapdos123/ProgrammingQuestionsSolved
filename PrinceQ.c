#include<stdio.h>

int main()
{
    int n = 5;
    for(int j = 0; j < 5; j++){
        for(int k = 1; k <= n; k++){
            printf("%d", k);
            }
            
        for(int k = n; k >= 1; k--){
            printf("%d", k);
            }
        printf("\n");
        n--;
    }             
    
    return 0;
}