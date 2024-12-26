def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir
    print(f"Perkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")

tahunLahir = int(input())
nama = input()
asal = input()
Biodata(tahunLahir, nama, asal)
