def decipher(kata, kode):
    if len(kata) != len(kode):
        print("Panjang kalimat berbeda, pesan palsu")
        return

    bintang = 0
    pagar = 0

    for i in range(len(kata)):
        if kata[i] == kode[i] and kata[i] != ' ':
            print("*", end="")
            bintang += 1
        elif kata[i] != kode[i] and (kata[i] != ' ' or kode[i] != ' '):
            print("#", end="")
            pagar += 1
        else:
            print(" ", end="")

    print(f"\n* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

if __name__ == "__main__":
    kata = input("Masukkan kata: ")
    kode = input("Masukkan kode: ")

    decipher(kata, kode)