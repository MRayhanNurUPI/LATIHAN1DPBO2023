#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    string nama;
    string nim;
    string prodi;
    string fakultas;

public:
    Mahasiswa(string nama, string nim, string prodi, string fakultas);
    void setNama(string nama);
    void setNIM(string nim);
    void setFakultas(string fakultas);
    void setProdi(string prodi);

    string getNama();
    string getNIM();
    string getProdi();
    string getFakultas();

    ~Mahasiswa();
};