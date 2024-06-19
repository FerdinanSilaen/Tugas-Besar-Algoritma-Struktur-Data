#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[index] > heap[parent(index)]) {
            swap(heap[index], heap[parent(index)]);
            index = parent(index);
        }
    }

    void heapifyDown(int index) {
        int largest = index;
        int leftChild = left(index);
        int rightChild = right(index);

        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }
        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

    int parent(int index) { return (index - 1) / 2; }
    int left(int index) { return 2 * index + 1; }
    int right(int index) { return 2 * index + 2; }

public:
    void insert(int element) {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    void removeMax() {
        if (heap.size() > 0) {
            heap[0] = heap.back();
            heap.pop_back();
            heapifyDown(0);
        }
    }

    int getMax() {
        if (heap.size() > 0) {
            return heap[0];
        }
        return -1; // or throw an exception
    }

    void displayHeap() {
        for (int i : heap) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap h;

    h.insert(15);
    h.insert(26);
    h.insert(7);
    h.insert(36);
    h.insert(11);

    cout << "Heap elements: ";
    h.displayHeap();

    cout << "Maximum element: " << h.getMax() << endl;

    h.removeMax();

    cout << "Heap elements after removing max: ";
    h.displayHeap();

    return 0;
}

