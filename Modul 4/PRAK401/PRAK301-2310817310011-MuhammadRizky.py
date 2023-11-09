a, s = input().split()
aInt = int(a)
for i in range (1,51):
    if (i % aInt == 0):
        print(f"{s} ", end = "")
    else:
        print(f"{i} ", end = "")
    