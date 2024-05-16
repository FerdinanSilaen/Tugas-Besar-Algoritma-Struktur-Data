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
