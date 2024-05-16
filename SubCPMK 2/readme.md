# <h1 align="center">Tugas Besar Algoritma & Struktur Data</h1>
# <h1 align="center">CPMK 2 – SubCPMK 2</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>


### <p align="justify">1. Terdapat tiga algoritma sorting yang umum digunakan yakni, Bubble Sort, Selection Sort, dan Merge Sort. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma!</p>

### Jawab:

### A. Bubble Sort

### Alur Algoritma Bubble Sort
- Mulai dengan elemen pertama dan bandingkan dengan elemen kedua. Jika elemen pertama lebih besar dari elemen kedua, tukar mereka.
- Lanjutkan ke elemen berikutnya dan bandingkan dengan elemen setelahnya. Ulangi proses ini sampai akhir array.
- Setelah satu iterasi penuh, elemen terbesar akan berada di posisi terakhir.
- Ulangi langkah 1 hingga 3 untuk bagian array yang belum terurut (yaitu, dari elemen pertama hingga elemen ke-(n-2) pada iterasi kedua, dan seterusnya).
- Jika dalam satu iterasi tidak ada pertukaran, maka array sudah terurut dan perulangan dapat dihentikan.

### Runtime 
- Best case: O(n), saat array sudah terurut, hanya perlu satu iterasi untuk memastikan tidak ada pertukaran yang diperlukan. 
- Worst case: O(n^2), saat array terbalik urutannya, setiap elemen harus dibandingkan dan dipertukarkan pada setiap iterasi.

### Pseudocode
```C++
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; 
    }
}
```

### B. Selection Sort

### Alur Algoritma Selection Sort
- Mulai dengan elemen pertama (indeks 0) dan anggap sebagai elemen terkecil.
- Bandingkan elemen tersebut dengan elemen-elemen berikutnya untuk menemukan elemen terkecil di bagian yang belum terurut.
-  Setelah menemukan elemen terkecil, tukar dengan elemen pertama dari bagian yang belum terurut.
-  Lanjutkan ke elemen berikutnya (indeks 1) dan ulangi langkah 1 hingga 3 hingga seluruh array terurut.

### Runtime
- Best case: O(n) (meskipun array sudah terurut, tetap harus melakukan perbandingan pada setiap iterasi).
- Worst case: O(n^2) (sama seperti kasus terbaik, karena tetap harus melakukan perbandingan pada setiap iterasi).

### Pseudocode 
```C++
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Anggap elemen pertama dari bagian yang belum terurut sebagai elemen terkecil
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Perbarui minIndex jika ditemukan elemen yang lebih kecil
            }
        }
        // Tukar elemen terkecil yang ditemukan dengan elemen pertama dari bagian yang belum terurut
        swap(arr[i], arr[minIndex]);
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Array terurut: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### C. Merge Sorting

### Alur Algoritma Merge Sorting
- Bagian pertama dari algoritma adalah membagi array menjadi dua bagian yang hampir sama besar. Tentukan titik tengah (mid) sebagai mid=left+(right−left)/2. 
- Terapkan Merge Sort secara rekursif pada setiap sub-array. Jika sub-array memiliki satu elemen atau kosong, maka sub-array tersebut sudah terurut.
- Setelah kedua sub-array diurutkan, gabungkan dua sub-array yang sudah terurut menjadi satu array yang terurut. Bandingkan elemen pertama dari kedua sub-array dan pilih elemen yang lebih kecil untuk dimasukkan ke dalam array hasil.
- Lanjutkan membandingkan dan memasukkan elemen-elemen yang lebih kecil dari kedua sub-array sampai semua elemen digabungkan. 

### Runtime
- Best Case: O (n log n). Dalam kasus terbaik, array dibagi dua secara logaritmik log n kali, dan penggabungan dua bagian memerlukan waktu linear O(n).
- Worst Case: O (n log n). Sama dengan kasus terbaik. Merge Sort selalu membagi array dan menggabungkan dengan cara yang sama, terlepas dari urutan awal elemen-elemen dalam array. Oleh karena itu, waktu terburuknya juga O (n log n).

### Pseudocode
```C++
void merge(int arr[], int left, int mid, int right) {
    // Hitung ukuran dua subarray yang akan digabungkan
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Buat array sementara
    int L[n1], R[n2];

    // Salin data ke array sementara L[] dan R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Gabungkan kembali array sementara ke arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen L[] jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Salin sisa elemen R[] jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Tentukan titik tengah
        int mid = left + (right - left) / 2;

        // Rekursif bagi dan urutkan bagian pertama dan kedua
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan bagian yang sudah diurutkan
        merge(arr, left, mid, right);
    }
}

// Fungsi utama untuk menjalankan program
int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Array terurut: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

