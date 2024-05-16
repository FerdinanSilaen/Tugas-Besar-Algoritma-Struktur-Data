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
