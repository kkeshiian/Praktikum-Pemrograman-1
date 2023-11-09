while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    inputPilihan = float(input("Masukkan Pilihan : "))

    if inputPilihan == 5:
            print("Terimakasih, telah menggunakan kalkulator Muhammad Rizky\n")
            break
    elif inputPilihan > 5 or inputPilihan <= 0:
           print("Input anda salah, silahkan coba lagi")
    else:
           inputPertama =float(input("Masukkan nilai pertama : "))
           inputKedua = float(input("Masukkan nilai kedua : "))

           if inputPilihan == 1:
                  hasil = inputPertama + inputKedua
                  print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f" % (inputPertama, inputKedua,  hasil))

           elif inputPilihan == 2:
                  hasil = inputPertama - inputKedua
                  print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f" % (inputPertama, inputKedua,  hasil))

           elif inputPilihan == 3:
                  hasil = inputPertama * inputKedua
                  print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f" % (inputPertama, inputKedua,  hasil))

           elif inputPilihan == 4:
                  hasil = inputPertama / inputKedua
                  print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f" % (inputPertama, inputKedua,  hasil))