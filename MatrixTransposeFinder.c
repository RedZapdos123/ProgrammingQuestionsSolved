#include <stdio.h>

int main(){
	//Taking the matrix input
	int r = 0, c = 0;
	printf("Input the number of rows: ");
	scanf("%d", &r);
    printf("Input the number of columns: ");
	scanf("%d", &c);
	
	int a[r][c];
	printf("\nInput the matrix:\n");
	for(int j = 0; j < r; j++){
		for(int k = 0; k < c; k++){
			scanf("%d", &a[j][k]);
		}
	}
    
    //Finding the transpose of the matrix
    int b[c][r];
    for(int j = 0; j < r; j++){
		for(int k = 0; k < c; k++){
			b[k][j] = a[j][k];
		}
	}
    
    //Printing the output
    printf("\nThe transpose of the input matrix is:\n");
    for(int j = 0; j < c; j++){
		for(int k = 0; k < r; k++){
			printf("%d ", b[j][k]);
		}
        printf("\n");
	}
}
	
	
	
	
    