from Mahasiswa import Mahasiswa

class Menu:
    __listMahasiswa = []

    __tempNama = ""
    __tempNIM = ""
    __tempProdi = ""
    __tempFakultas = ""

    def tambahDataMhs(self):
        print("= Menambahkan Data Mahasiswa Baru =\n")
        self.__tempNama = input("Nama: ")
        self.__tempNIM = input("NIM: ")
        self.__tempProdi = input("Program Studi: ")
        self.__tempFakultas = input("Fakultas: ")

        mhsBaru = Mahasiswa(self.__tempNama, self.__tempNIM,
                            self.__tempProdi, self.__tempFakultas)
        self.__listMahasiswa.append(mhsBaru)

        print("\nBerhasil menambahkan data ke dalam list!")

    def suntingDataMhs(self):
        if (len(self.__listMahasiswa) == 0):
            print("Daftar Mahasiswa Kosong.")
        else:
            print("= Ubah Data Mahasiswa =")
            filter = input("Masukkan NIM atau Nama Mahasiswa yang ingin diubah datanya: ")

            ketemu = 0
            it = 0
            while (it < len(self.__listMahasiswa) and ketemu != 1):
                if (self.__listMahasiswa[it].getNama() == filter or self.__listMahasiswa[it].getNIM() == filter):
                    ketemu = 1
                    print("Ketemu nih datanya bos:")
                    print("=> " + self.__listMahasiswa[it].getNIM() + " - " + self.__listMahasiswa[it].getNama() + " - " + self.__listMahasiswa[it].getProdi() + " (" + self.__listMahasiswa[it].getFakultas() + ")")
                    print("\n- Silakan Ubah Data -\n")
                    self.__tempNama = input("Nama: ")
                    self.__tempNIM = input("NIM: ")
                    self.__tempProdi = input("Program Studi: ")
                    self.__tempFakultas = input("Fakultas: ")

                    self.__listMahasiswa[it].setNama(self.__tempNama)
                    self.__listMahasiswa[it].setNIM(self.__tempNIM)
                    self.__listMahasiswa[it].setProdi(self.__tempProdi)
                    self.__listMahasiswa[it].setFakultas(self.__tempFakultas)

                    print("\nBerhasil mengubah data!")
                    print("Sesudah diubah -> " + self.__listMahasiswa[it].getNIM() + " - " + self.__listMahasiswa[it].getNama() + " - " + self.__listMahasiswa[it].getProdi() + " (" + self.__listMahasiswa[it].getFakultas() + ")")
                else:
                    it = it + 1

            if ketemu == 0:
                print("Mohon maaf data yang dicari tidak ada :(\n")

    def hapusDataMhs(self):
        if (len(self.__listMahasiswa) == 0):
            print("Daftar Mahasiswa Kosong.")
        else:
            print("= Hapus Data Mahasiswa =")
            deleted = input("Masukkan NIM atau Nama Mahasiswa yang ingin dihapus: ")

            ketemu = 0
            it = 0
            while (it < len(self.__listMahasiswa) and ketemu != 1):
                if (self.__listMahasiswa[it].getNama() == deleted or self.__listMahasiswa[it].getNIM() == deleted):
                    ketemu = 1

                    self.__listMahasiswa.pop(it)
                    print("\nBerhasil menghapus data!\n")
                else:
                    it = it + 1

            if ketemu == 0:
                print("Mohon maaf data yang dicari tidak ada :(\n")

    def tampilkanDataMhs(self):
        if (len(self.__listMahasiswa) == 0):
            print("Daftar Mahasiswa Kosong.")
        else:
            print("= Daftar Mahasiswa =")
            it = 0
            while (it < len(self.__listMahasiswa)):
                    print(str((it+1)) + ") " + self.__listMahasiswa[it].getNIM() + " - " + self.__listMahasiswa[it].getNama() + " - " + self.__listMahasiswa[it].getProdi() + " (" + self.__listMahasiswa[it].getFakultas() + ")")
                    it = it + 1
            
            print("")
