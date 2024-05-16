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
