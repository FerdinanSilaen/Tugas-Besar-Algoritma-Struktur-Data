<h1 align="center">Hash Table</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>

## Dasar Teori
<p align="justify">Hash table merupakan struktur data yang secara asosiatif menyimpan data. Dalam hal ini, data disimpan dalam format array, di mana setiap nilai data memiliki nilai indeks uniknya sendiri. Akses data akan menjadi sangat cepat jika Anda mengetahui indeks dari data yang diinginkan. Hash table atau tabel hash juga memungkinkan pencarian data dengan sangat efisien. Hash table menggunakan fungsi hash untuk memetakan kunci (keys) ke lokasi di dalam tabel, yang memungkinkan akses cepat ke data yang terkait dengan kunci tersebut. Hash table mengimplementasikan sebuah set asosiatif, yaitu sebuah koleksi pasangan kunci-nilai (key-value pairs), di mana setiap kunci unik dipetakan ke suatu nilai [1]. Hash table menggunakan fungsi hash untuk menghitung indeks dari sebuah array atau list, yang kemudian digunakan untuk menyimpan pasangan kunci-nilai tersebut. Dengan demikian, hash table menjadi struktur data di mana operasi penyisipan dan pencarian data terjadi sangat cepat terlepas dari ukuran data tersebut. Hash table menggunakan array sebagai media penyimpanan dan tekniknya untuk menghasilkan indeks suatu elemen yang dimasukkan atau ditempatkan.

![hahs table](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/31c3c81f-9580-4786-995b-0d4e6b430630)

#### Fungsi Hash table
<p align="justfy">Fungsi hash adalah algoritma yang mengonversi input data dengan panjang variabel menjadi output data dengan panjang tetap. Dalam konteks hash table, input data biasanya berupa kunci (key) yang berfungsi untuk mengidentifikasi pasangan kunci-nilai (key-value pair) secara unik. Output dari fungsi hash adalah hash code, yang merupakan integer yang menentukan lokasi atau indeks dalam array yang mendasari hash table.

- Pemrosesan Kunci (Key Processing)

    <p align="justify"> Kunci bisa berupa berbagai jenis data seperti string, integer, atau objek lainnya. Fungsi hash harus mampu menangani berbagai jenis kunci ini dan mengubahnya menjadi nilai yang dapat digunakan untuk menghasilkan hash code. Tujuan utamanyay adalah untuk mengambil kunci input dan mengonversinya menjadi bentuk yang dapat diproses oleh fungsi hash.

- Pemetaan ke Hash Code (Mapping to Hash Code)

    <p align="justify">Fungsi hash memproses kunci untuk menghasilkan hash code, sebuah nilai integer yang digunakan untuk menentukan posisi penyimpanan dalam hash table. Proses ini sering melibatkan operasi matematika seperti modulo untuk memastikan hash code berada dalam rentang indeks array. Tujuannya untuk menghasilkan hash code dari kunci input.

- Mengurangi Tabrakan (Collision Reduction)

    <p align= "justify"> Meskipun sulit untuk menghindari tabrakan sepenuhnya, fungsi hash yang baik akan meminimalkan frekuensi tabrakan. Strategi untuk mengurangi tabrakan melibatkan desain fungsi hash yang menghasilkan distribusi hash code yang lebih acak dan merata. Tujuannya untuk meminimalkan insiden di mana dua kunci atau lebi menghasilkan hash code yang sama.

![hash table1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/815bb01f-dff5-49f4-b781-8dd82585f114)

#### Teknik Teknik  dalam Hash Table

- Hashing 

    <p align="justify">Hashing adalah proses mengubah kunci atau string karakter menjadi nilai lain yang biasanya berupa angka, yang disebut hash code. Proses ini menggunakan fungsi hash yang memetakan kunci ke ukuran tabel tertentu dan kemudian menggunakan nilai hash code sebagai indeks untuk menyimpan elemen dalam hash table. Hash table menyimpan pasangan kunci-nilai dalam array atau list yang dapat diakses melalui indeks yang ditentukan oleh hash code.  Kunci yang dapat berupa string, angka, atau objek lainnya diberikan sebagai input ke fungsi hash. Karena jumlah kunci yang mungkin tidak terbatas, fungsi hash berfungsi untuk memetakan kunci-kunci tersebut ke ruang indeks tabel yang terbatas.

