 <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Ferdinan Silaen</p>

## Dasar Teori
<p align="justify"> Antrian (queue) merupakan salah satu struktur data yang digunakan dalam ilmu komputer untuk mengorganisir dan mengelola kumpulan elemen. Konsep antrian mengikuti prinsip "First-In-First-Out" (FIFO), yang artinya elemen yang pertama dimasukkan ke dalam antrian akan menjadi yang pertama keluar saat dilakukan operasi penghapusan [1]. Dalam antrian, terdapat dua operasi utama yang dapat dilakukan: enqueue (penambahan elemen) dan dequeue (penghapusan elemen). Operasi enqueue dilakukan dengan menambahkan elemen baru ke ujung belakang antrian, yang sering disebut sebagai "rear" atau "tail". Sementara itu, operasi dequeue dilakukan dengan menghapus elemen yang berada di ujung depan antrian, yang biasa disebut "front" atau "head". Berikut adalah beberapa operasi dasar yang umum dilakukan pada antrian:

- Enqueue (Menambahkan Elemen)

    Operasi enqueue digunakan untuk menambahkan elemen baru ke dalam antrian. Elemen ini akan diletakkan di ujung belakang (rear) dari antrian. Ketika antrian kosong, elemen yang ditambahkan akan menjadi elemen pertama, dan jika antrian sudah berisi elemen, elemen baru akan ditempatkan setelah elemen terakhir. Operasi ini biasanya dilakukan dengan kompleksitas waktu yang konstan (O(1)).

- Dequeue (Menghapus Elemen)
    
    Operasi dequeue digunakan untuk menghapus dan mengembalikan elemen yang berada di ujung depan (front) dari antrian. Elemen ini akan dikeluarkan dari antrian setelah penghapusan. Setelah penghapusan, elemen yang berada di belakang elemen yang dihapus akan maju ke posisi depan. Operasi ini juga biasanya dilakukan dengan kompleksitas waktu yang konstan (O(1)) [2]. Langkah-langkah dalam operasi dequeue meliputi pemeriksaan apakah antrian kosong, penyimpanan elemen yang akan dihapus, pergeseran elemen-elemen lain ke posisi depan, pengurangan ukuran antrian, dan pengembalian nilai dari elemen yang dihapus.

- Front (Mendapatkan Elemen Depan)

    Operasi front digunakan untuk mendapatkan elemen yang berada di ujung depan (front) dari antrian tanpa menghapusnya. Ini berguna untuk melihat elemen pertama yang akan dikeluarkan saat operasi dequeue dilakukan. Operasi ini hanya membaca elemen di ujung depan tanpa mengubah struktur antrian, sehingga kompleksitas waktu yang diperlukan juga konstan (O(1)).

- IsEmpty (Memeriksa Antrian Kosong)

    Operasi isEmpty digunakan untuk memeriksa apakah antrian kosong atau tidak. Jika antrian tidak memiliki elemen, maka akan mengembalikan nilai true, dan jika antrian memiliki satu atau lebih elemen, maka akan mengembalikan nilai false. Operasi ini biasanya memiliki kompleksitas waktu konstan (O(1)), karena hanya perlu memeriksa apakah ada elemen di dalam antrian.

- IsFull (Memeriksa Antrian Penuh)

    Operasi isFull digunakan untuk memeriksa apakah antrian penuh atau tidak. Hal ini khususnya relevan dalam implementasi antrian berbasis array, di mana kapasitas antrian dibatasi oleh ukuran array yang digunakan. Jika antrian sudah mencapai kapasitas maksimumnya, maka akan mengembalikan nilai true, dan jika masih ada ruang kosong dalam antrian, maka akan mengembalikan nilai false. Kompleksitas waktu untuk operasi ini juga konstan (O(1)), karena hanya memeriksa kapasitas dan jumlah elemen yang ada dalam antrian.

- Size (Mendapatkan Jumlah Elemen)

    Operasi size digunakan untuk mendapatkan jumlah elemen yang saat ini ada di dalam antrian. Ini memberikan informasi tentang seberapa penuh atau kosongnya antrian. Operasi ini biasanya dilakukan dengan menghitung jumlah elemen secara langsung, sehingga memiliki kompleksitas waktu linier (O(n)), di mana n adalah jumlah elemen dalam antrian. Namun, beberapa implementasi dapat menyimpan jumlah elemen secara terpisah, sehingga operasi ini dapat dilakukan dengan kompleksitas waktu konstan (O(1)).

