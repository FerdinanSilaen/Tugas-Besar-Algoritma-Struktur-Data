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

