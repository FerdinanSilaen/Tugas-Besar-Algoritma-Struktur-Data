# <h1 align="center">Tugas Besar Algoritma & Struktur Data</h1>
# <h1 align="center">CPMK 2 – SubCPMK 7</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>


### <p align="justify">1. Tulislah sebuah program dari operasi queue seperti enqueue/add, dequeue/remove, isEmpty, isFull, dll(min 5)!

#### Full Code Screenshoot
![full1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/382fc5d0-3a58-4913-84da-737dece88b09)

#### Kode Program :
```C++
#include <iostream>
using namespace std;

#define MAX_SIZE 5

class Queue {
private:
    int front, rear, size;
    int data[MAX_SIZE];

public:
    Queue() {
        front = rear = -1;
        size = 0;
    }

    // Fungsi untuk menambahkan elemen ke dalam queue (enqueue)
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue penuh! Enqueue gagal." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        data[rear] = item;
        size++;
        cout << "Elemen " << item << " berhasil ditambahkan ke dalam queue." << endl;
    }

    // Fungsi untuk menghapus elemen dari queue (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong! Dequeue gagal." << endl;
            return;
        }

        int removedItem = data[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        size--;
        cout << "Elemen " << removedItem << " berhasil dihapus dari queue." << endl;
    }

    // Fungsi untuk mengecek apakah queue kosong
    bool isEmpty() {
        return size == 0;
    }

    // Fungsi untuk mengecek apakah queue penuh
    bool isFull() {
        return size == MAX_SIZE;
    }

    // Fungsi untuk mendapatkan elemen yang ada di depan queue tanpa menghapusnya
    int peek() {
        if (isEmpty()) {
            cout << "Queue kosong! Tidak ada elemen yang bisa dilihat." << endl;
            return -1;
        }
        return data[front];
    }

    // Fungsi untuk menampilkan isi dari queue
    void display() {
        if (isEmpty()) {
            cout << "Queue kosong!" << endl;
            return;
        }
        cout << "Isi queue: ";
        int i = front;
        while (i != rear) {
            cout << data[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << data[rear] << endl;
    }
};

int main() {
    Queue q;

    // Menambahkan beberapa elemen ke dalam queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Menampilkan isi queue
    q.display();

    // Menghapus elemen dari queue
    q.dequeue();
    q.dequeue();

    // Menampilkan isi queue setelah dequeue
    q.display();

    // Menambahkan elemen baru
    q.enqueue(60);

    // Menampilkan isi queue setelah enqueue
    q.display();

    return 0;
}
```

#### Output
![out1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/871d1bed-bdb2-47fb-aeba-c6f23a875648)


<p align="justify">Kode di atas merupakan implementasi dari sebuah Queue menggunakan pendekatan array. Berikut adalah penjelasan singkat mengenai setiap bagian kode:

<p align="justify">1. Kelas Queue. Kelas ini memiliki beberapa variabel anggota dan fungsi-fungsi yang mendukung operasi pada queue.

- front, rear, dan size adalah variabel untuk menyimpan indeks dari depan dan belakang queue serta ukuran queue.
data adalah array yang digunakan untuk menyimpan elemen-elemen queue.
- Konstruktor Queue() digunakan untuk menginisialisasi nilai awal dari variabel anggota.
- Fungsi-fungsi enqueue, dequeue, isEmpty, isFull, peek, dan display digunakan untuk operasi-operasi pada queue.

<p align="justify">2. enqueue(int item). Fungsi ini digunakan untuk menambahkan elemen baru ke dalam queue. Jika queue penuh, maka pesan "Queue penuh! Enqueue gagal." akan ditampilkan. Jika queue masih memiliki kapasitas, elemen baru akan ditambahkan ke posisi rear queue.

<p align="justify">3. dequeue(): Fungsi ini digunakan untuk menghapus elemen dari depan queue. Jika queue kosong, maka pesan "Queue kosong! Dequeue gagal." akan ditampilkan. Jika queue tidak kosong, elemen di depan queue akan dihapus dan front akan diperbarui.

<p align="justify">isEmpty(): Fungsi ini digunakan untuk mengecek apakah queue kosong. Jika ukuran queue adalah 0, maka fungsi akan mengembalikan nilai true, dan jika tidak, akan mengembalikan nilai false.

<p align="justify">isFull(): Fungsi ini digunakan untuk mengecek apakah queue penuh. Jika ukuran queue sama dengan ukuran maksimum queue, maka fungsi akan mengembalikan nilai true, dan jika tidak, akan mengembalikan nilai false.

<p align="justify">peek(): Fungsi ini digunakan untuk melihat elemen yang berada di depan queue tanpa menghapusnya. Jika queue kosong, pesan "Queue kosong! Tidak ada elemen yang bisa dilihat." akan ditampilkan.

<p align="justify">display(): Fungsi ini digunakan untuk menampilkan isi dari queue secara berurutan mulai dari elemen yang berada di depan queue hingga elemen yang berada di belakang queue. Jika queue kosong, pesan "Queue kosong!" akan ditampilkan.

### <p align="justify">2. Sebuah selter hewan terlantar, yang mana hanya menerima kucing dan anjing, menerapkan konsep “first in, first out” dalam proses adopsi. Orang-orang yang hendak mengadopsi harus mengikuti aturan berikut : 1. mengadopsi hewan yang paling “tua” (berdasarkan waktu masuk ke selter) dan tidak dapat memilih kucing atau anjing; 2. memilih antara kucing atau anjing, namun akan menerima yang paling tua. Buatlah data struktur untuk mengimplementasikan kondisi tersebut, silahkan menggunakan beberapa operasi queue seperti enquee, dequeueAny, dequeueDog, dan dequeueCat.


