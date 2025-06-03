'''store'''
def main():
    '''shop'''
    name = str(input(""))
    many = int(input(""))
    price = float(input(""))
    price_process = many * price
    print("Thank you",name)
    print(f"Price per item: {price:.2f} baht")
    print(f"Total amount: {price_process:,.2f} baht")
main()
