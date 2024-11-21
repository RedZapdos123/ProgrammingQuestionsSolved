import sys
#Increased the recursion depth or the stack size
sys.setrecursionlimit(13000)

#The factorial function using memorization
def factorial(n, memo = {}):
    if n in memo:
        return memo[n]
        
    if n == 0 or n == 1:
        return 1
    else:
       memo[n] = n*factorial(n-1, memo)
       return memo[n]

#Taking the numerical input
n = int(input("Input a number: "))

#Printing the output
print('\nThe result is:\n')
print(factorial(n))
print()      
            