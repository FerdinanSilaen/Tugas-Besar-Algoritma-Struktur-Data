 <h1 align="center">Priority Queue dan Heaps</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>

## Dasar Teori
### Priority Queue
<p align="justify"> Priority Queue adalah struktur data yang sangat penting dalam ilmu komputer dan banyak digunakan dalam berbagai aplikasi. Tidak seperti antrian biasa yang mengikuti prinsip FIFO (First In, First Out), queue prioritas mengatur elemen berdasarkan prioritas yang diberikan, sehingga elemen dengan prioritas lebih tinggi akan diakses atau diproses terlebih dahulu. Setiap elemen dalam queue prioritas memiliki prioritas yang terkait dengannya. Prioritas ini menentukan urutan pengeluaran elemen dari queue. Elemen dengan prioritas tertinggi diakses terlebih dahulu. Jika dua elemen memiliki prioritas yang sama, mereka biasanya diakses sesuai urutan kedatangan. Saat Anda menambahkan elemen ke antrian, elemen tersebut dimasukkan ke dalam posisi berdasarkan nilai prioritasnya. Misalnya, jika Anda menambahkan elemen dengan nilai prioritas tinggi ke antrean prioritas, elemen tersebut mungkin disisipkan di dekat bagian depan antrean, sedangkan elemen dengan nilai prioritas rendah dapat disisipkan di dekat bagian belakang. Ada beberapa cara untuk mengimplementasikan antrian prioritas, termasuk menggunakan array, linked list, heap, dan  binary search tree. Priority Queue dapat diimplementasikan dengan berbagai struktur data, tetapi salah satu yang paling efisien adalah Heap [1]. Heap adalah pohon biner yang mematuhi properti tertentu sehingga dapat mendukung operasi priority queue dengan efisiensi tinggi.

![Priority_Queue](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/4be7ac23-df32-451e-acad-2e239bc6c03b)

#### Penggunaan 
<p align="justify">Priority Queue banyak digunakan dalam berbagai algoritma untuk memecahkan berbagai masalah. Beberapa penggunaan Priority Queue dalam algoritma antara lain:

<p align="justify">1. Algoritma Dijkstra: Digunakan untuk menemukan jalur terpendek dalam graf berbobot positif. Priority Queue memungkinkan pemilihan simpul berikutnya dengan bobot terkecil selama proses pencarian jalur terpendek.

<p align="justify">2. Algoritma A (A-Star): Sering digunakan dalam permasalahan pencarian jarak terpendek dengan heuristik. Priority Queue membantu memilih simpul berikutnya berdasarkan nilai fungsi heuristik dan jarak yang sudah dilalui.

<p align="justify">3. Algoritma Huffman: Digunakan dalam kompresi data, di mana elemen-elemen dengan frekuensi kemunculan yang lebih tinggi diberikan prioritas lebih tinggi saat pembuatan pohon Huffman.

<p align="justify">4. Penjadwalan Tugas: Priority Queue membantu dalam menentukan urutan penjadwalan tugas berdasarkan prioritas yang telah ditentukan.


### Heap
<p align="justify">Heap adalah struktur data berbasis pohon yang digunakan untuk mengimplementasikan priority queue. Heap memastikan bahwa elemen dengan prioritas tertinggi atau terendah selalu berada di posisi root (akar) pohon. Ada dua jenis heap yang umum digunakan:

- Max-Heap

    <p align="justify">Min-Heap adalah struktur data di mana nilai setiap node lebih kecil atau sama dengan nilai anak-anaknya. Ini berarti elemen dengan nilai terkecil selalu berada di akar pohon, sehingga min-heap sangat efisien untuk operasi yang memerlukan pengambilan elemen terkecil secara cepat. Min-Heap biasanya diimplementasikan sebagai pohon biner lengkap, yang berarti semua level pohon terisi penuh kecuali mungkin level terakhir, yang terisi dari kiri ke kanan tanpa ada celah [2]. Operasi utama pada min-heap meliputi insert (menambahkan elemen baru), extract-min (menghapus dan mengembalikan elemen terkecil), dan get-min (mengembalikan elemen terkecil tanpa menghapusnya). Dalam operasi insert, elemen baru ditempatkan di akhir array dan kemudian dipindahkan ke posisi yang sesuai melalui proses yang disebut "shift up" untuk mempertahankan properti heap. Sebaliknya, operasi extract-min menggantikan elemen akar dengan elemen terakhir dalam array, mengurangi ukuran heap, dan kemudian memindahkan elemen baru di akar ke posisi yang sesuai menggunakan "shift down".

