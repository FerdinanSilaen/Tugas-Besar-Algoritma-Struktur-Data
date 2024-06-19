<h1 align="center">Rekursif</h1>
<p align="center">Ferdinan Silaen</p>
<p align="center">2311110068</p>

## Dasar Teori
<p align="justify">Rekursif adalah salah satu proses pengulangan yang melibatkan fungsi atau prosedur yang memanggil dirinya sendiri. Dalam konteks ini, pemanggilan fungsi terjadi secara berulang, membentuk suatu siklus di mana setiap iterasi menghasilkan panggilan rekursif baru. Namun, yang penting di sini adalah adanya suatu kondisi terminasi yang menentukan kapan proses rekursif harus berhenti [1]. Tanpa kondisi terminasi yang tepat, fungsi rekursif akan terus memanggil dirinya sendiri hingga mencapai batas memori yang dapat menampung jumlah panggilan rekursif tersebut.

<p align="justify">Dibandingkan dengan pendekatan iteratif, kode rekursif cenderung lebih singkat dan seringkali lebih mudah dipahami. Kelebihan ini terutama terasa saat menangani masalah kompleks yang dapat dipecahkan menjadi sub-masalah yang mirip. Pemikiran rekursif dapat menyederhanakan solusi untuk masalah seperti pengurutan, pencarian, dan penjelajahan data. Misalnya, ketika kita menghadapi masalah seperti pengurutan, kita dapat membagi masalah menjadi sub-masalah kecil yang lebih mudah ditangani, seperti membagi array menjadi dua bagian, kemudian mengurutkan masing-masing bagian secara terpisah. Pendekatan ini, dikenal sebagai divide-and-conquer, secara alami terlentang untuk pemikiran rekursif, di mana pemecahan masalah menjadi sub-masalah kecil memungkinkan kita untuk merangkai kembali solusi secara terbalik. Namun, penting untuk diingat bahwa rekursi harus digunakan dengan bijak. Meskipun memiliki kelebihan seperti kejelasan dan kemudahan implementasi, rekursi juga dapat menimbulkan overhead kinerja dan bahaya terhadap batas memori jika tidak dikelola dengan baik. Oleh karena itu, saat menggunakan rekursi, penting untuk memastikan bahwa ada mekanisme terminasi yang jelas dan bahwa fungsi rekursif tidak menimbulkan risiko kelebihan panggilan rekursif yang tak terkendali.

<p align="justify">Fungsi rekursif adalah konsep dalam pemrograman di mana sebuah fungsi dapat memanggil dirinya sendiri untuk menyelesaikan masalah. Misalnya, dalam menghitung faktorial dari sebuah angka, fungsi faktorial akan memanggil dirinya sendiri dengan angka yang lebih kecil, terus-menerus mengalikan angka tersebut dengan angka yang lebih kecil hingga mencapai angka 1, yang merupakan kondisi dasar. Rekursi memerlukan hati-hati karena jika tidak ada kondisi dasar yang tepat, maka fungsi akan terus memanggil dirinya sendiri tanpa henti, mengakibatkan kelebihan beban memori dan menyebabkan program menjadi tidak responsif. Oleh karena itu, penting untuk memastikan bahwa setiap panggilan rekursif menuju kondisi dasar yang dapat dicapai.

![rekursif](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/79da8465-0698-4e98-b734-b6611eeb4e43)


#### Rekursif Langsung
<p align="justify">Rekursi langsung terjadi ketika fungsi memanggil dirinya sendiri secara langsung. Dalam rekursi langsung, fungsi memanggil versi dirinya sendiri dalam tubuh fungsi itu sendiri. Ini dapat dianggap sebagai proses pemecahan masalah di mana masalah besar dibagi menjadi masalah yang lebih kecil, yang kemudian diselesaikan dengan cara yang sama. Contoh yang umum dari rekursi langsung adalah perhitungan faktorial. Dalam fungsi faktorial, ketika fungsi dipanggil dengan suatu angka, ia akan memanggil dirinya sendiri dengan angka yang lebih kecil, kemudian mengalikan angka tersebut dengan hasil rekursifnya sendiri. Proses ini terus berlanjut sampai mencapai kondisi dasar, biasanya ketika angka yang diproses menjadi 1 [2]. Rekursi langsung dapat lebih mudah dipahami dan diimplementasikan karena konsepnya yang sederhana dan langsung. Namun, perlu diingat bahwa rekursi langsung sering kali dapat menimbulkan masalah kinerja, terutama jika tidak dikelola dengan baik. Karena setiap pemanggilan fungsi akan menambahkan frame baru ke dalam tumpukan pemanggilan, dapat menyebabkan overhead memori yang signifikan jika jumlah panggilan rekursif sangat besar. Oleh karena itu, penting untuk memastikan bahwa kondisi dasar tercapai dengan baik dan mempertimbangkan efisiensi kinerja saat menggunakan rekursi langsung.

![rekursif  langsung png](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/8c965093-d605-45c5-890f-cc6928eaccdf)

#### Kelebihan 

