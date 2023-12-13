a, b = map(int, input().split())
matrixAtas = []; matrixBawah = []

if a == b:
    x = list(map(int, input().split()))
    y = list(map(int, input().split()))

    for i in range(a):
        matrixAtas.append(x[i])

    for i in range(b):
        matrixBawah.append(y[i])

    for i in range(b):
        hasil = matrixAtas[i] * matrixBawah[i]
        print(hasil, end = " ")

else:
    print("Jumlah tidak sama")



