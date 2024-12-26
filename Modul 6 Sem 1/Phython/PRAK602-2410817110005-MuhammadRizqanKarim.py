# PRAK602-NIM-Nama.py
rooms = int(input("Masukkan jumlah ruangan: "))
zetsu = list(map(int, input("Masukkan jumlah zetsu awal: ").split()))

result = [zetsu[i] * (i + 1) for i in range(rooms)]
print(' '.join(map(str, result)))
