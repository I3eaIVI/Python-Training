"""Prime Number"""
def is_prime(n):
    """variable number"""
    if n <= 1:
        return False
    if n == 2:
        return True
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True
def main():
    """input number"""
    a = int(input())
    b = int(input())
    if a > b:
        temp = a
        a = b
        b = temp
    i = a
    count = 0
    result = ""
    first = True
    while i <= b:
        if is_prime(i):
            count += 1
            if first:
                result = str(i)
                first = False
            else:
                result = result + " ," + str(i)
        i += 1
    if count == 0:
        print(f"There haven't any prime number in the interval [{a},{b}].")
    else:
        print(result)
    print(count)
main()
