n, kelipatan = map(int, input().split())

totalSemua = 0

for i in range(1, n +1):
    totalBaris = 0
    for j in range(i, 0, -1):
        jumlah = j * kelipatan
        totalBaris += jumlah
        print(f"({j} * {kelipatan})", end = "")

        if j > 1:
            print(" + ", end = "")

    totalSemua += totalBaris
    print(f" = {totalBaris}")

print(totalSemua)