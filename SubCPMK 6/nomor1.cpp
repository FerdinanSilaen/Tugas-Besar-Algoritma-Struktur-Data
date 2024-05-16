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
