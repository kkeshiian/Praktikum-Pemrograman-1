phi = 22/7.0

inputUser = input("1 untuk input horizontal, 2 untuk input vertikal : \n")

if (inputUser == "1"):
    radiusBejana, heightBejana = input().split()
    radiusBejana, heightBejana = map(float, (radiusBejana, heightBejana))

    volumeBejana = phi * (radiusBejana * radiusBejana) * heightBejana

    luasPermukaanBejana = 2 * phi * radiusBejana * (radiusBejana + heightBejana)

    kelilingBejana = 2 * phi * radiusBejana
    print("Volume = %.2f"% volumeBejana)
    print("Luas = %.2f"% luasPermukaanBejana)
    print("Keliling = %.2f"% kelilingBejana)

elif (inputUser == "2"):
    radiusBejana = input()
    heightBejana = input()
    radiusBejana, heightBejana = map(float, (radiusBejana, heightBejana))

    volumeBejana = phi * (radiusBejana * radiusBejana) * heightBejana

    luasPermukaanBejana = 2 * phi * radiusBejana * (radiusBejana + heightBejana)

    kelilingBejana = 2 * phi * radiusBejana

    print("Volume = %.2f"% volumeBejana)
    print("Luas = %.2f"% luasPermukaanBejana)
    print("Keliling = %.2f"% kelilingBejana)
else:
    print("error")
