public class Mahasiswa {
    private String nama, nim, prodi, fakultas;

    public Mahasiswa(String nama, String nim, String prodi, String fakultas) {
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setNIM(String nim) {
        this.nim = nim;
    }

    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public String getNama() {
        return this.nama;
    }

    public String getNIM() {
        return this.nim;
    }

    public String getProdi() {
        return this.prodi;
    }

    public String getFakultas() {
        return this.fakultas;
    }
}