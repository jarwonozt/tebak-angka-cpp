#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Fungsi yang akan dijalankan pada thread
void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
        this_thread::sleep_for(chrono::milliseconds(500)); // Tunggu 500 ms
    }
    cout << endl;
}

int main() {
    cout << "Main thread dimulai." << endl;

    // Membuat dan memulai thread dengan fungsi `printNumbers`
    thread t1(printNumbers, 1, 5);
    thread t2(printNumbers, 6, 10);

    // Menunggu thread t1 dan t2 selesai
    t1.join();
    t2.join();

    cout << "Main thread selesai." << endl;
    return 0;
}
