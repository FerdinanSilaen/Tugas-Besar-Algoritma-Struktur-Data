#include <iostream>
#include <vector>
using namespace std;

// Fungsi Binary Search untuk array of strings
int binarySearch(vector<string>& arr, string x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        // Hilangkan string kosong di sebelah kiri
        while (arr[left] == "" && left <= right) {
            left++;
        }
        // Hilangkan string kosong di sebelah kanan
        while (arr[right] == "" && right >= left) {
            right--;
        }
        // Jika left lebih besar dari right, artinya seluruh array adalah string kosong
        if (left > right) {
            return -1;
        }
        int mid = left + (right - left) / 2;
        // Jika elemen tengah kosong, cari indeks terdekat yang tidak kosong
        while (arr[mid] == "" && mid <= right) {
            mid++;
        }
        // Jika left lebih besar dari right setelah pencarian elemen tengah, artinya seluruh array adalah string kosong
        if (mid > right) {
            return -1;
        }
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    vector<string> arr = {"", "apel", "", "belimbing", "", "durian", "pisang", "","salak"};
    string x = "durian"; // Kata yang ingin dicari

    // Memanggil fungsi Binary Search
    int result = binarySearch(arr, x);

    // Output hasil pencarian
    if (result == -1) {
        cout << "Kata tidak ditemukan dalam array." << endl;
    } else {
        cout << "Kata ditemukan pada indeks ke-" << result << endl;
    }

    return 0;
}
