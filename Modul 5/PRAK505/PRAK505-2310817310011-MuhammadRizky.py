def biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    print("Perkenalkan Nama Saya : ", Namaku)
    print("Umur Saya : ", tahun_sekarang - int(tahunLahir))
    print("Saya Adalah Angkatan : ", tahun_sekarang)
    print("Asal Saya Dari : ", Asal)

tahunLahir = input()
Namaku = input()
Asal = input()
biodata(tahunLahir, Namaku, Asal)
