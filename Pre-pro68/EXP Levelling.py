"""EXP"""
def main():
    """mine craft"""
    Level = int(input())
    Exp_cap = int(input())
    Exp_Up = int(input())
    total_exp = Exp_cap + Exp_Up
    o_level = Level
    while True:
        exp_req = (Level / 2) * 1000
        if total_exp >= exp_req:
            total_exp -= exp_req
            Level += 1
        else:
            break
    final_exp = (Level / 2) * 1000
    print(f"Level: {Level}")
    print(f"EXP: {int(total_exp)}/{int(final_exp)}")
    print(f"Level +{Level - o_level}")
    
main()
