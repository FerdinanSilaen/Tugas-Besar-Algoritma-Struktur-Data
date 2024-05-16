#include <iostream>
using namespace std;

// Fungsi Binary Search
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int n;
    
    // Meminta untuk memasukkan jumlah elemen
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    int arr[n];
    
    // Meminta untuk memasukkan elemen-elemen array
    cout << "Masukkan " << n << " angka (dalam urutan terurut): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;

    // Meminta untuk memasukkan angka yang ingin dicari
    cout << "Masukkan angka yang ingin Anda cari dalam array: ";
    cin >> x;

    // Memanggil fungsi Binary Search
    int result = binarySearch(arr, n, x);
    if (result == -1)
        cout << "Elemen tidak ditemukan dalam array." << endl;
    else
        cout << "Elemen ditemukan pada indeks ke-" << result << endl;

    return 0;
}