#### Full Code Screenshoot
![full2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/601f3b07-45a8-4b98-a866-b5ffd8932e07)


#### Kode Program :
```C++
#include <queue>
#include <string>
#include <iostream>

using namespace std;

// Struktur Untuk Mewakili Hewan
struct Pet {
    string type;
    string name;
    int age;
};

// Data Struktur Untuk Mengimplementasikan Selter Hewan
class Shelter {
private:
    queue<Pet> shelterQueue;

public:
    // Fungsi Untuk Menambahkan Hewan Ke Selter
    void enqueue(Pet pet) {
        shelterQueue.push(pet);
    }

    // Fungsi Untuk Mengadopsi Hewan Yang Paling Tua
    Pet dequeueAny() {
        if (shelterQueue.empty()) {
            return Pet();
        }
        Pet oldestPet = shelterQueue.front();
        shelterQueue.pop();
        return oldestPet;
    }

    // Fungsi Untuk Mengadopsi Hewan Kucing Yang Paling Tua
    Pet dequeueCat() {
        if (shelterQueue.empty()) {
            return Pet();
        }
        queue<Pet> tempQueue;
        Pet oldestCat;
        while (!shelterQueue.empty()) {
            Pet pet = shelterQueue.front();
            shelterQueue.pop();
            if (pet.type == "Cat") {
                oldestCat = pet;
            } else {
                tempQueue.push(pet);
            }
        }
        while (!tempQueue.empty()) {
            shelterQueue.push(tempQueue.front());
            tempQueue.pop();
        }
        return oldestCat;
    }

    // Fungsi Untuk Mengadopsi Hewan Anjing Yang Paling Tua
    Pet dequeueDog() {
        if (shelterQueue.empty()) {
            return Pet();
        }
        queue<Pet> tempQueue;
        Pet oldestDog;
        while (!shelterQueue.empty()) {
            Pet pet = shelterQueue.front();
            shelterQueue.pop();
            if (pet.type == "Dog") {
                oldestDog = pet;
            } else {
                tempQueue.push(pet);
            }
        }
        while (!tempQueue.empty()) {
            shelterQueue.push(tempQueue.front());
            tempQueue.pop();
        }
        return oldestDog;
    }

    // Fungsi Untuk Menampilkan Semua Hewan di Selter Beserta Umurnya
    void displayAllPets() {
        queue<Pet> tempQueue = shelterQueue;
        cout << "Semua Hewan di Shelter:" << endl;
        while (!tempQueue.empty()) {
            Pet pet = tempQueue.front();
            cout << pet.name << " (" << pet.type << ") - " << pet.age << " tahun" << endl;
            tempQueue.pop();
        }
        cout << endl;
    }
};

int main() {
    Shelter shelter;

    // Menambahkan Hewan Ke Shelter
    Pet dog1 = { "Dog", "Bimbim", 5};
    Pet cat1 = { "Cat", "Nye nye", 3 };
    Pet dog2 = { "Dog", "Coco", 7 };
    Pet cat2 = { "Cat", "Boby", 6 };
    Pet dog3 = { "Dog", "Haciko", 7 };
    Pet cat3 = { "Cat", "Milo",  5};

    shelter.enqueue(dog1);
    shelter.enqueue(cat1);
    shelter.enqueue(dog2);
    shelter.enqueue(cat2);
    shelter.enqueue(dog3);
    shelter.enqueue(cat3);

    // Menampilkan Semua Hewan di Shelter Beserta Umurnya
    shelter.displayAllPets();

    // Mengadopsi Hewan Tertua
    Pet adoptedPet = shelter.dequeueAny();
    if (!adoptedPet.name.empty()) {
        cout << "Hewan Yang Diadopsi : " << adoptedPet.name << " (" << adoptedPet.type << ") (" << adoptedPet.age << ")" << endl;
    } else {
        cout << "Shelter Kosong" << endl;
    }

    return 0;
}
```

#### Output 
![out2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/39c2b1a0-0156-46ec-a2f1-4f878f90b65f)

<p align="justify">Kode diatas merupakan implementasi sederhana dari struktur data antrian (queue). Antrian (queue) adalah struktur data yang mengikuti prinsip "First-In-First-Out" (FIFO), yang berarti elemen pertama yang dimasukkan ke dalam antrian akan menjadi elemen pertama yang dikeluarkan. Dalam kode tersebut, terdapat sebuah struktur data Pet yang digunakan untuk mewakili informasi tentang hewan, termasuk jenis hewan (type), nama hewan (name), dan usia hewan (age). Selanjutnya, terdapat sebuah kelas bernama Shelter, yang merepresentasikan shelter hewan. Kelas ini memiliki sebuah antrian (queue) yang menyimpan hewan-hewan yang berada di dalam shelter. Ada beberapa metode dalam kelas Shelter, seperti enqueue untuk menambahkan hewan ke dalam shelter, dequeueAny untuk mengadopsi hewan tertua dari shelter, dequeueCat untuk mengadopsi hewan kucing tertua, dequeueDog untuk mengadopsi hewan anjing tertua, dan displayAllPets untuk menampilkan semua hewan yang ada di dalam shelter beserta usia masing-masing. Fungsi main digunakan untuk mengeksekusi berbagai operasi pada shelter, termasuk menambahkan hewan ke dalamnya, menampilkan informasi tentang semua hewan di dalam shelter, dan mengadopsi hewan tertua dari shelter. 