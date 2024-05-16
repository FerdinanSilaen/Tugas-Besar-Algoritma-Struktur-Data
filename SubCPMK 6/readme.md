# <h1 align="center">Tugas Besar Algoritma & Struktur Data</h1>
# <h1 align="center">CPMK 2 – SubCPMK 6</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>


### <p align="justify">1. Tulislah sebuah program dari operasi stack seperti pop, push, isEmpty, isFull, dll(min 5)!

#### Full Code Screenshoot
![full1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/72d0c030-0da5-40e4-b8aa-680de54d1e13)

#### Kode Program :
```C++
#include <iostream>
using namespace std;

struct Stack {
    int data[100];
    int top;
};

// Fungsi Untuk Memeriksa Apakah Stack Kosong
bool isEmpty(Stack *s) {
    return s->top == 0;
}

// Fungsi Untuk Memeriksa Apakah Stack Penuh
bool isFull(Stack *s) {
    return s->top == 100;
}

// Fungsi Untuk Menambahkan Elemen Ke Stack (Push)
void push(Stack *s, int nilai) {
    if (isFull(s)) {
        cout << "Stack Sudah Penuh!" << endl;
    } else {
        s->data[s->top++] = nilai;
    }
}

// Fungsi Untuk Mengambil Elemen Dari Stack (Pop)
int pop(Stack *s) {
    if (isEmpty(s)) {
        cout << "Stack Sudah Kosong!" << endl;
        return -1;
    } else {
        return s->data[--s->top];
    }
}

// Fungsi Untuk Melihat Elemen Teratas (Peek)
int peek(Stack *s) {
    if (isEmpty(s)) {
        cout << "Stack Sudah Kosong!" << endl;
        return -1;
    } else {
        return s->data[s->top - 1];
    }
}

// Fungsi Untuk Menghitung Ukuran Stack 
int size(Stack *s) {
    return s->top;
}

// Fungsi Untuk Menampilkan Isi Stack
void printStack(Stack *s) {
    if (isEmpty(s)) {
        cout << "Stack Sudah Kosong!" << endl;
    } else {
        cout << "Isi Data Stack: ";
        for (int i = s->top - 1; i >= 0; i--) {
            cout << s->data[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Inisiasi Stack
    Stack s;
    s.top = 0;

    // Menambahkan Beberapa Elemen Ke Stack
    push(&s, 26);
    push(&s, 78);
    push(&s, 85);
    push(&s, 125);
    push(&s, 134);

    printStack(&s);
    cout << "Elemen Teratas (Peek): " << peek(&s) << endl;
    cout << "Ukuran Stack: " << size(&s) << endl;

    cout << "Elemen Yang Diambil (Pop): " << pop(&s) << endl;
    printStack(&s);

    return 0;
}
```

#### Output
![out1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/7dc179d2-4194-4fbc-93be-2a5a59d47c1f)

<p align="justify">Kode di atas adalah implementasi dari stack menggunakan array. Stack adalah struktur data linear yang mengikuti prinsip "Last In, First Out" (LIFO), yang berarti elemen terakhir yang dimasukkan akan menjadi elemen pertama yang dikeluarkan. Beberapa fungsi yang ada pada kode di atas:

- isEmpty: Memeriksa apakah stack kosong. Mengembalikan true jika top adalah 0.
- isFull: Memeriksa apakah stack penuh. Mengembalikan true jika top adalah 100.
- push: Menambahkan elemen ke puncak stack jika belum penuh. Meningkatkan nilai top setelah penambahan.
- pop: Menghapus dan mengembalikan elemen teratas stack jika tidak kosong. Menurunkan nilai top setelah penghapusan. Menghapus dan menampilkan elemen teratas (134).
- peek: Mengembalikan elemen teratas stack tanpa menghapusnya. Menampilkan elemen teratas tanpa menghapusnya (134).
- size: Mengembalikan jumlah elemen dalam stack, yaitu nilai top.
- printStack: Mencetak semua elemen stack dari puncak ke bawah. Menampilkan elemen-elemen setelah satu elemen diambil (125 85 78 26).

<p align="justify">Dengan menggunakan fungsi-fungsi tersebut, pengguna dapat melakukan operasi-operasi dasar pada stack, seperti menambahkan elemen baru, mengambil elemen teratas, dan memeriksa sifat stack (apakah kosong atau penuh).


### <p align="justify">2. Tulislah sebuah program untuk mensortir sebuah stack, sehingga item dengan nilai terkecil menjadi top pada stack tersebut! Diperbolehkan menggunakan tambahan temporary stack, namun tidak diperbolehkan untuk menyalin dari struktur data yang lain seperti array. Program stack yang dibuat dapat menggunakan operasi stack seperti push, pop, peek, dan isEmpty.


#### Full Code Screenshoot
![full2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/45631283-8588-485b-9292-63448702094f)

#### Kode Program :
```C++
#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk mengurutkan stack secara ascending
void sortStack(stack<int>& s) {
    // Stack sementara untuk penyimpanan sementara elemen yang diurutkan
    stack<int> tempStack;

    while (!s.empty()) {
        // Mengambil elemen teratas dari stack awal
        int temp = s.top();
        s.pop();

        // Memindahkan elemen dari stack sementara ke stack utama
        while (!tempStack.empty() && tempStack.top() > temp) {
            s.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }

    // Menyalin kembali elemen-elemen dari stack sementara ke stack utama
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

// Fungsi untuk menampilkan isi stack
void printStack(stack<int> s) {
    cout << "Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(26);
    s.push(-10);
    s.push(41);
    s.push(8);
    s.push(-6);

    cout << "Stack sebelum diurutkan:" << endl;
    printStack(s);

    // Mengurutkan stack
    sortStack(s);

    cout << "Stack setelah diurutkan:" << endl;
    printStack(s);

    return 0;
}
```

#### Output 
![out2](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/e4a4bbb8-9c6c-4041-aa98-27f6f92fe009)

<p align="justify">Kode diatas pada tahap awal, kita mendefinisikan dua buah fungsi. Fungsi sortStack bertugas untuk mengurutkan stack yang diberikan secara ascending, sedangkan fungsi printStack digunakan untuk menampilkan isi dari stack. Dalam fungsi sortStack, kita menggunakan pendekatan dengan memanfaatkan sebuah stack sementara (tempStack) untuk menyimpan sementara elemen-elemen yang sudah diurutkan. Iterasi dilakukan selama stack awal (s) tidak kosong. Pada setiap iterasi, elemen teratas dari stack awal (s) diambil menggunakan s.top(), kemudian elemen tersebut dihapus dari stack awal dengan s.pop(). Elemen yang diambil akan dimasukkan ke dalam stack sementara (tempStack) dengan memastikan bahwa elemen-elemen yang ada di dalamnya tetap terurut secara ascending. Hal ini dilakukan dengan memindahkan elemen-elemen dari tempStack kembali ke stack awal (s) jika diperlukan. Setelah seluruh elemen dari stack awal telah diambil dan diurutkan ke dalam stack sementara, kita mengembalikan elemen-elemen tersebut kembali ke stack awal. Ini dilakukan dengan mengambil elemen-elemen dari stack sementara dan memasukkannya ke dalam stack awal. Di dalam fungsi main, kita membuat sebuah stack (s) dan memasukkan beberapa nilai ke dalamnya. Selanjutnya, kita menampilkan isi dari stack sebelum diurutkan dengan menggunakan fungsi printStack, kemudian mengurutkan stack tersebut dengan memanggil fungsi sortStack, dan terakhir menampilkan isi dari stack setelah diurutkan.
