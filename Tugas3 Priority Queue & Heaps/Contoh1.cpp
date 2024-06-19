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