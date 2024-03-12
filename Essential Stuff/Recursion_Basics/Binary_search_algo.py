'''
Binary Search Algorithm using recursion:
'''
def Binary_Search(Arr, x, low, high):
    # necessary condition
    if low > high:
        return False
    
    # defining mid
    mid = (low+high)//2

    if Arr[mid] == x:
        return mid
    
    if Arr[mid] > x:
        Binary_Search(Arr, x, low, mid-1)

    return Binary_Search(Arr, x, mid+1, high)
   

B = [1, 2, 3, 4, 5, 6]
print(Binary_Search(B, 5, 0, 5)) # 4
print(Binary_Search(B, 8, 2, 5)) # False
