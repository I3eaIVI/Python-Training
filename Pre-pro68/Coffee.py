'''coffee'''
def main():
    '''input'''
    name = str(input(""))
    pro1 = float(input(""))
    pro2 = float(input(""))
    pro3 = float(input(""))
    add_pro = pro1 + pro2 + pro3
    sum_pro = add_pro * (1 - 0.075)
    print(f"{name}, total before discount is {add_pro} THB")
    print(f"After 7.5% discount, the amount to pay is {round(sum_pro, 2)} THB")
main()
