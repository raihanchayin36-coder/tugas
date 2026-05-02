#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    string nama[3];
    float nilai1[3];
    float nilai2[3];
    float hasil[3];

    for (i = 0; i < 3; i++) {
        cout << "Masukkan nama : ";
        cin >> nama[i];

        cout << "Masukkan nilai1 : ";
        cin >> nilai1[i];

        cout << "Masukkan nilai2 : ";
        cin >> nilai2[i];

        hasil[i] = (nilai1[i] + nilai2[i]) / 2;
        cout << endl;
    }

    system("cls");

    cout << "=========== Data Nilai Siswa ===========\n";
    for (i = 0; i < 3; i++) {
        cout << "Nama : " << nama[i] << endl;
        cout << "Nilai1 : " << nilai1[i] << endl;
        cout << "Nilai2 : " << nilai2[i] << endl;
        cout << "Rata-rata nilai : " << hasil[i] << endl << endl;
    }

    cout << "========================================\n";
    cout << "No Nama        UTS   UAS   Hasil\n";
    cout << "========================================\n";

    for (i = 0; i < 3; i++) {
        cout << i + 1;
        cout << setw(10) << nama[i];
        cout << setw(6) << nilai1[i];
        cout << setw(6) << nilai2[i];
        cout << setw(8) << hasil[i] << endl;
    }

    return 0;
}