Implementasi antrian dapat dilakukan menggunakan berbagai struktur data, seperti array atau linked list, tergantung pada kebutuhan dan karakteristik aplikasi yang akan menggunakannya. Antrian umumnya digunakan dalam berbagai konteks, seperti pengelolaan tugas dalam sistem komputer, pengelolaan pesan dalam protokol komunikasi, dan pengelolaan antrian pelanggan dalam layanan pelayanan. Dalam sistem komputer, antrian digunakan untuk mengelola tugas-tugas yang harus dieksekusi oleh sistem. Misalnya, dalam sistem operasi, antrian digunakan untuk mengatur antrian proses yang menunggu untuk dieksekusi oleh CPU. Setiap kali sebuah proses dibuat atau berakhir, operasi enqueue dan dequeue dilakukan pada antrian proses [3].Dengan demikian, implementasi antrian dalam berbagai struktur data tidak hanya memberikan fleksibilitas dalam penggunaan, tetapi juga memungkinkan pengembangan aplikasi yang efisien.

Berikut adalah beberapa keunggulan dan kelemahan dari struktur data antrian (queue):

Keunggulan:
- Pengaturan yang Terstruktur

    Antrian menyediakan pengaturan yang terstruktur untuk penyimpanan dan pengelolaan data. Dengan prinsip FIFO (First-In-First-Out), antrian memastikan bahwa elemen-elemen diakses dan dihapus sesuai dengan urutan masuknya, sehingga memungkinkan pengolahan data yang adil dan terstruktur.


- Implementasi yang Fleksibel

    Antrian dapat diimplementasikan dengan berbagai cara, termasuk menggunakan array, linked list, atau struktur data lainnya, tergantung pada kebutuhan dan karakteristik aplikasi. Hal ini memberikan fleksibilitas dalam penggunaan dan adaptasi terhadap berbagai konteks aplikasi.

- Penghapusan Elemen yang Efisien

    Operasi dequeue pada antrian umumnya dapat dilakukan dengan kompleksitas waktu konstan (O(1)), terlepas dari jumlah elemen dalam antrian. Ini membuat penghapusan elemen dari antrian menjadi efisien, terutama dalam aplikasi yang membutuhkan respons cepat.

Kelemahan:

- Keterbatasan Akses

    Salah satu kelemahan utama dari antrian adalah keterbatasan akses yang terkait dengan sifat FIFO-nya. Karena hanya elemen yang berada di depan antrian yang dapat diakses dan dihapus, akses ke elemen di posisi tertentu dalam antrian tidaklah efisien. 

- Kinerja Terpengaruh oleh Ukuran Antrian

    Kinerja operasi enqueue dan dequeue dalam antrian terkadang dapat dipengaruhi oleh ukuran antrian. Pada implementasi antrian menggunakan array dengan ukuran tetap, operasi enqueue mungkin menjadi lambat jika antrian hampir penuh dan perlu dilakukan operasi realokasi memori.

## Guided 1

### Full code screenshoot
![fullguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/22a06d8e-6b82-4c6e-a910-69bd3a695fed)

```C++
#include <iostream>
#include <string>
using namespace std;

const int maksimalQueue = 5; // Maksimal Antrian
int front = 0; // Penanda Depan Antrian
int back = 0; // Penanda Belakang Antrian
string queueTeller[5]; // Deklarasi Antrian Teller

bool isFull() { // Pengecekan Antrian Sudah Penuh Atau Tidak
    if (back == maksimalQueue) {
        return true; // = 1
    } else {
        return false;
    }
}


bool isEmpty() { // Pengecekan Antrian Sudah Kosong Atau Tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Fungsi Menambahkan Antrian
    if (isFull()) {
        cout << "Antrian Sudah Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Fungsi Mengurangi Antrian
    if (isEmpty()) {
        cout << "Antrian Kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Fungsi Menghitung Banyak Antrian
    return back;
}

void clearQueue() { // Fungsi Menghapus Antrian
    if (isEmpty()) {
        cout << "Antrian Kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        front = 0;
        back = 0;
    }
}

void viewQueue() { // Fungsi Melihat Antrian
    cout << "Data Antrian Teller :" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (Kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    
    viewQueue();
    cout << "Jumlah Antrian = " << countQueue() << endl;
    
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah Antrian = " << countQueue() << endl;
    
    clearQueue();
    viewQueue();
    cout << "Jumlah Antrian = " << countQueue() << endl;
    
    return 0;
}
```
### Output 
![out guided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b33a2496-b731-4a1f-a9a0-59905aef53fd)

