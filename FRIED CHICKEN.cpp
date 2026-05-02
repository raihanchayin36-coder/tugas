#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Array data
    char kode[3] = {'D', 'P', 'S'};
    string jenis[3] = {"Dada", "Paha", "Sayap"};
    int harga[3] = {2500, 2000, 1500};

    int banyakJenis, totalBayar = 0;

    cout << "===== GEROBAK FRIED CHICKEN =====" << endl;
    cout << "Kode   Jenis   Harga" << endl;
    cout << "D      Dada    Rp.2500" << endl;
    cout << "P      Paha    Rp.2000" << endl;
    cout << "S      Sayap   Rp.1500" << endl;
    cout << "================================" << endl;

    cout << "Banyak Jenis : ";
    cin >> banyakJenis;

    // Array input
    char pilihKode[banyakJenis];
    int banyakBeli[banyakJenis];
    int jumlahHarga[banyakJenis];

    for (int i = 0; i < banyakJenis; i++) {
        cout << "\nJenis ke-" << i + 1 << endl;
        cout << "Masukkan Kode [D/P/S] : ";
        cin >> pilihKode[i];

        cout << "Banyak Potong : ";
        cin >> banyakBeli[i];

        for (int j = 0; j < 3; j++) {
            if (toupper(pilihKode[i]) == kode[j]) {
                jumlahHarga[i] = harga[j] * banyakBeli[i];
                totalBayar += jumlahHarga[i];
            }
        }
    }

    // Output
    cout << "\n===== GEROBAK FRIED CHICKEN =====" << endl;
    cout << left << setw(5) << "No"
         << setw(10) << "Jenis"
         << setw(12) << "Harga"
         << setw(10) << "Beli"
         << setw(12) << "Jumlah" << endl;

    for (int i = 0; i < banyakJenis; i++) {
        for (int j = 0; j < 3; j++) {
            if (toupper(pilihKode[i]) == kode[j]) {
                cout << left << setw(5) << i + 1
                     << setw(10) << jenis[j]
                     << setw(12) << harga[j]
                     << setw(10) << banyakBeli[i]
                     << setw(12) << jumlahHarga[i] << endl;
            }
        }
    }

    double pajak = totalBayar * 0.10;
    double totalAkhir = totalBayar + pajak;

    cout << "----------------------------------" << endl;
    cout << "Jumlah Bayar : Rp." << totalBayar << endl;
    cout << "Pajak 10%    : Rp." << pajak << endl;
    cout << "Total Bayar  : Rp." << totalAkhir << endl;

    return 0;
}
