#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Taking the input
    int size = 0;
    printf("Input the array size: ");
    scanf("%d", &size);
    int a[size];
    printf("Input an array: ");
    for(int k = 0; k < size; k++) {
        scanf("%d", &a[k]);
    }
    
    //Finding the 'treasure map'
    int c1 = 0, c2 = 0;
    int m1 = 0, m2 = 0;
    int sum = 0;
    int i1 = 0, i2 = 0;
    for(int j = 0; j < size; j++){
        int k = 0;
        for(k = j; k < size; k++){
            sum += a[k];
            if(sum >= m1){
                c1++;
                m1 = sum;
            }
            else{
                break;
            }
        }
        if(m1 >= m2){
            m2 = m1;
            c2 = c1;
            i1 = j;
            i2 = k;
        }
        sum = 0;
        m1 = 0;
        c1 = 0;
    }
    
    //Printing the output
    printf("\nThe max sum is : %d\n", m2);    
    printf("The sub-array length is : %d\n", c2);    
    
    printf("\nThe sub-array is: ");
    for(int p = i1; p < i2; p++){
        printf("%d ", a[p]);
    }    
    return 0;
}