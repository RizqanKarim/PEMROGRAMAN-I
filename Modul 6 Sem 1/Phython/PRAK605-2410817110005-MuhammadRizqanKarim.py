# PRAK605-NIM-Nama.py
n = int(input("Masukkan ordo matriks: "))
matrix_a = [list(map(int, input().split())) for _ in range(n)]
matrix_b = [list(map(int, input().split())) for _ in range(n)]

result = [[sum(matrix_a[i][k] * matrix_b[k][j] for k in range(n)) for j in range(n)] for i in range(n)]
print("Matriks AXB")
for row in result:
    print(' '.join(map(str, row)))