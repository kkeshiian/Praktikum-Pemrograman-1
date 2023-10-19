inputUser = input("1 untuk input horizontal, 2 untuk input vertikal : \n")

if (inputUser == "1"):
    a, b, i, j, x, y = input().split()
    a, b, i, j, x, y = map(float, (a, b, i, j, x, y))
    hasilHitung = (a - b) * i / j - (x + y)
    print("%.3f" % hasilHitung)
elif (inputUser == "2"):
    a, b = input().split()
    i, j = input().split()
    x, y = input().split()
    a, b, i, j, x, y = map(float, (a, b, i, j, x, y))
    hasilHitung = (a - b) * i / j - (x + y)
    print("%.3f" % hasilHitung)
else:
    print("Masukkan input yang benar")

