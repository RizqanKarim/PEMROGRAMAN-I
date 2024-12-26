while True:
    print("\nPilih program:")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    pilihan = int(input("Masukkan pilihan: "))
    
    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Rizqan Karim")
        break
    elif pilihan < 1 or pilihan > 5:
        print("Input anda salah, silahkan coba lagi")
        continue

    nilai_pertama = float(input("Masukkan nilai pertama: "))
    nilai_kedua = float(input("Masukkan nilai kedua: "))
    
    if pilihan == 1:
        hasil = nilai_pertama + nilai_kedua
        operasi = "Penjumlahan"
    elif pilihan == 2:
        hasil = nilai_pertama - nilai_kedua
        operasi = "Pengurangan"
    elif pilihan == 3:
        hasil = nilai_pertama * nilai_kedua
        operasi = "Perkalian"
    elif pilihan == 4:
        if nilai_kedua == 0:
            print("Pembagian dengan 0 tidak dapat dilakukan.")
            continue
        hasil = nilai_pertama / nilai_kedua
        operasi = "Pembagian"
    
    print(f"Hasil {operasi} antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
