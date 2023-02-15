#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

using namespace std;

class Menu
{
private:
    list<Mahasiswa> listMahasiswa;
    string tempNama, tempNIM, tempProdi, tempFakultas;

public:
    void tambahDataMhs()
    {
        cout << "= Menambahkan Data Mahasiswa Baru =\n";

        cout << "Nama: ";
        getline(cin, tempNama);

        cout << "NIM: ";
        getline(cin, tempNIM);

        cout << "Program Studi: ";
        getline(cin, tempProdi);

        cout << "Fakultas: ";
        getline(cin, tempFakultas);

        Mahasiswa mhsBaru(tempNama, tempNIM, tempProdi, tempFakultas);
        listMahasiswa.push_back(mhsBaru);

        cout << "\nBerhasil menambahkan data ke dalam list!" << endl;
    }

    void suntingDataMhs()
    {
        string filter;
        if (listMahasiswa.empty())
        {
            cout << "Daftar Mahasiswa Kosong." << endl;
        }
        else
        {
            cout << "= Ubah Data Mahasiswa =\n";

            cout << "Masukkan NIM atau Nama Mahasiswa yang ingin diubah datanya: " << filter << endl;
            getline(cin, filter);

            int ketemu = 0;
            list<Mahasiswa>::iterator it = listMahasiswa.begin();
            while (it != listMahasiswa.end() && ketemu != 1)
            {
                if ((it->getNIM().compare(filter) == 0) || (it->getNama().compare(filter) == 0))
                {
                    ketemu = 1;
                    cout << "Ketemu nih datanya:\n";
                    cout << "=> " << it->getNIM() << " - " << it->getNama() << " - " << it->getProdi() << " (" << it->getFakultas() << ")" << endl;

                    cout << "\n- Silakan ubah data -\n";
                    cout << "Nama: ";
                    getline(cin, tempNama);

                    cout << "NIM: ";
                    getline(cin, tempNIM);

                    cout << "Program Studi: ";
                    getline(cin, tempProdi);

                    cout << "Fakultas: ";
                    getline(cin, tempFakultas);

                    it->setNama(tempNama);
                    it->setNIM(tempNIM);
                    it->setProdi(tempProdi);
                    it->setFakultas(tempFakultas);

                    cout << "\nBerhasil mengubah data!" << endl;
                    cout << "=> " << it->getNIM() << " - " << it->getNama() << " - " << it->getProdi() << " (" << it->getFakultas() << ")" << endl;
                }
                else
                {
                    it++;
                }
            }

            if (ketemu == 0)
            {
                cout << "Mohon maaf data yang dicari tidak ada\n\n";
            }
        }
    }

    void hapusDataMhs()
    {
        string deleted;
        if (listMahasiswa.empty())
        {
            cout << "Daftar Mahasiswa Kosong." << endl;
        }
        else
        {
            cout << "= Hapus Data Mahasiswa =\n";

            cout << "Masukkan NIM atau Nama Mahasiswa yang ingin dihapus datanya: " << deleted << endl;
            getline(cin, deleted);

            int ketemu = 0;
            list<Mahasiswa>::iterator it = listMahasiswa.begin();
            while (it != listMahasiswa.end() && ketemu != 1)
            {
                if ((it->getNIM().compare(deleted) == 0) || (it->getNama().compare(deleted) == 0))
                {
                    ketemu = 1;
                    listMahasiswa.erase(it);
                    cout << "Berhasil menghapus data!\n";
                }
                else
                {
                    it++;
                }
            }

            if (ketemu == 0)
            {
                cout << "Mohon maaf data yang dicari tidak ada\n\n";
            }
        }
    }

    void tampilkanDataMhs()
    {
        if (listMahasiswa.empty())
        {
            cout << "Daftar Mahasiswa Kosong." << endl;
        }
        else
        {
            cout << " == Daftar Mahasiswa ==" << endl;

            int counter = 0;
            for (list<Mahasiswa>::iterator it = listMahasiswa.begin(); it != listMahasiswa.end(); it++)
            {
                cout << (counter + 1) << ") " << it->getNIM() << " - " << it->getNama() << " - " << it->getProdi() << " (" << it->getFakultas() << ")" << endl;
                counter++;
            }
            cout << "\n";
        }
    }
};