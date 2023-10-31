angkaInput = int(input())

if (angkaInput < 0 or angkaInput > 99):
    print("Anda Menginput Melebihi Limit Bilangan")
elif (angkaInput == 0):
    print("Nol")
elif (angkaInput > 0 and angkaInput < 10):
    print("Satuan")
elif (angkaInput > 10 and angkaInput < 20):
    print("Belasan")
elif (angkaInput >= 20 and angkaInput < 99):
    print("Puluhan")
elif (angkaInput == 10):
    print("Puluhan")