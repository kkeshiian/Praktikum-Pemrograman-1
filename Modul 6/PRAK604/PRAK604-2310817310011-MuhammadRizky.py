asli = input()
palsu = input()

a = len(asli); b = len(palsu)
x = 0; y = 0

if a == b:
    for i in range (a):
        if asli[i] == palsu[i]:
            if asli[i] == ' ':
                print(" ", end = " ")

            elif asli[i] == palsu[i]:
                print("*", end = " ")
                x += 1
        
        else:
            print("#", end = " ")
            y += 1

    print("\n* = ", x)
    print("* = ", y)

    if x >= y:
        print("\nPesan Asli")
    else:
        print("\nPesan Palsu")

else:
    print("Panjang kalimat berbeda, pesan palsu")
        