<p align="justify"> Pada bagian awal, kode mendeklarasikan variabel-variabel yang diperlukan, seperti maksimalQueue untuk menentukan batas maksimal antrian, front dan back untuk menandai posisi depan dan belakang antrian, serta array queueTeller sebagai wadah untuk menyimpan elemen-elemen antrian. Fungsi-fungsi yang didefinisikan dalam kode meliputi; isFull(), untuk memeriksa apakah antrian sudah penuh atau tidak. Jika back sudah mencapai batas maksimal antrian, maka antrian dianggap penuh. isEmpty(), untuk memeriksa apakah antrian kosong atau tidak. Jika back bernilai 0, maka antrian dianggap kosong. enqueueAntrian(string data), untuk menambahkan elemen baru ke dalam antrian. Jika antrian penuh, akan menampilkan pesan "Antrian Sudah Penuh". Jika antrian kosong, elemen baru akan ditempatkan di indeks 0. Jika tidak kosong, elemen baru akan ditempatkan di indeks back. dequeueAntrian(), untuk menghapus elemen dari depan antrian. Jika antrian kosong, akan menampilkan pesan "Antrian Kosong". Jika tidak kosong, elemen-elemen akan digeser ke depan untuk menghapus elemen pertama. countQueue(), untuk menghitung jumlah elemen yang ada dalam antrian. clearQueue(), untuk menghapus semua elemen dalam antrian dengan mengosongkan array dan mengatur front dan back kembali ke 0. viewQueue(), untuk menampilkan elemen-elemen dalam antrian beserta posisi mereka. Pada awalnya, dua elemen, "Andi" dan "Maya", dimasukkan ke dalam antrian. Setelah itu, fungsi viewQueue() dipanggil untuk menampilkan isi antrian. Dua nama tersebut ditampilkan dengan nomor posisi dalam antrian (dalam hal ini, nomor urutan 1 dan 2), diikuti dengan pesan "Jumlah Antrian = 2" yang menunjukkan bahwa ada dua elemen dalam antrian. Kemudian, dilakukan operasi dequeue untuk menghapus elemen pertama dari antrian, yaitu "Andi". Setelah itu, fungsi viewQueue() dipanggil kembali untuk menampilkan isi antrian yang tersisa. Hanya satu elemen yang tersisa dalam antrian, yaitu "Maya", ditampilkan dengan nomor posisi 1, dan pesan "Jumlah Antrian = 1" menunjukkan bahwa hanya ada satu elemen dalam antrian. Selanjutnya, dilakukan operasi clearQueue() untuk mengosongkan seluruh antrian. Karena antrian sudah kosong, maka pesan "Antrian Kosong" ditampilkan. Setelah itu, fungsi viewQueue() dipanggil kembali, yang akan menampilkan pesan "Antrian Kosong" lagi. Selain itu, pesan "Jumlah Antrian = 0" menunjukkan bahwa tidak ada elemen yang tersisa dalam antrian.

## Unguided 

<p align="justify"> 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list

### Full code screenshoot
![fullunguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/39dd9f09-a6da-4d16-ab14-c1432a7b7a77)


```C++
#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk simpul dalam linked list antrian
struct Node {
    string data;
    Node* next;
};

class Queue {
private:
    Node* front; // antrian depan
    Node* rear; // antrian belakang
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Menambahkan elemen ke antrian
    void enqueue(const string& data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Menghapus elemen dari antrian
    void dequeue() {
        if (!isEmpty()) {
            Node* temp = front;
            front = front->next;
            delete temp;
            if (front == nullptr) {
                rear = nullptr;
            }
        } else {
            cout << "Antrian kosong" << endl;
        }
    }

    // Memeriksa apakah antrian kosong
    bool isEmpty() {
        return front == nullptr;
    }

    // Menampilkan elemen-elemen dalam antrian
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* temp = front;
            cout << "Data Antrian Teller :" << endl;
            while (temp != nullptr) {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }

    // Menghitung jumlah elemen dalam antrian
    int countQueue() {
        int count = 0;
        Node* temp = front;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Menghapus semua elemen dalam antrian
    void clearQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queueTeller;

    queueTeller.enqueue("Andi");
    queueTeller.enqueue("Maya");

    queueTeller.displayQueue();
    cout << "Jumlah Antrian = " << queueTeller.countQueue() << endl;

    queueTeller.dequeue();
    queueTeller.displayQueue();
    cout << "Jumlah Antrian = " << queueTeller.countQueue() << endl;

    queueTeller.clearQueue();
    queueTeller.displayQueue();
    cout << "Jumlah Antrian = " << queueTeller.countQueue() << endl;

    return 0;
}
```
### Output
![out unguided1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/338bc549-8c17-4840-9af6-cb8cbcaa6d60)

