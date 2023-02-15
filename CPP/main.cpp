#include <bits/stdc++.h>
#include "Menu.cpp"

using namespace std;

int main()
{
    int stop = 0, opsi = 0;

    Menu menu;
    while (stop == 0)
    {
        // Perulangan hingga user memilih opsi mengakhiri program
        cout << "=== Latihan 1 Praktikum DPBO - C++ ===" << endl;
        cout << "- Muhammad Rayhan Nur (2100192) -" << endl;
        cout << "====================================" << endl;
        cout << "Pilih Menu: " << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Sunting Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Tampilkan Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "\n";
        cout << "=> ";
        cin >> opsi;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");

        if (opsi == 1)
        {
            // Menambahkan data mahasiswa baru ke dalam list
            menu.tambahDataMhs();
        }
        else if (opsi == 2)
        {
            // Menyunting data mahasiswa dari dalam list
            menu.suntingDataMhs();
        }
        else if (opsi == 3)
        {
            // Menghapus data mahasiswa dari dalam list
            menu.hapusDataMhs();
        }
        else if (opsi == 4)
        {
            // Menampilkan daftar data mahasiswa
            menu.tampilkanDataMhs();
        }
        else if (opsi == 5)
        {
            // Memberhentikan program
            cout << "Terima kasih telah menggunakan program C++ ini! :)\n";
            cout << "- Muhammad Rayhan Nur (2100192)\n";
            stop = 1;
        }
        else
        {
            // Pilihan opsi salah
            cout << "Pilih opsi yang bener kocak!\n";
        }
    }

    return 0;
};