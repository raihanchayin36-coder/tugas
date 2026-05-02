#include <iostream>
using namespace std;

int main() {
    string nama[2][3] = {
        {"Pak", "Bu", "Pak"},
        {"Budi", "Ana", "Rudi"}
    };

    cout << nama[0][0] << " " << nama[1][0] << endl;
    cout << nama[0][1] << " " << nama[1][1] << endl;
    cout << nama[0][2] << " " << nama[1][2] << endl;

    return 0;
}