<p align="justify">Kode tersebut adalah implementasi dari antrian (queue) menggunakan linked list. Dalam kode tersebut, terdapat struktur data Node yang merepresentasikan simpul (node) dalam linked list, yang terdiri dari dua bagian: data yang menyimpan informasi dari setiap elemen antrian, dan next yang merupakan pointer ke simpul berikutnya dalam linked list. Kelas Queue memiliki dua pointer, yaitu front yang menunjukkan elemen depan antrian dan rear yang menunjukkan elemen belakang antrian. Kelas ini memiliki beberapa fungsi yakni; enqueue(const string& data) untuk menambahkan elemen baru ke dalam antrian dengan membuat simpul baru dan menambahkannya ke bagian belakang antrian.
dequeue()untuk menghapus elemen dari depan antrian dengan menghapus simpul pertama dan menggeser front ke simpul berikutnya. isEmpty() guna memeriksa apakah antrian kosong dengan memeriksa apakah front bernilai nullptr. displayQueue() untuk menampilkan seluruh elemen dalam antrian dengan menelusuri linked list dari depan hingga belakang. countQueue() untuk menghitung jumlah elemen dalam antrian dengan menghitung jumlah simpul dalam linked list. clearQueue() untuk menghapus semua elemen dari antrian dengan terus melakukan operasi dequeue hingga antrian kosong. Pada fungsi main objek queueTeller dari kelas Queue dibuat. Kemudian, elemen-elemen ditambahkan ke dalam antrian menggunakan fungsi enqueue(). Setelah itu, antrian ditampilkan menggunakan fungsi displayQueue() dan jumlah elemen dalam antrian ditampilkan menggunakan fungsi countQueue(). Selanjutnya, elemen pertama dari antrian dihapus menggunakan fungsi dequeue(), dan operasi yang sama dilakukan untuk menampilkan antrian dan jumlah elemen dalam antrian. Terakhir, semua elemen dalam antrian dihapus menggunakan fungsi clearQueue(), dan status antrian yang kosong ditampilkan kembali. Maka output yang dihasilkan akan menampilkan pada yang pertama, elemen "Andi" dan "Maya" ditambahkan ke dalam antrian. Kemudian, kedua elemen tersebut ditampilkan dan jumlah elemen dalam antrian adalah 2. Setelah itu, elemen pertama "Andi" dihapus dari antrian, sehingga "Maya" menjadi satu-satunya elemen dalam antrian. Selanjutnya, antrian dikosongkan dan ditampilkan antrian kosong dengan jumlah elemen 0.

<p align="justify">2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa

### Full code screenshoot
![fullunguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8278c04e-e4c4-4232-af10-86ace273d20a)

```C++
#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk simpul dalam linked list antrian
struct Node {
    string nama;
    string nim;
    Node* next;
};

class Queue {
private:
    Node* front; // antrian depan
    Node* rear; // antrian belakang
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Menambahkan mahasiswa ke antrian
    void enqueue(const string& nama, const string& nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Menghapus mahasiswa dari antrian
    void dequeue() {
        if (!isEmpty()) {
            Node* temp = front;
            front = front->next;
            delete temp;
            if (front == nullptr) {
                rear = nullptr;
            }
        } else {
            cout << "Antrian kosong" << endl;
        }
    }

    // Memeriksa apakah antrian kosong
    bool isEmpty() {
        return front == nullptr;
    }

    // Menampilkan mahasiswa-mahasiswa dalam antrian
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* temp = front;
            cout << "Data Antrian Mahasiswa:" << endl;
            while (temp != nullptr) {
                cout << "Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
                temp = temp->next;
            }
        }
    }

    // Menghitung jumlah mahasiswa dalam antrian
    int countQueue() {
        int count = 0;
        Node* temp = front;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Menghapus semua mahasiswa dalam antrian
    void clearQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queueMahasiswa;

    queueMahasiswa.enqueue("Andi", "2411110011");
    queueMahasiswa.enqueue("Maya", "2411110012");

    queueMahasiswa.displayQueue();
    cout << "Jumlah Mahasiswa dalam Antrian = " << queueMahasiswa.countQueue() << endl;

    queueMahasiswa.dequeue();
    queueMahasiswa.displayQueue();
    cout << "Jumlah Mahasiswa dalam Antrian = " << queueMahasiswa.countQueue() << endl;

    queueMahasiswa.clearQueue();
    queueMahasiswa.displayQueue();
    cout << "Jumlah Mahasiswa dalam Antrian = " << queueMahasiswa.countQueue() << endl;

    return 0;
}
```
### Output
![out unguided2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/d414e790-f09c-425e-865b-9cbec8f77376)


