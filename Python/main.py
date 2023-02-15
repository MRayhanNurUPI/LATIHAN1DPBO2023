import os
from Menu import Menu

stop  = 0
opsi = 0

while (stop == 0):
    menu = Menu()
    print("=== Latihan 1 Praktikum DPBO - Python ===")
    print("- Muhammad Rayhan Nur (2100192) -")
    print("====================================")
    print("Pilih Menu: ")
    print("1. Tambah Data")
    print("2. Sunting Data")
    print("3. Hapus Data")
    print("4. Tampilkan Data")
    print("5. Keluar")
    print("\n")

    opsi = int(input("=> "))
    os.system("cls")

    if opsi == 1:
        menu.tambahDataMhs()
    elif opsi == 2:
        menu.suntingDataMhs()
    elif opsi == 3:
        menu.hapusDataMhs()
    elif opsi == 4:
        menu.tampilkanDataMhs()
    elif opsi == 5:
        stop = 1
        print("Terima kasih telah menggunakan program Python ini! :)")
        print("- Muhammad Rayhan Nur (2100192)")
    else:
        print("Mohon pillh opsi yang tersedia aja, ya!")
    
    

