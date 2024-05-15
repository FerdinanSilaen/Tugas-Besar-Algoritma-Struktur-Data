#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Fungsi untuk mengurutkan karakter dalam string
string sortString(string str) {
    sort(str.begin(), str.end());
    return str;
}

// Fungsi untuk memeriksa apakah dua string adalah anagram atau tidak
bool isAnagram(string str1, string str2) {
    // Jika panjang kedua string tidak sama, bukan anagram
    if (str1.length() != str2.length())
        return false;

    str1 = sortString(str1);
    str2 = sortString(str2);

    
    return (str1 == str2);
}

int main() {
    string str1, str2;

    cout << "Masukkan string pertama: ";
    cin >> str1;
    cout << "Masukkan string kedua: ";
    cin >> str2;

    if (isAnagram(str1, str2))
        cout << "Kedua string adalah Anagram." << endl;
    else
        cout << "Kedua string bukan Anagram." << endl;

    return 0;
}
