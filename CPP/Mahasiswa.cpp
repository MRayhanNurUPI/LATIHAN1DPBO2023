#include "Mahasiswa.h"

Mahasiswa::Mahasiswa(string nama, string nim, string prodi, string fakultas)
{
    this->nama = nama;
    this->nim = nim;
    this->prodi = prodi;
    this->fakultas = fakultas;
}

void Mahasiswa::setNama(string nama)
{
    this->nama = nama;
}

void Mahasiswa::setNIM(string nim)
{
    this->nim = nim;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}
void Mahasiswa::setProdi(string prodi)
{
    this->prodi = prodi;
}

string Mahasiswa::getNama() { return this->nama; }
string Mahasiswa::getNIM() { return this->nim; }
string Mahasiswa::getProdi() { return this->prodi; }
string Mahasiswa::getFakultas() { return this->fakultas; }

Mahasiswa::~Mahasiswa() {}