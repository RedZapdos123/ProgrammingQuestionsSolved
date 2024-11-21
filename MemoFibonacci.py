#The function to calculate the (n+1)th fibonacci number
#using memorization

def fibonacci(n, memo = {}):
    if n in memo:
        return memo[n]
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        memo[n] = fibonacci(n-1, memo) + fibonacci(n-2, memo)
        return memo[n]

#Taking input
n = int(input("Input a number: "))

#Error handling
while(True):
    if n < 0:
        print("Invalid Input!\n")
        n = int(input("Input a number: "))
    else:
        break

#Printing the output
print('The', n+1 , 'th Fibonacci number is:\n')
print(fibonacci(n))