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
