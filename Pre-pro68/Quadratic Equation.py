"""Quadratic Equation"""
def main():
    """input quadratic process"""
    a = int(input(""))
    b = int(input(""))
    c = int(input(""))
    x = (b ** 2) - (4 * a * c)
    d = (-b + (x ** 0.5)) / (2 * a)
    e = (-b - (x ** 0.5)) / (2 * a)
    print(f"x1 = {d:.1f}")
    print(f"x2 = {e:.1f}")
main()
