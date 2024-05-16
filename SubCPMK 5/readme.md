# <h1 align="center">Tugas Besar Algoritma & Struktur Data</h1>
# <h1 align="center">CPMK 2 – SubCPMK 5</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>


### <p align="justify">1.Buatlah sebuah fungsi program untuk menghilangkan duplikasi data pada unsorted linked list (single atau double atau circular)!

#### Full Code Screenshoot
![full1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/e66dca8e-02a8-4447-b441-a25634034b0c)

#### Kode Program :
```C++
#include <iostream>
#include <unordered_set>
using namespace std;

// Definisi Node dalam linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Fungsi untuk menghapus duplikasi dari linked list
void removeDuplicates(Node* head) {
    if (head == nullptr)
        return;

    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = nullptr;

    while (curr != nullptr) {
        // Jika elemen sudah terlihat sebelumnya, hapus node
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete curr;
        } else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
}

// Fungsi untuk menampilkan linked list
void displayList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Membuat linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(40);
    head->next->next->next->next->next = new Node(50);
    head->next->next->next->next->next->next = new Node(10);

    // Menampilkan linked list sebelum menghapus duplikasi
    cout << "Linked List sebelum menghapus duplikasi: ";
    displayList(head);

    // Memanggil fungsi untuk menghapus duplikasi
    removeDuplicates(head);

    // Menampilkan linked list setelah menghapus duplikasi
    cout << "Linked List setelah menghapus duplikasi: ";
    displayList(head);

    return 0;
}
```

#### Output
![out1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/30ed0d2d-7626-455b-9b33-50c8d0a40e70)

<p align="justify">Kita akan menggunakan linked list tunggal (single linked list) dalam contoh ini. Kita menggunakan struktur Node untuk merepresentasikan node dalam linked list. Setiap node memiliki dua bagian: data untuk menyimpan nilai data dan next untuk menunjuk ke node berikutnya dalam linked list. Fungsi removeDuplicates menerima pointer ke head dari linked list dan menghapus duplikasi dari linked list tersebut. Algoritma menggunakan hash table (dalam hal ini, unordered_set) untuk melacak elemen yang sudah terlihat. Jika sebuah elemen sudah terlihat sebelumnya, maka node tersebut dihapus dari linked list. Fungsi displayList digunakan untuk menampilkan isi linked list. Di dalam fungsi main, kita membuat linked list dengan beberapa nilai yang berulang. Kemudian kita menampilkan linked list sebelum dan setelah menghapus duplikasi. Hasil dari program ini adalah linked list sebelum dan setelah menghapus duplikasi. Setelah proses penghapusan duplikasi, linked list akan memiliki setiap nilai hanya satu kali.


### <p align="justify">2. Buatlah sebuah algoritma dan fungsi program untuk menghapus node di tengah single linked list!

#### Algoritma
- Periksa apakah linked list kosong atau hanya memiliki satu node. Jika ya, keluarkan pesan kesalahan atau kembalikan saja.
- Tentukan node sebelum node yang akan dihapus.
- Ubah pointer next dari node sebelumnya untuk menunjuk langsung ke node setelah node yang akan dihapus.
- Bebaskan memori yang dialokasikan untuk node yang dihapus.

#### Full Code Screenshoot
![full2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/f2967a76-7912-413d-bcfd-4a894467c0ab)

#### Kode Program :
```C++
#include <iostream>
using namespace std;

// Definisi Node dalam linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Fungsi untuk menambahkan node baru di awal linked list
void addNode(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk menampilkan linked list
void displayList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Fungsi untuk menghapus node di tengah linked list
void deleteMiddleNode(Node* midNode) {
    if (midNode == nullptr || midNode->next == nullptr) {
        cout << "Node tidak dapat dihapus!" << endl;
        return;
    }

    Node* temp = midNode->next;
    midNode->data = temp->data;
    midNode->next = temp->next;
    delete temp;
}

int main() {
    Node* head = nullptr;

    // Menambahkan beberapa node ke linked list
    addNode(head, 53);
    addNode(head, 49);
    addNode(head, 34);
    addNode(head, 26);
    addNode(head, 11);

    // Menampilkan linked list sebelum penghapusan
    cout << "Linked List sebelum penghapusan: ";
    displayList(head);

    // Menemukan node di tengah linked list (node dengan data 34)
    Node* middleNode = head->next->next;
    
    // Menghapus node di tengah linked list
    deleteMiddleNode(middleNode);

    // Menampilkan linked list setelah penghapusan
    cout << "Linked List setelah penghapusan: ";
    displayList(head);

    return 0;
}
```

