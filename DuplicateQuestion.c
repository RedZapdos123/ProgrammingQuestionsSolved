#include<stdio.h>

int main()
{
    //Taking input
    int s = 0;
    printf("Input the array size: ");
    scanf("%d", &s);
    int a[s];
    printf("Input an array: ");
    for(int k = 0; k < s; k++) {
        scanf("%d", &a[k]);
    }

    //Removing the duplicates
    int i = -1;
    for(int k = 0; k < s; k++) {
        if(a[k] == 0 & i == -1)
            i = k;
        for(int j = k+1; j < s; j++) {
            if(a[k] == a[j]) {
                a[j] = 0;
            }
        }
    }

    //Printing the new array
    printf("\nThe new array is: ");
    for(int k = 0; k < s; k++) {
        if(a[k] != 0 && i != k)
            printf("%d ", a[k]);
        else if(i == k)
            printf("%d ", a[k]);
    }
    printf("\n");
    return 0;
}