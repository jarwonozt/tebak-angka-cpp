#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; ++i) {
        cout << "Outer loop iteration: " << i << endl;
        for (int j = 1; j <= 3; ++j) {
            cout << "Inner loop iteration: " << j << endl;
            if (j == 2) {
                cout << "Breaking out of the inner loop." << endl;
                break; // Exits the inner loop when j equals 2
            }
        }
    }
    return 0;
}