```


### <p align="justify">2. Buatlah fungsi dari salah satu algoritma sorting pada soal nomor 1, dan berikan penjelasan pada program tersebut!</p>


#### Full Code Screenshot 
![full2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/d10eb714-7a21-47a0-a0bf-28c7334ec251)

#### Kode Program 

```C++
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
```
#### Output 
![out2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/aa59255d-d0a2-44af-b9f9-688fea7c2a96)

<p align="justify">Pada program ini, terdapat fungsi bubbleSort yang menerima array integer (arr[]) dan jumlah elemen dalam array (n) sebagai parameter. Algoritma Bubble Sort diimplementasikan di dalam fungsi ini menggunakan dua loop bersarang. Loop luar digunakan untuk mengontrol iterasi sebanyak n-1 kali, dimana pada setiap iterasi, elemen terbesar akan 'naik' ke posisi yang benar. Loop dalam digunakan untuk membandingkan elemen-elemen berdekatan dalam array, dan jika urutannya salah, elemen tersebut akan ditukar. Fungsi swap digunakan untuk menukar dua elemen dalam array. Di dalam main(), sebuah array integer awal diinisialisasi dengan beberapa nilai. Selanjutnya, fungsi bubbleSort dipanggil untuk mengurutkan array tersebut. Setelah proses pengurutan selesai, array yang sudah terurut dicetak ke layar menggunakan loop for. Maka output yang akan dihasilkan menjadi 11 19 25 26 54 64 76. 


### <p align="justify">3. Tulislah sebuah fungsi untuk mensorting dan mengecek dua buah array of strings, sehingga menghasilkan “anagram” dan “tidak anagram”!

#### Full Code Screenshoot
![full3](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/04ca091d-812f-4431-8c25-b7c42ad301be)

#### Kode Program 

```C++
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Fungsi untuk mengurutkan karakter dalam string
string sortString(string str) {
    sort(str.begin(), str.end());
    return str;
}

// Fungsi untuk memeriksa apakah dua string adalah anagram atau tidak
bool isAnagram(string str1, string str2) {
    // Jika panjang kedua string tidak sama, bukan anagram
    if (str1.length() != str2.length())
        return false;

    str1 = sortString(str1);
    str2 = sortString(str2);

    
    return (str1 == str2);
}

int main() {
    string str1, str2;

    cout << "Masukkan string pertama: ";
    cin >> str1;
    cout << "Masukkan string kedua: ";
    cin >> str2;

    if (isAnagram(str1, str2))
        cout << "Kedua string adalah Anagram." << endl;
    else
        cout << "Kedua string bukan Anagram." << endl;

    return 0;
}
```

#### Output 
![out3a](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/36ef321f-8c82-4bc8-970b-37daeb617170)
![out3b](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/1ecec0a5-cc8e-4f51-b231-07deddf6f37b)

<p align="justify">Di awal program, terdapat dua fungsi yang didefinisikan. Pertama adalah sortString, yang bertugas untuk mengurutkan karakter-karakter dalam sebuah string yang diberikan. Kedua adalah isAnagram, fungsi ini memeriksa apakah dua string yang diberikan merupakan anagram atau tidak. Jika panjang kedua string tidak sama, maka fungsi langsung mengembalikan nilai false. Kemudian, kedua string tersebut diurutkan menggunakan fungsi sortString, dan hasilnya dibandingkan apakah sama. Jika kedua string merupakan anagram, program mencetak "Kedua string adalah Anagram", dan jika tidak, mencetak "Kedua string bukan Anagram". 

### <p align="justify">4. Tulislah sebuah fungsi program dengan asumsi sebagai berikut : Terdapat dua buah sorted array A dan B yang memiliki tipe data sama, dimana array A memiliki indeks yang cukup untuk menampung array B. Gabungkan array B kedalam array A, kemudian urutkan array tersebut!
</p>

#### Full Code Screenshoot
![full4](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/53f22885-d170-44f8-b9bf-f5a564abce9a)

#### Kode Program 

```C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeAndSort(vector<int>& A, vector<int>& B) {
    A.insert(A.end(), B.begin(), B.end());
    sort(A.begin(), A.end());
}

int main() {
    vector<int> A = {3, 1, 9, 7, 5};
    vector<int> B = {2, 8, 10, 4, 6};

    cout << "Array A sebelum merge: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int num : B) {
        cout << num << " ";
    }
    cout << endl;

    mergeAndSort(A, B);

    cout << "Gabungan array A dan B setelah Merge sort: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

#### Output 
![out4](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/09fd9d75-b352-484d-b97b-6fb287e3a70d)!

<p align="justify">Program yang diberikan bertujuan untuk menggabungkan dua buah array yang sudah terurut, yaitu array A dan B, lalu mengurutkan array hasil penggabungan. Fungsi mergeAndSort menerima dua parameter berupa dua buah vector, yaitu A dan B. Pertama, isi dari array B akan digabungkan ke dalam array A menggunakan fungsi insert. Setelah itu, array A akan diurutkan menggunakan fungsi sort untuk mendapatkan array yang sudah terurut. Di dalam main, dua buah vector A dan B yang sudah terurut diinisialisasi dengan nilai-nilai tertentu. Nilai dari kedua vector dicetak sebelum proses penggabungan dan pengurutan dilakukan. Selanjutnya, fungsi mergeAndSort dipanggil untuk melakukan penggabungan dan pengurutan array. Hasil penggabungan dan pengurutan dicetak kembali untuk dilihat hasilnya.