- Min-Heap
    
    <p align="justify">Max-Heap adalah kebalikan dari min-heap, di mana nilai setiap node lebih besar atau sama dengan nilai anak-anaknya. Dalam max-heap, elemen dengan nilai terbesar selalu berada di akar pohon, menjadikannya ideal untuk aplikasi yang memerlukan akses cepat ke elemen terbesar. Sama seperti min-heap, max-heap juga diimplementasikan sebagai pohon biner lengkap. Operasi pada max-heap juga mirip dengan min-heap, termasuk insert (menambahkan elemen baru), extract-max (menghapus dan mengembalikan elemen terbesar), dan get-max (mengembalikan elemen terbesar tanpa menghapusnya). Pada operasi insert, elemen baru ditempatkan di akhir array dan dipindahkan ke atas melalui proses "shift up" sampai properti max-heap terpenuhi [3]. Operasi extract-max menggantikan elemen akar dengan elemen terakhir, mengurangi ukuran heap, dan kemudian menggunakan "shift down" untuk memastikan elemen baru di akar berada di posisi yang benar sesuai dengan properti max-heap.

![Heap](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/967cc086-1f74-4ae6-b492-e7bca23d282e)

#### Karakteristik Heap
- Pohon Biner Lengkap (Complete Binary Tree)

    Heap selalu berbentuk pohon biner lengkap, yaitu semua level terisi penuh kecuali mungkin level terakhir, yang diisi dari kiri ke kanan tanpa ada celah.
- Heap Property

     Setiap node memiliki nilai yang lebih besar atau lebih kecil dari anak-anaknya, tergantung apakah itu max-heap atau min-heap.

#### Kelebihan Heap

- Kompleksitas waktu pada struktur data heap cenderung lebih sedikit. Untuk memasukkan atau menghapus elemen di heap, kompleksitas waktunya hanya O(log N).
- Membantu untuk menemukan jumlah minimum dan jumlah terbesar.
- Untuk operasi peek elemen paling awal, kompleksitas waktunya konstan O(1).
- Dapat diimplementasikan menggunakan array, tidak memerlukan ruang ekstra untuk pointer.
- Binary heap adalah pohon biner yang seimbang, dan mudah diterapkan.
- Heap dapat dibuat dengan O(N) waktu.

#### Kekurangan Struktur Data Heap

- Kompleksitas waktu untuk mencari elemen di Heap adalah O(N).
- Untuk menemukan penerus atau pendahulu dari suatu elemen, heap membutuhkan waktu O(N), sedangkan BST hanya membutuhkan waktu O(log N).
- Untuk mencetak semua elemen heap dalam urutan kompleksitas waktu adalah O(N*log N), sedangkan untuk BST, hanya dibutuhkan waktu O(N).
- Manajemen memori lebih kompleks dalam tumpukan memori karena digunakan secara global. Memori heap dibagi menjadi dua bagian - generasi lama dan generasi muda dll. pada garbage collection milik java.

## Contoh Program
### Priority Queue

```C++
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Compare {
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    // Membuat priority_queue sebagai min-heap
    priority_queue<int, vector<int>, Compare> pq;

    // Menambahkan elemen ke antrian prioritas
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);

    // Menampilkan elemen 
    while (!pq.empty()) {
        cout << "Elemen teratas: " << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
```
#### Output
![out1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d2111bee-6680-4681-a4eb-40f6b7b4cce5)

#### Screenshot full 
![contoh1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/5a2af708-6284-47b3-9114-91ff65dceb7c)

<p align="justify">Kode priority queue di atas untuk mengimplementasikan min-heap. Di dalam kode, terdapat sebuah struktur Compare yang mendefinisikan fungsi operator() untuk membandingkan dua elemen, di mana fungsi ini mengembalikan true jika elemen pertama lebih besar dari elemen kedua. Ini membalikkan urutan standar dari priority_queue, sehingga mengubahnya dari max-heap default menjadi min-heap. Di dalam fungsi main(), sebuah priority_queue bernama pq dibuat dengan menggunakan vektor sebagai kontainer dan Compare sebagai comparator. Selanjutnya, beberapa elemen (10, 30, 20, 5, dan 1) ditambahkan ke antrian prioritas menggunakan metode push(). Setelah semua elemen ditambahkan, sebuah loop while digunakan untuk mengakses dan menghapus elemen-elemen dari antrian. Dalam setiap iterasi loop, elemen teratas dari antrian (elemen dengan prioritas tertinggi dalam min-heap, yaitu nilai terkecil) ditampilkan menggunakan cout dan kemudian dihapus dari antrian menggunakan pop(). Loop ini berlanjut hingga antrian kosong, yang ditunjukkan dengan kondisi pq.empty() menjadi false. Dengan demikian, program ini menampilkan elemen-elemen antrian dalam urutan menaik dari yang terkecil ke yang terbesar (1, 5, 10, 20, 30). 

### Heaps