- Rekursi langsung sering kali lebih mudah dipahami karena konsepnya langsung dan jelas. Ini membuat kode lebih mudah untuk dipelajari dan dimodifikasi.

- Konsep rekursi langsung dapat diimplementasikan dengan relatif sederhana dan mudah dimengerti. Ini membuatnya menjadi pilihan yang baik untuk masalah-masalah yang membutuhkan solusi rekursif.

- Biasanya, rekursi langsung memerlukan kode yang lebih sedikit dibandingkan dengan rekursi tidak langsung untuk mencapai solusi yang sama.

#### Kekurangan 
- Rekursi langsung sering kali memerlukan lebih banyak sumber daya (seperti memori) dan dapat mengakibatkan overhead kinerja yang signifikan, terutama ketika jumlah panggilan rekursif sangat besar.

- Jika tidak dikelola dengan baik, rekursi langsung dapat menyebabkan stack overflow, yaitu kondisi di mana tumpukan pemanggilan melebihi kapasitas memori yang tersedia, yang dapat menyebabkan program berhenti bekerja.

- Dalam kasus masalah yang kompleks, rekursi langsung mungkin sulit dipahami dan memerlukan lebih banyak perencanaan dan pemahaman tentang struktur program.


#### Rekursif Tidak Langsung
<p align="justify">Rekursi tidak langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang kemudian secara tidak langsung memanggil fungsi aslinya kembali. Dalam rekursi tidak langsung, ada setidaknya dua fungsi yang terlibat dalam proses rekursif. Salah satu fungsi memanggil fungsi lain, yang kemudian dapat memanggil fungsi pertama kembali atau fungsi lainnya. Rekursi tidak langsung adalah suatu pola dalam pemrograman di mana sebuah fungsi memanggil fungsi lain, yang kemudian secara tidak langsung memanggil kembali fungsi aslinya atau fungsi lainnya [3]. Dalam rekursi tidak langsung, terlibat setidaknya dua fungsi yang saling berinteraksi dalam proses rekursif. Contohnya adalah dalam struktur data seperti pohon, di mana sebuah fungsi dapat memanggil dirinya sendiri untuk menelusuri setiap simpul dalam pohon, tetapi pada saat yang sama, fungsi tersebut juga dapat memanggil fungsi lain untuk menelusuri cabang-cabang pohon. Rekursi tidak langsung dapat lebih kompleks dalam pemahaman dan implementasinya, namun, konsep ini dapat menjadi lebih rumit dalam pemahaman dan implementasinya dibandingkan dengan rekursi langsung karena keterlibatan fungsi-fungsi yang berbeda serta hubungan antara mereka. Oleh karena itu, penggunaan rekursi tidak langsung sering kali memerlukan perencanaan yang lebih cermat dan pemahaman yang lebih mendalam tentang struktur program dan masalah yang dihadapi.

![rekursif tidak langsung png](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/90eb86af-81ca-4499-9e6c-c7a89210b807)

#### Kelebihan 
- Rekursi tidak langsung memberikan fleksibilitas tambahan karena memungkinkan interaksi antara fungsi-fungsi yang berbeda, yang dapat menghasilkan solusi yang lebih fleksibel untuk masalah-masalah yang kompleks.

- Dalam beberapa kasus, rekursi tidak langsung dapat memiliki kinerja yang lebih baik karena pengelolaan memori yang lebih baik dan pengurangan overhead yang terkait dengan rekursi langsung.

- Dalam beberapa situasi, rekursi tidak langsung dapat menyederhanakan implementasi kode untuk masalah yang kompleks dengan memungkinkan pemisahan fungsi-fungsi yang berbeda.

#### Kekurangan
- Rekursi tidak langsung sering kali lebih kompleks dalam pemahaman dan implementasinya karena melibatkan interaksi antara fungsi-fungsi yang berbeda.

- Kode yang menggunakan rekursi tidak langsung mungkin lebih sulit dipahami daripada kode dengan rekursi langsung karena keterlibatan fungsi-fungsi yang berbeda.

- Rekursi tidak langsung mungkin menghasilkan lebih banyak kode daripada rekursi langsung karena adanya keterlibatan fungsi-fungsi tambahan.

## Contoh Program
### Contoh 1 (Rekursif langsung)

```C++
#include <iostream>

using namespace std;

// Fungsi rekursif langsung untuk menghitung faktorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    cout << "Faktorial dari " << number << " adalah " << factorial(number) << endl;
    return 0;
}
```

#### Output
![out a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/88eb6941-0294-4c05-912f-ae8b7abe953b)

#### Full Screenshot
![contoh a](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/b6a37c00-41f3-48e2-80ae-fb9c5a4d22ce)

