'''
Binary Search Algorithm
To learn about this algorithm please visit:
https://www.programiz.com/dsa/binary-search
'''

Arr = [-1, 0, 4, 8, 9, 3]
Arr.sort()

# Iterative approach
def BSearch(A, x, low, high):
    while low <= high :
        mid = low + (high - low)//2

        if A[mid] == x:
            return mid
        elif A[mid] < x:
            low = mid + 1
        else:
            high = mid - 1

    return -1

result = BSearch(Arr, 7, 0, 5)
print(result)