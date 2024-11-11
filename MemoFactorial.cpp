//This program calculate the 21! using memorization and recursion. 
//21! is the largest factorial to be stored in normal C++

#include <iostream>
#include <algorithm>

using namespace std;

//The memory array
unsigned long long int memo[22];

//Inutilizing the array
void initializeMemo(){
    fill(memo, memo + 22, -1);
}    

//Calculating the factorial
unsigned long long int factorial(int n){
    if (memo[n] != -1) {
        return memo[n];
    }
    if (n < 2) {
        return 1;
    } else {
        memo[n] = n * factorial(n - 1);
        return memo[n];
    }
}           

//The driver function
int main() {
    initializeMemo();
    
    //Printing the largest possible number
    cout << "The factorial of 21 is "<< factorial(21);
    return 0;
}