//Name: Mridankan Mandal 
//Roll Number: IIB2024017

#include <stdio.h>

int main() {
    //Taking Matrix input
    int n;
    printf("Input the Square Matrix Size: ");
    scanf("%d", &n);

    int a[n][n];
    printf("\nInput the Matrix:\n");
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            scanf("%d", &a[j][k]);
        }
    }
    
    //Printing the spiral transversal of the matrix
    printf("\nThe spiral transversal is:\n");
    for (int i = 0; i < n / 2 + n % 2; i++) {
        for (int j = i; j < n - i; j++) {
            printf("%d ", a[i][j]);
        }
        
        for (int j = i + 1; j < n - i; j++) {
            printf("%d ", a[j][n - i - 1]);
        }
        for (int j = n - i - 2; j >= i; j--) {
            printf("%d ", a[n - i - 1][j]);
        }
        for (int j = n - i - 2; j > i; j--) {
            printf("%d ", a[j][i]);
        }
    }
    return 0;
}