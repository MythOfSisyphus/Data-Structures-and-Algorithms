'''
Two Method to reverse a given string.
'''
def ReverseThis(S, index = 0):
    Rev_S = ""
    if(index >= len(S)):
        return Rev_S
    else:
        Rev_S += S[index]
        return ReverseThis(S, index + 1) + Rev_S
    
# Method 2
def ReverseThis_2(S, RS = "", index = 0):
    if(index >= len(S)):
        return RS
    
    else:
        RS += S[len(S)-(index+1)]
        return ReverseThis_2(S, RS, index + 1)


name = ReverseThis("Problem")
print(name)

name_2 = ReverseThis_2("DataAndAlgorithms")
print(name_2)