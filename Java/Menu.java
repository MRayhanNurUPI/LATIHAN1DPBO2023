import java.util.Scanner;
import java.util.ArrayList;

public class Menu {

    private ArrayList<Mahasiswa> listMahasiswa = new ArrayList<Mahasiswa>();
    private String tempNama, tempNIM, tempProdi, tempFakultas;

    public void tambahDataMhs() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("= Menambahkan Data Mahasiswa Baru =");
        System.out.print("Nama: ");
        try {
            tempNama = scanner.nextLine();
        } catch (Exception e) {
        }

        System.out.print("NIM: ");
        try {
            tempNIM = scanner.nextLine();
        } catch (Exception e) {
        }

        System.out.print("Program Studi: ");
        try {
            tempProdi = scanner.nextLine();
        } catch (Exception e) {
        }

        System.out.print("Fakultas: ");
        try {
            tempFakultas = scanner.nextLine();
        } catch (Exception e) {
        }

        Mahasiswa mhsBaru = new Mahasiswa(tempNama, tempNIM, tempProdi, tempFakultas);
        listMahasiswa.add(mhsBaru);

        System.out.println("\nBerhasil menambahkan data ke dalam list!");
    }

    public void suntingDataMhs() {
        Scanner scanner = new Scanner(System.in);
        if (listMahasiswa.isEmpty()) {
            System.out.println("Daftar Mahasiswa Kosong.");
        } else {
            System.out.println("= Ubah Data Mahasiswa =");
            System.out.print("Masukkan NIM atau Nama Mahasiswa yang ingin diubah datanya: ");

            String filter = "";
            try {
                filter = scanner.nextLine();
            } catch (Exception e) {
            }

            int ketemu = 0;
            for (Mahasiswa it : listMahasiswa) {
                if (it.getNIM().equals(filter) || it.getNama().equals(filter)) {
                    ketemu = 1;
                    System.out.println("Nih datanya -> " + it.getNIM() + " - " + it.getNama() + " - " + it.getProdi()
                            + " (" + it.getFakultas() + ")");

                    System.out.println("\n- Silakan ubah data -");

                    System.out.print("Nama: ");
                    try {
                        tempNama = scanner.nextLine();
                    } catch (Exception e) {
                    }

                    System.out.print("NIM: ");
                    try {
                        tempNIM = scanner.nextLine();
                    } catch (Exception e) {
                    }

                    System.out.print("Program Studi: ");
                    try {
                        tempProdi = scanner.nextLine();
                    } catch (Exception e) {
                    }

                    System.out.print("Fakultas: ");
                    try {
                        tempFakultas = scanner.nextLine();
                    } catch (Exception e) {
                    }

                    it.setNama(tempNama);
                    it.setNIM(tempNIM);
                    it.setProdi(tempProdi);
                    it.setFakultas(tempFakultas);

                    System.out.println("\nBerhasil mengubah data!");
                    System.out.println("Sesudah diubah -> " + it.getNIM() + " - " + it.getNama() + " - " + it.getProdi()
                            + " (" + it.getFakultas() + ")");
                }

                if (ketemu == 1) {
                    break;
                }
            }

            if (ketemu == 0) {
                System.out.println("Mohon maaf data yang dicari tidak ada\n\n");
            }

        }
    }

    void hapusDataMhs() {
        Scanner scanner = new Scanner(System.in);
        if (listMahasiswa.isEmpty()) {
            System.out.println("Daftar Mahasiswa Kosong.");
        } else {
            System.out.println("= Hapus Data Mahasiswa =");
            System.out.print("Masukkan NIM atau Nama Mahasiswa yang ingin dihapus: ");

            String deleted = "";
            try {
                deleted = scanner.nextLine();
            } catch (Exception e) {
            }

            int ketemu = 0;
            for (Mahasiswa it : listMahasiswa) {
                if (it.getNIM().equals(deleted) || it.getNama().equals(deleted)) {
                    ketemu = 1;
                    listMahasiswa.remove(it);
                    System.out.println("Berhasil menghapus data!");
                }

                if (ketemu == 1) {
                    break;
                }
            }

            if (ketemu == 0) {
                System.out.println("Mohon maaf data yang dicari tidak ada\n");
            }
        }
    }

    public void tampilkanDataMhs() {
        if (listMahasiswa.isEmpty()) {
            System.out.println("Daftar Mahasiswa Kosong.");
        } else {
            System.out.println("== Daftar Mahasiswa ==");

            int counter = 0;
            for (Mahasiswa it : listMahasiswa) {
                System.out.println((counter + 1) + ") " + it.getNIM() + " - " + it.getNama() + " - " + it.getProdi()
                        + " (" + it.getFakultas() + ")");
                counter++;
            }
            System.out.println("");
        }
    }

}
