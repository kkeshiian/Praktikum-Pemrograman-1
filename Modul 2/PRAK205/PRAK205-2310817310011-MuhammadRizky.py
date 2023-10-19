import math

inputUser = input("1 untuk input horizontal, 2 untuk input vertikal : \n")

if (inputUser == "1"):
    tinggiSegitiga, sisiMiringSegitiga = input().split()
    tinggiSegitiga, sisiMiringSegitiga = map(float,(tinggiSegitiga, sisiMiringSegitiga))

    alasSegitiga = math.sqrt((sisiMiringSegitiga * sisiMiringSegitiga) - (tinggiSegitiga * tinggiSegitiga))
    kelilingSegitiga = tinggiSegitiga + sisiMiringSegitiga + alasSegitiga
    luasSegitiga = (alasSegitiga * tinggiSegitiga)/2

    print("Alas = %.0f cm" % alasSegitiga)
    print("Tinggi = %.0f cm" % tinggiSegitiga)
    print("Keliling= %.0f cm" % kelilingSegitiga)
    print("Luas = %.0f cm^2" % luasSegitiga)

elif (inputUser == "2"):
    tinggiSegitiga = input()
    sisiMiringSegitiga = input()
    tinggiSegitiga, sisiMiringSegitiga = map(float,(tinggiSegitiga, sisiMiringSegitiga))

    alasSegitiga = math.sqrt((sisiMiringSegitiga * sisiMiringSegitiga) - (tinggiSegitiga * tinggiSegitiga))
    kelilingSegitiga = tinggiSegitiga + sisiMiringSegitiga + alasSegitiga
    luasSegitiga = (alasSegitiga * tinggiSegitiga)/2

    print("Alas = %.0f cm" % alasSegitiga)
    print("Tinggi = %.0f cm" % tinggiSegitiga)
    print("Keliling= %.0f cm" % kelilingSegitiga)
    print("Luas = %.0f cm^2" % luasSegitiga)





