#include <iostream>
using namespace std;

int main() {
    int luas[5];

    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    // Buat sebuah variabel yang menampung luas terbesar.
    // Pada awalnya, isi variabel tersebut dengan luas dari kandang pertama.
    int sort[] = {luas[0]};

    // Untuk setiap kandang sisanya:
    for (int i = 1; i < 5; i++) {
        // Jika luasnya lebih besar daripada variabel luas terbesar:
        if (luas[i] > luas[i-1]) {
            // Perbarui nilai variabel luas terbesar dengan luas kandang tersebut.
            sort[0] = luas[i];
        }
    }

    cout << sort[0] << endl;
}
