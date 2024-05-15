#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeAndSort(vector<int>& A, vector<int>& B) {
    A.insert(A.end(), B.begin(), B.end());
    sort(A.begin(), A.end());
}

int main() {
    vector<int> A = {3, 1, 9, 7, 5};
    vector<int> B = {2, 8, 10, 4, 6};

    cout << "Array A sebelum merge: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int num : B) {
        cout << num << " ";
    }
    cout << endl;

    mergeAndSort(A, B);

    cout << "Gabungan array A dan B setelah Merge sort: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