- Linear probling

    <p align="justify">Linear probing adalah salah satu metode untuk menangani tabrakan (collision) dalam hash table. Tabrakan terjadi ketika dua kunci berbeda menghasilkan hash code yang sama, sehingga diarahkan ke indeks yang sama dalam hash table [2]. Dalam linear probing, ketika terjadi tabrakan, algoritma akan mencari slot kosong terdekat dalam tabel secara linear (sekuensial). Jika slot pada indeks yang dihasilkan oleh fungsi hash sudah terisi, algoritma akan memeriksa slot berikutnya hingga menemukan slot kosong

<p align="justify">Hashing dan teknik linear probing merupakan komponen fundamental dalam implementasi hash table. Hashing memungkinkan pemetaan kunci ke indeks tabel dengan cepat, sementara linear probing menyediakan mekanisme efektif untuk menangani tabrakan. Meskipun linear probing memiliki kekurangan seperti clustering, teknik ini tetap populer karena kesederhanaan dan efisiensinya dalam banyak kasus penggunaan [3].

#### Operasi pada Hash Table

<p align="justify"> Operasi-operasi dasar pada hash table mencakup penyisipan (insertion), pencarian (searching), dan penghapusan (deletion).

- Penyisipan (Insertion)

    <p align="justify"> Untuk menyisipkan elemen baru, fungsi hash digunakan untuk menentukan indeks dari kunci elemen tersebut dalam tabel. Jika indeks tersebut kosong, elemen disimpan di sana. Jika tidak, diperlukan teknik penanganan tabrakan. Langkahnya dapat berupa menghitung hash code untuk kunci menggunakan fungsi hash. Gunakan hash code untuk menentukan indeks dalam tabel. Jika slot kosong, simpan elemen di slot tersebut.Jika slot sudah terisi, gunakan teknik penanganan tabrakan untuk menemukan slot kosong.

- Pencarian (Searching)

    <p align= "justify"> Untuk mencari elemen dengan kunci tertentu, fungsi hash digunakan untuk menentukan indeks dari kunci tersebut dalam tabel. Jika elemen ditemukan di indeks tersebut, elemen tersebut dikembalikan. Jika tidak, diperlukan teknik penanganan tabrakan. Langkah-langkah dapat berupa, hitung hash code untuk kunci menggunakan fungsi hash. Gunakan hash code untuk menentukan indeks dalam tabel. Periksa elemen di indeks tersebut.Jika elemen tidak cocok, gunakan teknik penanganan tabrakan untuk mencari elemen di slot lain yang relevan.

- Penghapusan (Deletion)

    <p align="justify">Untuk menghapus elemen dengan kunci tertentu, fungsi hash digunakan untuk menentukan indeks dari kunci tersebut dalam tabel. Setelah elemen ditemukan, elemen tersebut dihapus, dan teknik penanganan tabrakan memastikan konsistensi struktur tabel. Langkah-langkah dapat berupa,  hitung hash code untuk kunci menggunakan fungsi hash. Gunakan hash code untuk menentukan indeks dalam tabel. Temukan elemen di indeks tersebut atau slot lain yang relevan. Hapus elemen dan perbarui struktur tabel sesuai dengan teknik penanganan tabrakan.

#### Kelebihan Hash Table :
- Menghemat Ruang Penyimpanan : Hash table dapat menghemat ruang penyimpanan dengan cara mengkonversi data menjadi nilai hash yang lebih kecil.

- Mengurangi Waktu Pengembangan : Hash table dapat mengurangi waktu pengembangan dengan cara mengurangi kompleksitas kode.

- Efisiensi Waktu : Hash table dapat mengakses data dengan cepat dan efisien.

#### Kekurangan Hash Table 
- Collision : Hash table dapat mengalami collision ketika dua key memiliki nilai hash yang sama.

- Mengurangi Performa : Hash table dapat mengurangi performa jika tidak digunakan dengan benar.

## Contoh Program
### Contoh 1

