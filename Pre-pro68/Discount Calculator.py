'''discount'''
def main():
    '''Calculator'''
    product = str(input(""))
    price = float(input(""))
    sale = price - (price * 0.2)
    print(f"---------------Promotion {product} ---------------")
    print(f"{product} is discounted from the original price of {price} baht to {sale} baht")
main()
