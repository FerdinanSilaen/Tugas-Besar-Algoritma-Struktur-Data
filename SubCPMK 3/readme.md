# <h1 align="center">Tugas Besar Algoritma & Struktur Data</h1>
# <h1 align="center">CPMK 2 – SubCPMK 3</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>


### <p align="justify">1. Terdapat dua algoritma searching yang umum digunakan yakni, Binary Search dan Linear Search. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma!

### A. Binary Search
### Alur Algoritma Binary Search
- Mulai dari tengah array yang sudah diurutkan.
- Bandingkan elemen tengah dengan elemen yang dicari.
- Jika elemen tengah sama dengan elemen yang dicari, kembalikan indeksnya.
- Jika elemen tengah lebih kecil dari elemen yang dicari, maka pencarian dilanjutkan hanya di setengah kanan array.
- Jika elemen tengah lebih besar dari elemen yang dicari, maka pencarian dilanjutkan hanya di setengah kiri array.
- Ulangi proses dari langkah 2 sampai elemen ditemukan atau seluruh array telah diperiksa.


### Runtime 
- Best Case: O(1) (elemen yang dicari tepat berada di tengah array)
- Worst Case: O(log n) (ketika array terurut dan elemen yang dicari berada di ujung array atau tidak ada dalam array)

### Pseudocode
```C++
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
    return -1; // jika elemen tidak ditemukan
}
```

### B. Linear Search

### Alur Algoritma Linear Search
- Mulai dari elemen pertama array.
- Bandingkan setiap elemen dengan elemen yang dicari.
- Jika elemen yang dicari ditemukan, kembalikan indeksnya.
- Jika elemen yang dicari tidak ditemukan, lanjutkan pencarian ke elemen berikutnya.
- Ulangi proses dari langkah 2 sampai elemen ditemukan atau seluruh array telah diperiksa.

### Runtime 
- Best Case: O(1) (elemen yang dicari berada pada indeks pertama array)
- Worst Case: O(n) (ketika elemen yang dicari berada di posisi terakhir array atau tidak ada dalam array)

### Pseudocode
```C++
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1; // jika elemen tidak ditemukan
}
```

### <p align="justify">2. Buatlah fungsi dari salah satu algoritma searching pada soal nomor 1, dan berikan penjelasan pada program tersebut!

#### Full Code Screenshoot
![full2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/97b4c0e0-674f-48b0-b2a4-8f0aee5f8939)

#### Kode Program :
```C++
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
```

#### Output :
![out2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/5e76d310-06db-4a53-b6ba-b04bfb422b03)

<p align="justify">Kode di atas adalah program sederhana yang menggunakan algoritma Binary Search untuk mencari sebuah angka dalam sebuah array. Program dimulai dengan mendefinisikan fungsi binarySearch yang menerima tiga parameter: array (arr), jumlah elemen dalam array (n), dan elemen yang ingin dicari (x). Fungsi ini mengembalikan indeks dari elemen yang dicari jika ditemukan, dan -1 jika tidak ditemukan. Pengguna diminta untuk memasukkan elemen-elemen array satu per satu. Ini dilakukan dengan menggunakan loop for yang akan mengiterasi sebanyak n kali, dimana setiap iterasi akan meminta pengguna untuk memasukkan nilai elemen array ke-indeks tersebut. Pengguna kemudian diminta untuk memasukkan angka yang ingin dicari dalam array. Jika angka yang dicari ditemukan maka akan mencetak "Elemen ditemukan pada indeks ke-" dan jika angka yang dicari tidak ditemukan, maka akan mencetak "Elemen tidak ditemukan dalam array".



### <p align="justify">3. Tulislah sebuah fungsi program dengan kondisi sebagai berikut : Terdapat sebuah sorted array of strings yang mana terdapat string kosong diantaranya, carilah lokasi/indeks dari kata yang dicari!

#### Full Code Screenshoot

![full3](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/0e221c5d-9410-4e50-8c76-138560251241)


#### Kode Program 

```C++
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
```

#### Output
![out3](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/ced78d00-e9c1-4984-951c-7318bc8d0a5f)

<p align="justify">Dalam fungsi binarySearch, kita melakukan Binary Search pada array of strings. Namun, kita perlu memperhatikan bahwa ada kemungkinan terdapat string kosong di antara string yang valid. Jika elemen tengah yang diperiksa adalah string kosong, maka kita cari indeks terdekat yang tidak kosong di sebelah kanan atau kiri (tergantung pada nilai pencarian). Jika seluruh array hanya terdiri dari string kosong, maka pencarian dihentikan dan fungsi mengembalikan -1 sebagai penanda bahwa kata tidak ditemukan. Jika kata ditemukan, fungsi mengembalikan indeks tempat kata tersebut ditemukan. Jika tidak, fungsi mengembalikan -1.