/*This is the second computational project of the course 'Linear Algebra', which aims to find
the solutions to a system of linear equations using Cramer's rule.
*/

#include <bits/stdc++.h>

using namespace std;

//Calculating the determinant of a matrix using Laplace expansion and recurison.

double determinant(vector<vector<double>> matrix, int n){
    double det = 0;
    
    //The Base case for calculating the determinant of a 2x2 matrix.
	
    if(n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    
    vector<vector<double>> submatrix(n, vector<double>(n));

    for(int x = 0; x < n; x++) {
        // Creating the submatrix by excluding the first row and the current column.
        for (int i = 1; i < n; i++) {
            int si = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) 
					continue;
                submatrix[i - 1][si++] = matrix[i][j];
            }
        }
        
        //Calculating the cofactor and adding it to the determinant.
		
        double subdet = determinant(submatrix, n - 1);
        if(x%2 == 0)
			det += matrix[0][x]*subdet;
		else
			det -= matrix[0][x]*subdet;
    }

    return det;
}

//Replacing the ith column with the column matrix (B) of constants and returning the matrix.

vector<vector<double>> replace(vector<vector<double>> matrix, vector<double> B, int column){
    for(int i = 0; i < sizeof(matrix)/sizeof(matrix[0][0]); i++){
        matrix[i][column] = B[i];
    }
    return matrix;
}

int main(){
    int n;
	//Taking input of the number of variables in the system of the linear equations.
    cout << "Input the number of variables: ";
    cin >> n;
	
	//The Coefficient matrix
    vector<vector<double>> A(n, vector<double>(n));
	
	//The constants' matrix
    vector<double> B(n);

    cout << "Input the coefficient square matrix A:" << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Input the constants column matrix B:" << '\n';
    for(int i = 0; i < n; i++){
        cin >> B[i];
    }

    //Calculating the determinant of matrix A.
	
    double detA = determinant(A, n);

    if(detA == 0){
        cout << "This system of linear equations does not have an unique solution because determinant is zero." << '\n';
        return 0;
    }

    cout << "The Determinant of the matrix A: " << detA << '\n';
	
	//The array for storing the solutions.
	
    vector<double> solution(n);

    //Calculating each variable's value using Cramer's Rule.
	
    for(int i = 0; i < n; i++){
        vector<vector<double>> Ai = replace(A, B, i);
        double detAi = determinant(Ai, n);
        solution[i] = detAi / detA;
        cout << "x" << i + 1 << " = " << solution[i] << '\n';
    }

    return 0;
}
