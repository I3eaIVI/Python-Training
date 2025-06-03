'''time'''
def main():
    '''space'''
    n = int(input(""))
    h = n // 3600
    mm = (n % 3600) // 60
    ss = n % 60
    print(f"{h}:{mm:>02}:{ss:>02}")
main()
