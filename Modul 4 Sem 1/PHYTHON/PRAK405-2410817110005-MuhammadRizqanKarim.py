n = int(input("Masukkan banyaknya baris: "))
kelipatan = int(input("Masukkan kelipatan: "))

total = 0
for i in range(1, n + 1):
    baris = " + ".join([f"({j} * {kelipatan})" for j in range(1, i + 1)])
    hasil = sum(j * kelipatan for j in range(1, i + 1))
    total += hasil
    print(f"{baris} = {hasil}")
print(total)
