#include <iostream>
#include <cstdlib>   // Untuk fungsi rand() dan srand()
#include <ctime>     // Untuk fungsi time()
using namespace std;

class TebakAngkaGame {
private:
    int angkaRahasia;      // Menyimpan angka yang harus ditebak
    int maxPercobaan;      // Batas maksimum percobaan
    int jumlahPercobaan;   // Menghitung jumlah percobaan yang dilakukan

public:
    // Constructor untuk menginisialisasi game
    TebakAngkaGame(int maxPercobaan) {
        this->maxPercobaan = maxPercobaan;
        this->jumlahPercobaan = 0;
        srand(time(0));    // Menginisialisasi seed untuk angka acak
        angkaRahasia = rand() % 100 + 1; // Angka acak antara 1 dan 100
    }

    // Fungsi untuk menjalankan game
    void mainkan() {
        int tebakan;
        cout << "Selamat datang di game tebak angka!" << endl;
        cout << "Saya sudah memilih angka antara 1 hingga 100. Coba tebak!" << endl;

        // Loop hingga pemain berhasil menebak atau mencapai batas percobaan
        while (jumlahPercobaan < maxPercobaan) {
            cout << "Masukkan tebakan Anda: ";
            cin >> tebakan;

            jumlahPercobaan++;

            // Mengecek apakah tebakan benar
            if (tebakan == angkaRahasia) {
                cout << "Selamat! Anda berhasil menebak angka dalam " << jumlahPercobaan << " percobaan." << endl;
                return;
            }
            else if (tebakan < angkaRahasia) {
                cout << "Tebakan Anda terlalu rendah." << endl;
            }
            else {
                cout << "Tebakan Anda terlalu tinggi." << endl;
            }

            // Jika mencapai batas percobaan
            if (jumlahPercobaan == maxPercobaan) {
                cout << "Maaf, Anda telah mencapai batas percobaan." << endl;
                cout << "Angka yang benar adalah: " << angkaRahasia << endl;
            }
        }
    }
};

int main() {
    int maxPercobaan;

    cout << "Masukkan jumlah maksimum percobaan yang diizinkan: ";
    cin >> maxPercobaan;

    // Membuat objek dari class TebakAngkaGame
    TebakAngkaGame game(maxPercobaan);

    // Menjalankan game
    game.mainkan();

    return 0;
}
