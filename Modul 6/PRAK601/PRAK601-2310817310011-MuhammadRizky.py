a, b = map(int,(input().split()))
matrix = []

x = 0
isi = list(map(int, input().split()))
print("\n")
for i in range(a):          
    matrix.append(isi[x : x + b])
    x = x + b
for a in matrix:
    for isi in a:
        print(isi, end = " ")
    print()