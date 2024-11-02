/*The first computational project of the course 'Linear Algebra' to calculate the solutions
of a system of linear equation using the Gauss-Jordan Elimination method.
*/
#include <bits/stdc++.h>

using namespace std;

//A function that displays the elements of the matrix
void display(vector<vector<double>> &matrix, int n){
    for (int r = 0; r < n; r++) {
        for (int c = 0; c <= n; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << '\n';
    }
}

//A function that swaps rows of a matrix
void swapper(vector<vector<double>> &matrix, int r1, int r2, int n){
    for (int c = 0; c <= n; c++) {
        swap(matrix[r1][c], matrix[r2][c]);
    }
}

//A function to perform Gauss-Jordan Elimination method on the augmented matrix
void GJMethod(vector<vector<double>> &matrix, int n){
    for (int r = 0; r < n; r++) {
        //Determining the maximum element in the current column for pivoting
        int max = r;
        for (int k = r + 1; k < n; k++){
            if (fabs(matrix[k][r]) > fabs(matrix[max][r])){
                max = k;
            }
        }

        //Swapping rows if the current row is not the pivot
        if (r != max){
            swapper(matrix, r, max, n);
        }

        //Checking if the pivot element is zero
        if (fabs(matrix[r][r]) == 0){
            cout << "There's no unique solution for this system as it could be singular or inconsistent.\n";
            return;
        }

        //Divide all the elements of the pivot row by the pivot element
        double p = matrix[r][r];
        for (int v = 0; v <= n; v++){
            matrix[r][v] /= p;
        }

        //Make the pivot elements' column, other elements zero
        for (int k = 0; k < n; k++){
            if (k != r) {
                double f = matrix[k][r];
                for (int j = 0; j <= n; j++) {
                    matrix[k][j] -= f * matrix[r][j];
                }
            }
        }
    }
}

int main() {
    int n = 0;

    //Taking input of the number of variables
    cout << "Input the number of variables: ";
    cin >> n;

    //Taking input of the augmented matrix
    vector<vector<double>> matrix(n, vector<double>(n + 1));

    cout << "Input the augmented matrix: \n";
    for (int r = 0; r < n; r++){
        for (int c = 0; c <= n; c++){
            cin >> matrix[r][c];
        }
    }

    //Gauss-Jordan Elimination Method
    GJMethod(matrix, n);

    //Display the matrix in Row Reduced Echelon form
    cout << "The reduced row echelon form of the matrix: \n";
    display(matrix, n);

    //Outputing the solution
    cout << "The solution(s) is/are: \n";
    for (int r = 0; r < n; r++){
        cout << "x" << r + 1 << " = " << matrix[r][n] << '\n';
    }
    return 0;
}

		
		
		
		