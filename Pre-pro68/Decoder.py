"""Decoder"""
def main():
    """input variable"""
    a = str(input())
    b = str(input())
    c = str(input())
    d = str(input())
    e = int(a + c)
    f = int(d + a)
    g = int(b + d)
    h = int(c + b)
    sum1 = e + f
    sum2 = g + h
    print(f"{sum1}{sum2}")
main()
