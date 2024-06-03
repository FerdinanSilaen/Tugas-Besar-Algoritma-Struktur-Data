#include <iostream>
using namespace std;

int main (){
    int n = 7;
    int data [n] = {12, 5, 5, 3, 8, 10, 11};
    int cari = 12;
    bool ketemu = false;
    int i;
    
    for (i = 0; i < n; i++){
        if (data [i] == cari){
            ketemu = true;
            break;
        }
    }

     cout << "\t Sekuensial\n" << endl;
    cout << "Array = [12, 5, 7, 3, 8, 10, 11]" << endl;

    if (ketemu) {
        cout << "Angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak ditemukan pada data" << endl;
    }

    return 0;
}
