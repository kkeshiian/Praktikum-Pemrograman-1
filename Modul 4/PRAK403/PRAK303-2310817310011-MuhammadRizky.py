a, b = map(int, input().split())

c = a - b
d = b - a

if a > b:
    while a >= b:
        while a >= b - c:
            print(f"{a} {b} - ", end="")
            a -= 1
            b += 1

else:
    while b >= a:
        while a <= b + d:
            print(f"{a} {b} - ", end="")
            a += 1
            b -= 1

print()
