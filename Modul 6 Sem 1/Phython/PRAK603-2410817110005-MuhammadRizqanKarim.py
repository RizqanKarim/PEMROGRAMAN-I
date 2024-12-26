# PRAK603-NIM-Nama.py
n1, n2 = map(int, input("Masukkan n1 dan n2: ").split())
if n1 != n2:
    print("Jumlah tidak sama")
else:
    row1 = list(map(int, input("Masukkan elemen baris pertama: ").split()))
    row2 = list(map(int, input("Masukkan elemen baris kedua: ").split()))
    result = [row1[i] * row2[i] for i in range(n1)]
    print(' '.join(map(str, result)))
