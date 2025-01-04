#include <iostream>
#include <string>

using namespace std;

int main() {
    double saldoAwal, totalPengeluaran = 0.0;
    int pilihan;
    string kategoriPengeluaran;
    double jumlahPengeluaran;

    // Meminta pengguna untuk memasukkan saldo awal
    cout << "Selamat datang di Aplikasi Keuangan Harian!" << endl;
    cout << "Masukkan saldo awal Anda: ";
    cin >> saldoAwal;

    do {
        // Menampilkan menu utama
        cout << "\nMenu Utama:" << endl;
        cout << "1. Tambah Pengeluaran" << endl;
        cout << "2. Tampilkan Total Pengeluaran" << endl;
        cout << "3. Tampilkan Sisa Saldo" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        if (pilihan == 1) { // Tambah Pengeluaran
            cout << "Masukkan nama kategori pengeluaran: ";
            cin >> kategoriPengeluaran;
            cout << "Masukkan jumlah pengeluaran: ";
            cin >> jumlahPengeluaran;

            // Memastikan jumlah pengeluaran tidak melebihi saldo
            if (jumlahPengeluaran > saldoAwal) {
                cout << "Jumlah pengeluaran melebihi saldo! Silakan coba lagi." << endl;
            } else {
                totalPengeluaran += jumlahPengeluaran;
                saldoAwal -= jumlahPengeluaran;
                cout << "Pengeluaran berhasil ditambahkan!" << endl;
            }
        } else if (pilihan == 2) { // Tampilkan Total Pengeluaran
            cout << "Total pengeluaran Anda: " << totalPengeluaran << endl;
        } else if (pilihan == 3) { // Tampilkan Sisa Saldo
            cout << "Sisa saldo Anda: " << saldoAwal << endl;
        } else if (pilihan == 4) { // Keluar dari aplikasi
            cout << "Terima kasih telah menggunakan Aplikasi Keuangan Harian!" << endl;
        } else {
            cout << "Pilihan tidak valid! Silakan pilih opsi yang benar." << endl;
        }
    } while (pilihan != 4); // Mengulangi menu hingga pengguna memilih keluar

    return 0;
}