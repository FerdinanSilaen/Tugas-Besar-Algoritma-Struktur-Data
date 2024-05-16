# <h1 align="center">Tugas Besar Algoritma & Struktur Data</h1>
# <h1 align="center">CPMK 2 – SubCPMK 4</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>


### <p align="justify">1. Berikan penjelasan dari struct dan buatlah sebuah contoh program dari struct!

<p align="justify"> Secara umum, struktur atau struct dalam pemrograman adalah fitur yang memungkinkan pengelompokkan beberapa variabel dengan berbagai tipe data ke dalam satu unit yang lebih besar. Ini memungkinkan pembuatan tipe data baru yang terdiri dari anggota-anggota dengan tipe data yang berbeda. Struct dalam bahasa pemrograman sering juga disebut sebagai rekaman (record) dalam beberapa konteks. Ini karena struktur tersebut menggabungkan beberapa variabel dengan tipe data yang berbeda ke dalam satu entitas yang terorganisir. Konsep ini mirip dengan bagaimana sebuah "rekaman" dalam dunia nyata bisa memiliki beberapa atribut yang berbeda, misalnya sebuah rekaman mahasiswa bisa memiliki atribut nama, NIM, fakultas, dan program studi. Dalam pemrograman, kita menggunakan struktur untuk merepresentasikan entitas semacam itu dalam program komputer. Dengan struct, kita bisa mengatur data kita dengan lebih terstruktur. Bayangkan jika kita memiliki banyak informasi tentang produk dalam sebuah toko. Dengan struct, seseorang bisa mengelompokkan semua informasi ini menjadi satu entitas yang lebih besar, seperti produk. Ini membuatnya lebih mudah untuk memahami dan mengelola data. Ada beberapa keuntungan menggunakan struct diantaranya: 

### 1.  Pengelompokkan Data

<p align="justify">Struct memungkinkan kita untuk mengelompokkan data terkait bersama-sama. Ini sangat berguna ketika Anda memiliki sejumlah variabel yang saling terkait dan ingin memperlakukan mereka sebagai satu kesatuan. Misalnya, dalam pengelompokan mahaiswa di kelas, Anda dapat menggunakan struct untuk menyimpan informasi seperti nama, NIM, umur, asal daerah dan informasi lainnya dalam satu unit.

### 2. Representasi Objek yang Lebih Mudah

<p align="justify">Dalam pemrograman berorientasi objek, struct sering digunakan untuk merepresentasikan objek dalam program. Setiap anggota struct dapat mewakili atribut atau sifat objek tertentu, sehingga struct secara efektif mewakili objek tersebut. Misalnya, Anda dapat menggunakan struct untuk membuat representasi objek motor, dengan anggota-anggota seperti merek, model, tahun, dan warna.

### 3. Fleksibilitas

 <p align="justify">Struct memungkinkan Anda untuk menyimpan berbagai jenis data dalam satu unit. Anda dapat memiliki anggota struct dengan tipe data yang berbeda-beda, seperti integer, float, string, atau bahkan struct lain. Ini memberikan fleksibilitas dalam desain dan penggunaan struktur, sehingga Anda dapat membuat struktur yang sesuai dengan kebutuhan spesifik program Anda.

### Contoh penggunaan struct

#### Full Code Screenshoot
![full1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/d20b5b67-f6c8-4c29-be0f-202212b3dacc)

```C++
#include <iostream>
using namespace std;

// Mendefinisikan struktur buku
struct buku {
  string judulBuku[3]; 
  string pengarang[3]; 
  string penerbit[3]; 
  int tebalHalaman[3]; 
  int hargaBuku[3]; 
};

int main() {
  buku favorit;

  // Mengisi data ke dalam variabel favorit
  favorit.judulBuku[0] = "The Alpha Girl's Guide";
  favorit.judulBuku[1] = "Laskar Pelangi";
  favorit.judulBuku[2] = "Sejarah Dunia yang Disembunyikan";

  favorit.pengarang[0] = "Henry Manampiring";
  favorit.pengarang[1] = "Andrea Hirata";
  favorit.pengarang[2] = "Jonathan Black";

  favorit.penerbit[0] = "Gagas Media";
  favorit.penerbit[1] = "Laskar Pustaka";
  favorit.penerbit[2] = "Alvabet";

  favorit.tebalHalaman[0] = 253;
  favorit.tebalHalaman[1] = 336;
  favorit.tebalHalaman[2] = 636;

  favorit.hargaBuku[0] = 79000;
  favorit.hargaBuku[1] = 55000;
  favorit.hargaBuku[2] = 135000;

  // Menampilkan informasi buku favorit
  cout << "\tDaftar Buku Favorit Saya" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "\nBuku ke-" << i + 1 << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku[i] << endl;
    cout << "\tPengarang : " << favorit.pengarang[i] << endl;
    cout << "\tPenerbit : " << favorit.penerbit[i] << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman[i] << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku[i] << endl;
  }

  return 0;
}
```

#### Output
![out1](https://github.com/FerdinanSilaen/Tugas-Besar-Algoritma-Struktur-Data/assets/161483534/63724f95-761e-4515-87b0-57c418b60f3b)

<p align="justify">Kode di atas merupakan implementasi program sederhana struct yang mengelola data buku favorit dalam sebuah struktur. Struktur buku memiliki beberapa anggota yang merepresentasikan informasi tentang buku, seperti judul, pengarang, penerbit, tebal halaman, dan harga. Pada fungsi main, sebuah objek favorit dari tipe buku dibuat. Data buku favorit diisi ke dalam objek favorit menggunakan indeks array. Setiap elemen array judulBuku, pengarang, penerbit, tebalHalaman, dan hargaBuku merepresentasikan informasi tentang satu buku. Misalnya, buku pertama memiliki judul "The Alpha Girl's Guide", pengarang "Henry Manampiring", dan seterusnya. Setelah data buku favorit diisi, program menampilkan informasi buku favorit tersebut ke layar. Dalam loop for, setiap buku diakses satu per satu, dan informasinya ditampilkan dengan menggunakan cout.