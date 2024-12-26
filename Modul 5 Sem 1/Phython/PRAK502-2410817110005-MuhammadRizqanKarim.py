def mutlak(angka):
    return abs(angka)

def hitung(nilai1, nilai2):
    return mutlak(nilai1 - nilai2)

x1, y1, x2, y2 = map(int, input().split())
print(hitung(x1, x2) + hitung(y1, y2))
