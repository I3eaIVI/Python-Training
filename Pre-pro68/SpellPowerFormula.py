'''power'''
def main():
    '''Magic'''
    spell = str(input(""))
    S = float(input(""))
    x = float(input(""))
    m = float(input(""))
    a = float(input(""))
    c = float(input(""))
    T1 = float(input(""))
    T2 = float(input(""))
    r = float(input(""))
    d = float(input(""))
    W = ((S * x * (m ** a)) / (c * ((T1 + 1) ** 0.7)*(1 + T2) * (1 + r / d)))
    print("Spell:",spell)
    print(f"Spell power (W) = {W:.2f}")
main()
