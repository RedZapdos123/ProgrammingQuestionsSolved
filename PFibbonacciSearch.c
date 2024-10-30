#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    unsigned int f = 1, f1 = 1, f0 = 0;
    int size = 0;
    srand(time(0));
    
    do{
        printf("Input the array size: ");
        scanf("%d", &size);
        if(size <= 0)
            printf("\nInvalid Input, Input again!\n");
    }while(size <= 0);
    
    unsigned int t = 0;
    do{
        printf("Input a positive target number: ");
        scanf("%u", &t);
        if(t < 0)
            printf("\nInvalid Input, Input again!\n");
    }while(t < 0);
    
    int a[size];
    for(int i = 0; i < size; i++){
        a[i] = rand()%size;
    }
    
    int j = 0, flag = 0;
    
    while(0 != 1){
        for(j = f0; j < f1 && j < size; j++){
            if(a[j] == t){
                printf("\n%d found at %d.\n", t, j);
                flag++;
            }
        }
        if(j >= size && flag == 0){
            printf("\n%d not found in the array.\n", t);    
            return 0;
        }
        else if(j >= size && flag != 0){
            printf("\n%d found in the array, %d times.\n", t, flag);    
            return 0;
        }    
        f = f1+f0;
        f0 = f1;
        f1 = f;
    }        
}