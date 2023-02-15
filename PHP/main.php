<?php
require "Mahasiswa.php";

echo "=== Latihan 1 Praktikum DPBO - PHP ===";
echo "</br>";
echo "- Muhammad Rayhan Nur (2100192) -";
echo "</br>";
echo "</br>";

echo "====================================================";
echo "</br>";
echo "</br>";


$listMahasiswa = array();

$mahasiswa1 = new Mahasiswa();
$mahasiswa1->setNama("Muhammad Rayhan Nur");
$mahasiswa1->setNIM("2100192");
$mahasiswa1->setProdi("Ilmu Komputer");
$mahasiswa1->setFakultas("FPMIPA");

$listMahasiswa[] = $mahasiswa1;

$mahasiswa2 = new Mahasiswa("Mahasiswa 2", "2", "Ilmu Komedi", "FPKOCAK");
$listMahasiswa[] = $mahasiswa2;

echo "Sebelum Sunting Data: </br>";
$counter = 0;
foreach ($listMahasiswa as $mhs) {
    echo ($counter + 1) . ') ' . $mhs->getNIM() . ' - ' . $mhs->getNama() . ' - ' . $mhs->getProdi() . ' (' . $mhs->getFakultas() . ') </br>';
    $counter++;
}

echo "</br>";

$mahasiswa2->setNama("Nama Baru Mhs2");
$mahasiswa2->setNIM("NIM Baru Mhs2");
$mahasiswa2->setProdi("ProdiBaru Mhs2");
$mahasiswa2->setFakultas("FPBARU");

echo "Sesudah Sunting Data: </br>";
$counter = 0;
foreach ($listMahasiswa as $mhs) {
    echo ($counter + 1) . ') ' . $mhs->getNIM() . ' - ' . $mhs->getNama() . ' - ' . $mhs->getProdi() . ' (' . $mhs->getFakultas() . ') </br>';
    $counter++;
}

echo "</br>";

unset($listMahasiswa[0]);

echo "Sesudah Hapus Data: </br>";
$counter = 0;
foreach ($listMahasiswa as $mhs) {
    echo ($counter + 1) . ') ' . $mhs->getNIM() . ' - ' . $mhs->getNama() . ' - ' . $mhs->getProdi() . ' (' . $mhs->getFakultas() . ') </br>';
    $counter++;

echo "</br>";
}