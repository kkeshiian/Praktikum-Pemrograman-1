def reverse(n):
    balik = 0
    while n != 0:
       angkaBelakang = n % 10
       balik = balik * 10 + angkaBelakang
       n = n // 10
    return balik

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))
