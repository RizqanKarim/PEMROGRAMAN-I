a, b, c = map(int, input("Masukkan tiga angka: ").split()) 
if a > b: a, b = b, a 
if a > c: a, c = c, a 
if b > c: b, c = c, b 
print("Urutan:", a, b, c)