#### Output 
![out2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/8f91f371-b434-40a1-8087-af86f27cf973)

<p align="justify">Kode tersebut merupakan implementasi dari sebuah linked list. Linked list adalah struktur data linear yang terdiri dari serangkaian node, dimana setiap node memiliki dua bagian utama: data yang menyimpan nilai, dan pointer yang menunjuk ke node berikutnya dalam urutan. Dalam kode tersebut, struktur Node digunakan untuk merepresentasikan setiap node, dengan int data untuk menyimpan nilai data dan Node* next untuk menunjuk ke node berikutnya. Fungsi addNode digunakan untuk menambahkan node baru di awal linked list dengan cara mengalokasikan memori untuk node baru, menetapkan next dari node baru ke head yang lama, dan memperbarui head untuk menunjuk ke node baru tersebut. Fungsi displayList digunakan untuk menampilkan isi linked list dengan melakukan traversal dari head hingga mencapai node terakhir. Fungsi deleteMiddleNode menghapus node di tengah linked list dengan mengganti data dan pointer next dari node yang akan dihapus dengan data dan pointer next dari node setelahnya, lalu menghapus node setelahnya dari memori. Dalam fungsi main, beberapa node ditambahkan ke linked list menggunakan addNode, kemudian linked list ditampilkan sebelum dan setelah penghapusan node di tengahnya menggunakan deleteMiddleNode. Dengan demikian, output dari program tersebut menunjukkan linked list sebelum dan setelah penghapusan node di tengahnya.


### <p align="justify">3. Buatlah sebuah program untuk mengecek apakah linked list adalah sebuah palindrom!

#### Full Code Screenshoot
![full3](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/a888b22a-3ae6-4b85-a1b0-e0e0c9756d83)

#### Kode Program 

```C++
#include <iostream>
#include <stack>
using namespace std;

// Definisi Node dalam linked list
struct Node {
    char data;
    Node* next;
    Node(char val) : data(val), next(nullptr) {}
};

// Fungsi untuk menambahkan karakter ke linked list
void addChar(Node*& head, char ch) {
    Node* newNode = new Node(ch);
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk membalikkan linked list
void reverseList(Node*& head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    head = prev;
}

// Fungsi untuk mengecek apakah linked list adalah sebuah palindrom
bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return true;

    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    Node* secondHalf = slow->next;
    reverseList(secondHalf);

    Node* firstHalf = head;
    while (secondHalf != nullptr) {
        if (firstHalf->data != secondHalf->data)
            return false;
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    cin >> kalimat;

    Node* head = nullptr;

    // Menambahkan setiap karakter kalimat ke linked list
    for (char c : kalimat) {
        addChar(head, c);
    }

    // Mengecek apakah linked list adalah sebuah palindrom
    if (isPalindrome(head)) {
        cout << "Kalimat \"" << kalimat << "\" merupakan sebuah palindrom." << endl;
    } else {
        cout << "Kalimat \"" << kalimat << "\" bukan merupakan sebuah palindrom." << endl;
    }

    return 0;
}
```

#### Output
![out3a](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/0a3fecb3-edd3-4fc7-ad60-c169261c9b6c)
![out3b](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/0cd66863-76de-428a-aeda-50eaa8b8053e)


<p align="justify">Pada awalnya, program meminta pengguna untuk memasukkan sebuah kalimat. Kemudian, setiap karakter dari kalimat tersebut ditambahkan ke linked list menggunakan fungsi addChar, di mana setiap karakter akan menjadi sebuah node dalam linked list. Setelah semua karakter dimasukkan ke linked list, program memanggil fungsi isPalindrome untuk memeriksa apakah linked list yang merepresentasikan kalimat tersebut merupakan sebuah palindrom. Fungsi ini bekerja dengan cara mencari titik tengah linked list menggunakan metode "runner technique", kemudian membalikkan bagian kedua dari linked list. Setelah itu, program membandingkan setiap node pada bagian pertama dan kedua dari linked list untuk memastikan bahwa kalimat tersebut adalah sebuah palindrom. Output yang dihasilkan akan bergantung pada kalimat yang kita masukkan. Jika kalimat tersebut merupakan sebuah palindrom, maka program akan menampilkan pesan bahwa kalimat tersebut adalah sebuah palindrom. Sebaliknya, jika kalimat tersebut bukan merupakan sebuah palindrom, program akan menampilkan pesan bahwa kalimat tersebut bukan merupakan sebuah palindrom.