#include <stdio.h>

int main(){
	//Taking the matrix input
	int m = 0, n = 0;
	printf("Input the matrix size: ");
	scanf("%d", &m);
	
	int a[m][m];
	printf("\nInput the matrix:\n");
	for(int j = 0; j < m; j++){
		for(int k = 0; k < m; k++){
			scanf("%d", &a[j][k]);
		}
	}
    //Taking the input of the filter matrix
    printf("\nInput the matrix size: ");
	scanf("%d", &n);
	
	int f[n][n];
	printf("\nInput the filter matrix in 0s and 1s:\n");
	for(int j = 0; j < n; j++){
		for(int k = 0; k < n; k++){
			scanf("%d", &f[j][k]);
		}
	}
    
    //Creating the filtered matrix
    int b[m][m], sum = 0;
    
    //Filtering the matrix
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            for(int u = -1*(n/2); u <= n/2; u++){
                for(int v = -1*(n/2); v <= n/2; v++){
                    if((i+u) < 0 || (j+v) < 0 || (j+v) >= m|| (i+u) >= m){
                        sum += 0;
                    }
                    else{
                        sum += a[i+u][j+v] * f[u+(n/2)][v+(n/2)];
                    }
                }    
            }
            b[i][j] = sum;
            sum = 0;
        }
    }                
    
    //Printing the output
    printf("\nThe filtered matrix is:\n");
    for(int j = 0; j < m; j++){
		for(int k = 0; k < m; k++){
			printf("%d ", b[j][k]);
		}
        printf("\n");
	}
}
	
	
	
	
    