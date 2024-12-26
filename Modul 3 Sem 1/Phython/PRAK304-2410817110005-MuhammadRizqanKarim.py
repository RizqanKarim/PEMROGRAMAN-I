bil = int(input("Masukkan bilangan (0-99): ")) 
if bil < 0 or bil > 99: 
    print("Anda Menginput Melebihi Limit Bilangan") 
elif bil == 0: 
    print("Nol") 
elif bil < 10: 
    print("Satuan") 
elif 10 < bil < 20: 
    print("Belasan") 
elif 10 <= bil < 100:  
    print("Puluhan")