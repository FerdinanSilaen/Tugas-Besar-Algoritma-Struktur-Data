#include <iostream>

using namespace std;

// Fungsi rekursif langsung untuk menghitung faktorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    cout << "Faktorial dari " << number << " adalah " << factorial(number) << endl;
    return 0;
}