<p align="justify">Kode di atas adalah contoh dari fungsi rekursif langsung yang menghitung faktorial dari sebuah bilangan. Program ini menggunakan pustaka iostream untuk input dan output, dengan namespace std untuk kemudahan penggunaan objek seperti cout. Fungsi factorial menerima satu argumen integer n dan memiliki dua bagian utama, basis rekursi dan panggilan rekursif. Basis rekursi memeriksa apakah n kurang dari atau sama dengan 1, dan dalam kasus ini, fungsi mengembalikan nilai 1, menghentikan rekursi. Jika n lebih besar dari 1, fungsi mengembalikan hasil perkalian n dengan hasil dari factorial(n - 1), yang merupakan panggilan rekursif dari fungsi tersebut dengan argumen yang dikurangi 1. Fungsi mai mendeklarasikan variabel number dengan nilai 5 dan memanggil fungsi factorial untuk menghitung faktorial dari 5, kemudian mencetak hasilnya. Disebut rekursif langsung karena fungsi factorial memanggil dirinya sendiri secara langsung dalam tubuhnya tanpa perantara, terus berlanjut hingga mencapai kondisi dasar yang menghentikan rekursi.


### Contoh 2 (Rekursif Tak Langsung)

```C++
#include <iostream>

using namespace std;

// Fungsi pertama yang memanggil fungsi kedua
void functionA(int n);

// Fungsi kedua yang memanggil fungsi pertama
void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n - 1);  // Panggil functionA dengan n - 1
    }
}

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n / 2);  // Panggil functionB dengan n / 2
    }
}

int main() {
    int number = 10;
    cout << "Output rekursif tidak langsung: ";
    functionA(number);  // Mulai rekursi dengan functionA
    cout << endl;
    return 0;
}
```

#### Output
![out b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/edad4a56-11eb-4834-915e-04cd8896670c)

#### Full Screenshot
![contoh b](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/161483534/046c9ab6-2985-4d0d-a485-0bdb146aeb16)


<p align="justify">Kode yang diberikan mendemonstrasikan rekursi tak langsung, di mana dua fungsi saling memanggil satu sama lain. Fungsi main memulai eksekusi dengan mendefinisikan number sebagai 10 dan memanggil functionA(10). Dalam functionA, selama n lebih besar dari 0, nilai n dicetak, dan kemudian functionB dipanggil dengan argumen n dibagi 2 (n / 2). Pada pemanggilan pertama, functionA(10) mencetak 10 dan memanggil functionB(5). Dalam functionB, selama n lebih besar dari 0, nilai n dicetak, dan kemudian functionA dipanggil dengan argumen n dikurangi 1 (n - 1). Maka functionB(5) mencetak 5 dan memanggil functionA(4). Proses ini berlanjut dengan functionA(4) mencetak 4 dan memanggil functionB(2), kemudian functionB(2) mencetak 2 dan memanggil functionA(1), dan akhirnya functionA(1) mencetak 1 dan memanggil functionB(0), di mana kondisi dasar tercapai dan rekursi berhenti. Oleh karena itu, output yang dihasilkan adalah "10 5 4 2 1", dengan setiap nilai dicetak saat fungsi tersebut dipanggil dalam urutan rekursi tak langsung.

## Kesimpulan
<p align="justify">Rekursi dalam pemrograman dapat digunakan dalam dua bentuk: rekursi langsung dan tidak langsung. Rekursi langsung terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung untuk menyelesaikan tugas tertentu. Ini menghasilkan implementasi yang sederhana dan langsung karena tidak ada perantara fungsi lain yang terlibat. Meskipun demikian, rekursi langsung biasanya lebih efisien dalam hal kinerja karena tidak melibatkan lapisan tambahan dari fungsi perantara. Selain itu, rekursi langsung cenderung lebih mudah dipahami dan diimplementasikan karena tidak ada kompleksitas tambahan yang disebabkan oleh perantara fungsi. Di sisi lain, rekursi tidak langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang kemudian memanggil fungsi pertama kembali. Ini memerlukan perantara fungsi lain untuk melakukan pemanggilan rekursif, yang memberikan fleksibilitas dalam cara pemanggilan fungsi. Rekursi tidak langsung dapat menyediakan tingkat abstraksi yang lebih tinggi, memungkinkan pemisahan antara fungsi dasar dan fungsi perantara. Namun, implementasinya cenderung lebih kompleks dan memerlukan lebih banyak pemikiran untuk memahami alur kerja program. Dalam pemilihan antara rekursi langsung dan tidak langsung, penting untuk mempertimbangkan kompleksitas masalah yang dihadapi, preferensi programmer, serta pertimbangan kinerja dan kejelasan kode.

## Referensi

[1] Sugiarto, P (2021). Penggunaan Rekursif Langsung dan Tidak Langsung dalam Penghitungan Faktorial. Jurnal Didaktis Indonesia, 2(1), 18-19.

[2] A. J. O'Brien dan G. M. Marakas (2021). "Analisis Penggunaan Rekursif Langsung dan Tidak Langsung dalam Sistem Informasi" . Jurnal Rekursif, 6(2), 7-11.

[3] KRahman, M. A., & Chowdhury, S. A. (2020). "Penerapan Rekursi Tidak Langsung dalam Pemrosesan Citra Digital." Jurnal Teknik Elektro, 4(3), 15-17.
