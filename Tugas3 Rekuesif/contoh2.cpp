#include <iostream>

using namespace std;

// Fungsi pertama yang memanggil fungsi kedua
void functionA(int n);

// Fungsi kedua yang memanggil fungsi pertama
void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n - 1);  // Panggil functionA dengan n - 1
    }
}

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n / 2);  // Panggil functionB dengan n / 2
    }
}

int main() {
    int number = 10;
    cout << "Output rekursif tidak langsung: ";
    functionA(number);  // Mulai rekursi dengan functionA
    cout << endl;
    return 0;
}
