import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int stop = 0, opsi = 0;

        Menu menu = new Menu();
        Scanner scanner = new Scanner(System.in);

        while (stop == 0) {
            System.out.println("=== Latihan 1 Praktikum DPBO - Java ===");
            System.out.println("- Muhammad Rayhan Nur (2100192) -");
            System.out.println("====================================");
            System.out.println("Pilih Menu: ");
            System.out.println("1. Tambah Data");
            System.out.println("2. Sunting Data");
            System.out.println("3. Hapus Data");
            System.out.println("4. Tampilkan Data");
            System.out.println("5. Keluar");
            System.out.println("");

            System.out.print("=> ");
            try {
                opsi = scanner.nextInt();
            } catch (Exception e) {
            }

            switch (opsi) {
                case 1:
                    menu.tambahDataMhs();
                    break;

                case 2:
                    menu.suntingDataMhs();
                    break;

                case 3:
                    menu.hapusDataMhs();
                    break;

                case 4:
                    menu.tampilkanDataMhs();
                    break;

                case 5:
                    System.out.println("Terima kasih telah menggunakan program Java ini :)");
                    System.out.println("- Muhammad Rayhan Nur (2100192)");
                    stop = 1;
                    break;

                default:
                    System.out.println("Pilih opsi yang bener napa kocak!");
                    break;
            }
        }
    }
}