```C++
#include <iostream>
#include <string>
using namespace std;

const int TABLE_SIZE = 10; // Ukuran tabel hash

class HashTable {
private:
    struct HashNode {
        string key;
        int value;
        HashNode(const string& key, int value) : key(key), value(value) {}
    };

    HashNode **table;
    int size;

public:
    HashTable() {
        size = TABLE_SIZE;
        table = new HashNode*[size]();
    }

    // Fungsi hash untuk kunci string
    int hashFunction(const string& key) {
        int hashVal = 0;
        for (char ch : key) {
            hashVal = (hashVal * 31 + ch) % size;
        }
        return hashVal;
    }

    // Fungsi untuk menambahkan elemen ke dalam hash table dengan linear probing
    void insert(const string& key, int value) {
        int hashVal = hashFunction(key);
        while (table[hashVal] != nullptr && table[hashVal]->key != key) {
            hashVal = (hashVal + 1) % size; // Cari posisi kosong dengan linear probing
        }
        if (table[hashVal] != nullptr) {
            delete table[hashVal]; 
        }
        table[hashVal] = new HashNode(key, value); 
    }

    // Fungsi untuk mencari elemen dalam hash table
    bool search(const string& key, int& value) {
        int hashVal = hashFunction(key);
        int initialHash = hashVal;
        while (table[hashVal] != nullptr) {
            if (table[hashVal]->key == key) { // Jika kunci ditemukan
                value = table[hashVal]->value;
                return true;
            }
            hashVal = (hashVal + 1) % size; // Linear probing untuk mencari sel berikutnya
            if (hashVal == initialHash) { 
                break;
            }
        }
        return false; // Jika kunci tidak ditemukan
    }

    // Fungsi untuk menghapus elemen dari hash table
    void remove(const string& key) {
        int hashVal = hashFunction(key);
        int initialHash = hashVal;
        while (table[hashVal] != nullptr) {
            if (table[hashVal]->key == key) { // Jika kunci ditemukan
                delete table[hashVal]; 
                table[hashVal] = nullptr; 
                return;
            }
            hashVal = (hashVal + 1) % size; // Linear probing untuk mencari sel berikutnya
            if (hashVal == initialHash) { 
                break;
            }
        }
    }

    // Fungsi untuk menampilkan isi hash table
    void display() {
        for (int i = 0; i < size; ++i) {
            if (table[i] != nullptr) {
                cout << "Tabel[" << i << "] = {" << table[i]->key << ", " << table[i]->value << "}" << endl;
            }
        }
    }
    ~HashTable() {
        for (int i = 0; i < size; ++i) {
            delete table[i];
        }
        delete[] table;
    }
};

// Contoh penggunaan hash table
int main() {
    HashTable hash;
    hash.insert("apel", 10);
    hash.insert("anggur", 20);
    hash.insert("salak", 30);
    hash.insert("mangga", 40);

    cout << "Isi hash table setelah penyisipan:" << endl;
    hash.display();

    int value;
    if (hash.search("anggur", value)) {
        cout << "Nilai untuk kunci 'anggur' adalah: " << value << endl;
    } else {
        cout << "Kunci 'anggur' tidak ditemukan dalam hash table." << endl;
    }

    hash.remove("anggur");
    cout << "Isi hash table setelah penghapusan kunci 'anggur':" << endl;
    hash.display();

    return 0;
}
```

#### Output
![out1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/e353fdc8-324f-45c3-ae76-b2534ff234cf)

#### Screenshot full
![contoh1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/7771499a-cea0-4541-b82f-254ffac9b2dc)

<p align="justify">Kode di atas mengimplementasikan struktur data hash table dengan teknik hashing menggunakan linear probing dalam bahasa C++. Kelas `HashTable` memiliki struktur `HashNode` yang menyimpan pasangan kunci-nilai dalam tabel hash dinamis. Konstruktor `HashTable` menginisialisasi tabel dengan ukuran `TABLE_SIZE` dan mengatur semua elemen menjadi `nullptr`. Metode `hashFunction` digunakan untuk menghitung posisi hash dari kunci string dengan menggunakan metode hash sederhana. Metode `insert` memasukkan elemen ke dalam hash table, menangani tabrakan dengan linear probing. Metode `search` mencari nilai yang terkait dengan kunci yang diberikan dalam hash table. Metode `remove` menghapus elemen dari hash table berdasarkan kunci. Metode `display` menampilkan semua elemen yang ada dalam hash table. Dalam fungsi `main`, contoh penggunaan hash table ditunjukkan dengan menyisipkan beberapa pasangan kunci-nilai, mencari nilai untuk kunci tertentu, menghapus sebuah kunci, dan menampilkan isi hash table setelah operasi-operasi tersebut. Hasil keluaran dari program ini adalah menampilkan isi hash table sebelum dan setelah penghapusan kunci 'anggur', serta nilai yang terkait dengan kunci 'anggur' yang ditemukan.

### Contoh 2
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Ridho", "1234");
    employee_map.insert("Evan", "5678");
    employee_map.insert("Leo", "91011");

    cout << "Nomer Hp Ridho : " << employee_map.searchByName("Ridho") << endl;
    cout << "Phone Hp Evan : " << employee_map.searchByName("Evan") << endl;

    employee_map.remove("Ridho");

    cout << "Nomer Hp Ridho setelah dihapus : " << employee_map.searchByName("Ridho") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
