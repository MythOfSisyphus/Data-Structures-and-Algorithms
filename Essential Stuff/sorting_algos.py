'''
-------------------------
Insertion sort algorithm:
-------------------------
In this sorting algorthm we compare the elements to all of its previous elements.
for example to sort 'A' we'll first start with index 1 because here we assume that first element 
is already sorted (why this? you'll get this soon :)) then we'll compare element at index 1 i.e. 5
to all of its previous elements if it is less than those elements then we swap then.
let's see

In this sort we use swapping method partially in every step of while loop, rather we replace 
array[j+1] with array[j] then treat array[j] as dummy variable irrespective of its value,
what do I mean by 'irrespective of its value?' see in while loop everytime we're comapring arr[j] with key.

Just try to do all steps of code with pen and paper you'll understand it.
'''

def insertionsort(array):
    for i in range(1, len(array)):
        key = array[i]
        j = i - 1

        # try to understand next three lines 
        while j>=0 and array[j]>key:
            array[j+1] = array[j]
            j = j-1

        array[j+1] = key

# Execution
A = [11, 5, 1, 12, 0]
insertionsort(A)
print(A)


'''
-------------------------------------------------------------------
Shell Sort:
-----------
Shell sort is a generalization of Insetion sort.
'''