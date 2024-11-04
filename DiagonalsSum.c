#include <stdio.h>

int main(){
	//Taking the matrix input
	int n = 0;
	printf("Input the matrix size: ");
	scanf("%d", &n);
	
	int a[n][n];
	printf("\nInput the matrix:\n");
	for(int j = 0; j < n; j++){
		for(int k = 0; k < n; k++){
			scanf("%d", &a[j][k]);
		}
	}
	
	//Finding the diagonal sums
	int ds1 = 0, ds2 = 0;
	
	for(int i = 0; i < n; i++){
		ds1 += a[i][i];
	}
	int x = 0, y = n-1;
	for(int i = 0; i < n; i++){
		ds2 += a[x][y];
		x++;
		y--;
	}
	
	//Printing the sum of the diagonal elements 
    int dsum = (n%2 == 0) ? (ds1+ds2): (ds1+ds2-a[((n+1)/2)-1][((n+1)/2)-1]);
	printf("\nThe sum of diagonals: %d.\n", dsum);
	return 0;
}
	
	
	
	
