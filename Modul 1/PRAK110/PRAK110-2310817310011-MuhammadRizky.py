import math
alasSegitiga = 5; tinggiSegitiga = 12; sisiMiringSegitiga = int(math.sqrt(pow(alasSegitiga, 2) + pow(tinggiSegitiga, 2)))

print("Diketahui :\nAlas = ", alasSegitiga, "cm", "\nTinggi = ", tinggiSegitiga, "cm", "\n\nJawab :\nSisi A = ", tinggiSegitiga, "cm", "\nSisi B = ", sisiMiringSegitiga, "cm", "\nSisi C = ", alasSegitiga, "cm", "\nKeliling =", alasSegitiga + tinggiSegitiga + sisiMiringSegitiga, "cm", "\nLuas = ", int((alasSegitiga * tinggiSegitiga)/2), "cm")
