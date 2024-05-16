#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Loop untuk setiap elemen dalam array
        bool swapped = false; 
        for (int j = 0; j < n - i - 1; j++) { // Loop untuk elemen yang belum terurut
            if (arr[j] > arr[j + 1]) { // Bandingkan elemen yang berdekatan
                swap(arr[j], arr[j + 1]); // Menukar elemen jika urutannya salah
                swapped = true; 
            }
        }
        if (!swapped) { 
            break;
        }
    }
}

void swap(int &a, int &b) {
    int temp = a; 
    a = b; 
    b = temp; 
}

int main() {
    int arr[] = {64, 54, 25, 19, 26, 11, 76};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n); 

    cout << "Array terurut: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
