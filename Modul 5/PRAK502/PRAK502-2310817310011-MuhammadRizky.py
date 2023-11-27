def hitung (nilai1, nilai2):
    hasil = nilai1 - nilai2
    return hasil

def mutlak (angka):
    hasilMutlak = abs(angka)
    return hasilMutlak

a,c,b,d = map(int, input().split())
Hasil = hitung(a,b) + hitung(c,d)
print(mutlak(Hasil))