a = int(input())
matrix = []
b = list(map(int, input().split()))

for i in range (a):
    matrix.append(b[i])
    print(matrix[i] * (i + 1), end =" ")
