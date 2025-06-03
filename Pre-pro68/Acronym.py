"""Acronym"""
def main():
    """input acronym"""
    text = input()
    word1 = ""
    word2 = ""
    word3 = ""
    word = ""
    count = 0
    for char in text:
        if char != " ":
            word += char
        else:
            count += 1
            if count == 1:
                word1 = word
            elif count == 2:
                word2 = word
            word = ""
    word3 = word
    a1 = word1.__getitem__(0).upper()
    a2 = word2.__getitem__(0).upper()
    a3 = word3.__getitem__(0).upper()
    print(a1 + a2 + a3)
main()