<p align="justify">Kode di atas adalah implementasi dari antrian (queue) menggunakan linked list. Dalam kode tersebut, terdapat struktur data Node yang merepresentasikan simpul (node) dalam linked list, yang memiliki atribut nama untuk menyimpan nama mahasiswa dan nim untuk menyimpan nomor induk mahasiswa. Setiap simpul juga memiliki pointer next yang menunjukkan simpul berikutnya dalam linked list. Kelas Queue memiliki dua pointer, yaitu front yang menunjukkan elemen depan antrian dan rear yang menunjukkan elemen belakang antrian. Terdapat fungsi-fungsi yang digunakan untuk melakukan operasi pada antrian, antara lain;

- enqueue(const string& nama, const string& nim), digunakan untuk menambahkan mahasiswa ke dalam antrian. Fungsi ini membuat simpul baru untuk mahasiswa dengan nama dan NIM yang diberikan, lalu menambahkannya ke bagian belakang antrian.
- dequeue(), digunakan untuk menghapus mahasiswa dari depan antrian. Fungsi ini menghapus simpul pertama dari antrian dan menggeser penanda depan antrian ke simpul berikutnya.
- isEmpty(), digunakan untuk memeriksa apakah antrian kosong. Fungsi ini mengembalikan true jika antrian kosong (jika front bernilai nullptr), dan false jika tidak.
- displayQueue(), digunakan untuk menampilkan seluruh mahasiswa dalam antrian. Fungsi ini menelusuri linked list dari depan hingga belakang, dan menampilkan nama dan NIM dari setiap mahasiswa.
- countQueue(), digunakan untuk menghitung jumlah mahasiswa dalam antrian. Fungsi ini menghitung jumlah simpul dalam linked list antrian dan mengembalikan nilainya.
- clearQueue(), digunakan untuk menghapus semua mahasiswa dari antrian. Fungsi ini terus melakukan operasi dequeue() hingga antrian menjadi kosong.

Dalam fungsi main(), objek queueMahasiswa dari kelas Queue dibuat, dan dua mahasiswa (Andi dan Maya) ditambahkan ke dalam antrian menggunakan fungsi enqueue(). Selanjutnya, mahasiswa pertama (Andi) dihapus dari antrian menggunakan dequeue(). Kemudian, yang terakhir setelah semua mahasiswa dihapus dari antrian. Setiap tahap eksekusi yang dilakukan, data mahasiswa (NIM) dalam antrian beserta jumlah mahasiswa dalam antrian ditampilkan.

## Kesimpulan
<p align="justify">Antrian (queue) adalah struktur data yang memungkinkan penambahan elemen baru hanya di satu ujung (rear) dan penghapusan elemen dilakukan di ujung lain (front). Prinsip kerja antrian mengikuti konsep "First-In-First-Out" (FIFO), di mana elemen yang pertama kali masuk ke dalam antrian akan menjadi yang pertama keluar. Antrian dapat diimplementasikan menggunakan berbagai struktur data dasar, seperti array atau linked list, tergantung pada kebutuhan aplikasi dan kompleksitasnya. Implementasi menggunakan linked list umumnya lebih fleksibel dan efisien dalam menangani operasi enqueue dan dequeue, terutama saat ukuran antrian tidak pasti. Antrian menyediakan mekanisme yang efisien untuk mengatur dan mengelola data dalam urutan tertentu. Antrian memastikan bahwa elemen-elemen diproses sesuai urutan kedatangan mereka, yang penting dalam skenario seperti antrian panggilan atau pengolahan tugas. Dengan demikian, antrian adalah konsep yang sangat relevan dan berperan penting dalam berbagai aspek pemrograman, sistem terdistribusi, dan pengolahan data modern. Memahami prinsip-prinsip dan aplikasi antrian akan membantu dalam pengembangan solusi yang efisien dan skalabel untuk berbagai tantangan dalam dunia teknologi informasi.


## Referensi

[1] Puspitasari, D., & Wijayanto, H. (2020). Analisis dan Implementasi Struktur Data Antrian (Queue) dalam Pembangunan Aplikasi E-Pelayanan Berbasis Web. Jurnal Informatika Mulawarman, 13(2), 45-54.

[2] Wiratma, B. A., & Arymurthy, A. M. (2021). Perancangan dan Implementasi Struktur Data Antrian Prioritas pada Sistem Informasi Laboratorium. Jurnal Ilmiah Informatika, 5(1), 11-20.

[3] Pranoto, A., & Santoso, A. B. (2021). Implementasi Struktur Data Antrian Menggunakan Metode Array dan Linked List. Jurnal Ilmiah Teknologi Informasi Terapan (JITTER), 2(1), 1-10.

