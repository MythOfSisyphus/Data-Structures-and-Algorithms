# function for getting prime factors of n
def prime_fact(n):
    factors = []
    x = 2
    while x*x <= n:
        if n % x == 0:
            factors.append(x)
            n //= x
        else:
            x += 1
    if n > 1: factors.append(n)
    return factors
# -----------------------------------------

# function for counting multiplicity of n in a list
def multiplicity(Arr):
    count = {}
    for i in Arr:
        if not i in count:
            count[i] = 1
        else:
            count[i] += 1
    return count

# x = prime_fact(40320)
# print(x)
# print(multiplicity(x))

def phi(n):
    prime_factors = prime_fact(n)
    # print(prime_factors)
    y = multiplicity(prime_factors)
    # print(y)
    num = 1
    for i in y:
        num *= (pow(i, y[i]) - pow(i, y[i]-1))
    return num

print(phi(200))
# print(phi(pow(2, 20) - 1))


def clever_phi(n):
    result = n
    x = 2
    while x*x <= n:
        if n%x == 0:
            n /= x
            result -= result/x
        else:
            x += 1
    if n>1: result -= result/n
    return result

# print(clever_phi(200))