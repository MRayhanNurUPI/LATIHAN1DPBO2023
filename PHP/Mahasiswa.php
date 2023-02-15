<?php

class Mahasiswa {
    private $nama = '';
    private $nim = '';
    private $prodi = '';
    private $fakultas = '';

    public function __construct($nama = "", $nim = "", $prodi = "", $fakultas = "") {
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }
    
    public function setNama($nama) {
        $this->nama = $nama;
    }    

    public function setNIM($nim) {
        $this->nim = $nim;
    }   

    public function setProdi($prodi) {
        $this->prodi = $prodi;
    }

    public function setFakultas($fakultas) {
        $this->fakultas = $fakultas;
    }

    public function getNama(){ return $this->nama; }
    public function getNIM(){ return $this->nim; }
    public function getProdi(){ return $this->prodi; }
    public function getFakultas(){ return $this->fakultas; }
}


?>