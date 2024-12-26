# PRAK601-NIM-Nama.py
rows, cols = map(int, input("Masukkan jumlah baris dan kolom: ").split())
elements = list(map(int, input("Masukkan elemen matriks: ").split()))

matrix = [elements[i * cols:(i + 1) * cols] for i in range(rows)]
for row in matrix:
    print(' '.join(map(str, row)))
