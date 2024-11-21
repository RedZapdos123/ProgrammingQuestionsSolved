#include <stdio.h>

int main(){
	//Taking the matrices input
	int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
	printf("Input the dimensions of the first matrix: ");
	scanf("%d%d", &r1, &c1);
    
    int a[r1][c1];
	printf("\nInput the matrix:\n");
	for(int j = 0; j < r1; j++){
		for(int k = 0; k < c1; k++){
			scanf("%d", &a[j][k]);
		}
	}
    
    printf("Input the dimensions of the second matrix: ");
	scanf("%d%d", &r2, &c2);
    
    int b[r2][c2];
	printf("\nInput the matrix:\n");
	for(int j = 0; j < r2; j++){
		for(int k = 0; k < c2; k++){
			scanf("%d", &b[j][k]);
		}
	}
    
    //Multiplying the matrices
    if(r2 != c1){
       printf("\nCannot multiply the matrices.\n");
       return 0;
    }
       
    int c[r1][c2];
    
    for(int j = 0; j < r1; j++){
        for(int k = 0; k < c2; k++){
            int sum = 0;
            for(int l = 0; l < c1; l++){
                sum += a[j][l] * b[l][k];
            }
            c[j][k] = sum;
        }
    }
     
    //Printing the output
    printf("\nThe result is:\n");
    for(int j = 0; j < r1; j++){
		for(int k = 0; k < c2; k++){
			printf("%d ", c[j][k]);
		}
        printf("\n");
	}
    
    return 0;
}
	
	
	
	
    