```C++
#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[index] > heap[parent(index)]) {
            swap(heap[index], heap[parent(index)]);
            index = parent(index);
        }
    }

    void heapifyDown(int index) {
        int largest = index;
        int leftChild = left(index);
        int rightChild = right(index);

        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }
        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

    int parent(int index) { return (index - 1) / 2; }
    int left(int index) { return 2 * index + 1; }
    int right(int index) { return 2 * index + 2; }

public:
    void insert(int element) {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    void removeMax() {
        if (heap.size() > 0) {
            heap[0] = heap.back();
            heap.pop_back();
            heapifyDown(0);
        }
    }

    int getMax() {
        if (heap.size() > 0) {
            return heap[0];
        }
        return -1; // or throw an exception
    }

    void displayHeap() {
        for (int i : heap) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap h;

    h.insert(15);
    h.insert(26);
    h.insert(7);
    h.insert(36);
    h.insert(11);

    cout << "Heap elements: ";
    h.displayHeap();

    cout << "Maximum element: " << h.getMax() << endl;

    h.removeMax();

    cout << "Heap elements after removing max: ";
    h.displayHeap();

    return 0;
}
```

#### Output
![out2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8e0878b3-1ec5-4731-bc13-bcaabeae339f)

#### Screenshot code
![contoh2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/cc4ec4a1-9b16-4ba3-9596-9c86ec641fe8)

<p align="justify">Pogram di atas mengimplementasikan struktur data heap khususnya max-heap. Dalam kelas MaxHeap, kita menggunakan vektor heap untuk menyimpan elemen-elemen heap. Fungsi heapifyUp() digunakan untuk mempertahankan properti heap dengan membandingkan elemen yang baru dimasukkan dengan elemen induknya, dan jika elemen anak lebih besar, maka terjadi pertukaran hingga elemen berada di posisi yang benar. Fungsi heapifyDown() melakukan kebalikannya saat elemen maksimum dihapus, dengan membandingkan elemen akar dengan elemen anaknya dan menukar mereka jika diperlukan hingga properti heap terpenuhi kembali. Fungsi parent(), left(), dan right() digunakan untuk mendapatkan indeks dari elemen induk, anak kiri, dan anak kanan dari elemen saat ini. Fungsi insert() menambahkan elemen baru ke heap dan memastikan properti heap tetap terjaga dengan memanggil heapifyUp(). Fungsi removeMax() menghapus elemen maksimum (akar heap) dengan menggantinya dengan elemen terakhir dan kemudian memanggil heapifyDown() untuk menjaga properti heap. Fungsi getMax() mengembalikan elemen maksimum dari heap, sementara displayHeap() digunakan untuk menampilkan semua elemen heap. Dalam fungsi main(), beberapa elemen (15, 26, 7, 36, dan 11) dimasukkan ke dalam heap. Elemen-elemen heap kemudian ditampilkan, diikuti oleh penghapusan elemen maksimum (36), dan heap kembali ditampilkan setelah penghapusan (26, 15, 7, 11). 

## Kesimpulan
<p align="justify">Priority queue adalah struktur data di mana setiap elemen memiliki prioritas tertentu. Elemen-elemen dalam priority queue diakses berdasarkan prioritas mereka, bukan berdasarkan urutan waktu. Elemen dengan prioritas lebih tinggi diakses terlebih dahulu daripada elemen dengan prioritas lebih rendah. Dapat diimplementasikan menggunakan berbagai struktur data, termasuk array, linked list, dan heap. Heap adalah struktur data yang sering digunakan untuk mengimplementasikan priority queue. Heap adalah struktur data pohon yang memenuhi properti heap, di mana setiap simpul memiliki nilai yang lebih besar (atau lebih kecil) dari nilai semua simpul di bawahnya. Heap dapat berupa max heap, di mana elemen terbesar berada di akar, atau min heap, di mana elemen terkecil berada di akar. Operasi dasar pada heap meliputi penyisipan (insert), ekstraksi nilai maksimum (atau minimum), perubahan prioritas, dan penghapusan elemen. Heap dapat diimplementasikan menggunakan array, di mana posisi elemen-elemen dalam array mengikuti aturan khusus untuk menjaga properti heap. Pentingnya priority queue dalam pemrosesan data dengan prioritas dan bagaimana heap, sebagai salah satu struktur data yang sering digunakan untuk mengimplementasikan priority queue, memfasilitasi operasi-operasi penting seperti penyisipan, ekstraksi nilai maksimum (atau minimum), perubahan prioritas, dan penghapusan elemen dengan efisien.


## Referensi

[1] Wijaya, Adi, et al (2020). Perbandingan Metode Implementasi Antrian Prioritas Menggunakan Array dan Linked List." Jurnal Sistem Informasi, 6(2), 31-36.

[2] Huang, X., & Wang, L. (2022). An Improved Min-Heap Algorithm for Finding the Median in Real-Time. Information Processing Letters, 198, 102794.

[3] Khoirunnisa, F., & Syahputra, M. (2019). Implementasi Algoritma Heap Sort untuk Mengurutkan Data pada Sistem Informasi Akademik. Jurnal Ilmiah Teknik Informatika Universitas Muhammadiyah Sumatera Utara, 6(2), 181-186.
