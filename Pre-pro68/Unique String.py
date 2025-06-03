"""Grade"""
def main():
    """Input grade"""
    grade = int(input())
    if 80 <= grade <= 100 :
        print("Grade: A")
    elif 75 <= grade <= 79 :
        print("Grade: B+")
    elif 70 <= grade <= 74 :
        print("Grade: B")
    elif 65 <= grade <= 69 :
        print("Grade: C+")
    elif 60 <= grade <= 64 :
        print("Grade: C")
    elif 55 <= grade <= 59 :
        print("Grade: D+")
    elif 50 <= grade <= 54 :
        print("Grade: D")
    elif 0 <= grade <= 49 :
        print("Grade: F")
    else :
        print("Grade: Incorrect score")
main()
