#include <iostream>
#include <unordered_set>

using namespace std;

bool cekDuplikat(int arr[], int panjangArr) {
    unordered_set<int> elemenSet;
    for (int i = 0; i < panjangArr; i++) {
        if (elemenSet.find(arr[i]) != elemenSet.end()) {
            return true;
        }
        elemenSet.insert(arr[i]);
    }
    return false;
}

int main(void) {
    int arrA[] = {2, 1, 3, 4};
    int panjangArr = sizeof(arrA) / sizeof(arrA[0]);
    cout << cekDuplikat(arrA, panjangArr);
    return 0;
}
