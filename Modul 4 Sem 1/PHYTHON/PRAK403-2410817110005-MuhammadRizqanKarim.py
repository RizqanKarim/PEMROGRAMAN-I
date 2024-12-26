angka1 = int(input("Masukkan angka pertama: "))
angka2 = int(input("Masukkan angka kedua: "))

if angka1 > angka2:
    for i in range(angka2, angka1 + 1):
        print(f"{i} {angka1 + angka2 - i}", end=" - " if i != angka1 else "")
else:
    for i in range(angka1, angka2 + 1):
        print(f"{i} {angka1 + angka2 - i}", end=" - " if i != angka2 else "")