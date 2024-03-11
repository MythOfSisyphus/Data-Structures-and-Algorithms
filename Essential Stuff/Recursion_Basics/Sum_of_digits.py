'''
Write a recursive function to find the sum of digits of a positive integer.
It is very basic exercise, I don't need to explain anything.
'''
# iterative approach
def DigitSum(n):
    sum = 0
    while(n!=0):
        sum += n%10
        n //= 10
    return sum

# ----------------------------------------------------
# Recursive approach
def MethodTwo(n):
    if n==0:
        return 0
    return (n%10 + MethodTwo(int(n//10)))

num = MethodTwo(1234)
print(num)
