ordo = int(input(""))
matrixA = []; matrixB = []; result = []

print("Matriks A : ")
for i in range(ordo):
    k = list(map(int, input().split()))
    matrixA.append(k)

print("Matriks B : ")
for i in range(ordo):
    k = list(map(int, input().split()))
    matrixB.append(k)

for i in range(ordo):
    result.append([])
    for j in range(ordo):
        n = 0
        for k in range(ordo):
            n += matrixA[i][k] * matrixB[k][j]
        result[i].append(n)

print("Matriks AXB:")
for x in result:
    for k in x:
        print(k, end=" ")
    print()