```

#### Output
![out2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/421fde84-ce98-4831-be23-c688f1aadd68)

#### Full Screenshot
![contoh2](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b86cc9f8-49d7-4011-a375-016f9024e217)

<p align="justify">Kode di atas mengimplementasikan struktur data hash table dengan teknik chaining menggunakan array dari vektor. Dalam hash table ini, setiap elemen (dalam hal ini, karyawan) disimpan menggunakan fungsi hash sederhana yang menghitung nilai hash dari nama karyawan. Fungsi hashFunc menggunakan pendekatan sederhana dengan menjumlahkan nilai ASCII dari karakter-karakter dalam nama dan kemudian mengambil modulo dari TABLE_SIZE untuk menentukan indeks dalam array table. Jika terjadi tabrakan hash (dua karyawan memiliki nilai hash yang sama), data disimpan dalam bentuk vektor yang berantai di indeks yang sama dalam table. Kelas HashMap memiliki array table yang berisi vektor dari pointer ke HashNode. Setiap HashNode menyimpan informasi berupa nama dan nomor telepon karyawan. Metode insert digunakan untuk menyisipkan data ke dalam hash table. Jika nama karyawan sudah ada dalam hash table, nomor teleponnya di-update. Metode remove menghapus data berdasarkan nama dari hash table dengan mencari dan menghapus node yang sesuai dari vektor pada indeks hash yang tepat. Metode searchByName digunakan untuk mencari nomor telepon berdasarkan nama karyawan. Fungsi ini mengembalikan nomor telepon jika nama ditemukan atau string kosong jika tidak. Di dalam fungsi main, objek HashMap dibuat dan digunakan untuk menambahkan beberapa data karyawan ke hash table menggunakan insert. Kemudian, dilakukan pencarian nomor telepon berdasarkan nama menggunakan searchByName. Salah satu entri (dalam kasus ini, entri untuk "Ridho") dihapus dari hash table menggunakan remove. Akhirnya, isi hash table ditampilkan ke layar menggunakan metode print. Penggunaan chaining dalam hash table memungkinkan penanganan efisien terhadap tabrakan hash dengan cara menumpuk data yang memiliki hash yang sama dalam vektor berantai. Pendekatan ini memungkinkan operasi pencarian dan penghapusan dalam waktu rata-rata O(1) untuk operasi dalam kasus yang optimal, membuatnya sangat cocok untuk menyimpan dan mengelola data dengan efisien berdasarkan kunci unik.

## Kesimpulan
<p align="justify">Hash table adalah struktur data yang digunakan untuk menyimpan data dalam bentuk pasangan kunci-nilai, di mana setiap elemen memiliki kunci unik. Ini memungkinkan akses cepat ke data dengan menggunakan fungsi hash untuk menghasilkan indeks unik untuk setiap kunci. Pada hash table juga mungkin terjadinya tabrakan. Tabrakan terjadi ketika dua kunci menghasilkan indeks yang sama dalam hash table. Untuk menangani tabrakan, teknik chaining sering digunakan, di mana data dengan indeks yang sama disimpan dalam bentuk linked list di indeks tersebut. Hash table mendukung operasi dasar seperti penambahan, penghapusan, dan pencarian data. Dengan menggunakan fungsi hash yang efisien, operasi-operasi ini dapat dilakukan dalam waktu konstan, membuat hash table sangat efisien untuk aplikasi yang membutuhkan akses cepat ke data. Hash table digunakan dalam berbagai aplikasi, termasuk basis data, implementasi kamus, caching, dan pencarian data dalam berbagai bahasa pemrograman. Namaun hash table juga memiliki beberapa kekurangann, salah satu keterbatasan hash table adalah penggunaan memori yang dapat menjadi signifikan tergantung pada faktor pengisian tabel (load factor). Selain itu, pemilihan fungsi hash yang tidak efisien dapat mengurangi kinerja hash table secara keseluruhan.

## Referensi

[1] R. Gupta, V. Singh, 2022, "Hash Table: Data Structure to Make Search Fast," in International Journal of Computer Applications, vol. 108, no. 11, pp. 19-22, 2015. DOI: 10.5120/18994-4071.

[2] S. Sugiyanti, A. S. Budi, "Implementasi Tabel Hash untuk Pencarian Data pada Sistem Informasi," J. Informatika, vol. 1, no. 2, pp. 130-139, 2023.

[3] A. Firdaus, M. H. Maulana, R. Amrullah, "Analisis Pemanfaatan Hash Table dalam Optimasi Pencarian Data," J. Teknol. Inf. dan Ilmu Komput., vol. 7, no. 1, pp. 55-62, 2020.








