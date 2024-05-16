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
