inputAngka = int(input())

for i in range(inputAngka + 1):
    if (i % 2 == 1):
        print(i, end=' ')

print("")
g = inputAngka

while g > 0 :
    if (g % 2 == 0) :
        print(g, end=' ')
        g -= 2
    else : g -= 1