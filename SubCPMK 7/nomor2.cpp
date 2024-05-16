#include <queue>
#include <string>
#include <iostream>

using namespace std;

// Struktur Untuk Mewakili Hewan
struct Pet {
    string type;
    string name;
    int age;
};

// Data Struktur Untuk Mengimplementasikan Selter Hewan
class Shelter {
private:
    queue<Pet> shelterQueue;

public:
    // Fungsi Untuk Menambahkan Hewan Ke Selter
    void enqueue(Pet pet) {
        shelterQueue.push(pet);
    }

    // Fungsi Untuk Mengadopsi Hewan Yang Paling Tua
    Pet dequeueAny() {
        if (shelterQueue.empty()) {
            return Pet();
        }
        Pet oldestPet = shelterQueue.front();
        shelterQueue.pop();
        return oldestPet;
    }

    // Fungsi Untuk Mengadopsi Hewan Kucing Yang Paling Tua
    Pet dequeueCat() {
        if (shelterQueue.empty()) {
            return Pet();
        }
        queue<Pet> tempQueue;
        Pet oldestCat;
        while (!shelterQueue.empty()) {
            Pet pet = shelterQueue.front();
            shelterQueue.pop();
            if (pet.type == "Cat") {
                oldestCat = pet;
            } else {
                tempQueue.push(pet);
            }
        }
        while (!tempQueue.empty()) {
            shelterQueue.push(tempQueue.front());
            tempQueue.pop();
        }
        return oldestCat;
    }

    // Fungsi Untuk Mengadopsi Hewan Anjing Yang Paling Tua
    Pet dequeueDog() {
        if (shelterQueue.empty()) {
            return Pet();
        }
        queue<Pet> tempQueue;
        Pet oldestDog;
        while (!shelterQueue.empty()) {
            Pet pet = shelterQueue.front();
            shelterQueue.pop();
            if (pet.type == "Dog") {
                oldestDog = pet;
            } else {
                tempQueue.push(pet);
            }
        }
        while (!tempQueue.empty()) {
            shelterQueue.push(tempQueue.front());
            tempQueue.pop();
        }
        return oldestDog;
    }

    // Fungsi Untuk Menampilkan Semua Hewan di Selter Beserta Umurnya
    void displayAllPets() {
        queue<Pet> tempQueue = shelterQueue;
        cout << "Semua Hewan di Shelter:" << endl;
        while (!tempQueue.empty()) {
            Pet pet = tempQueue.front();
            cout << pet.name << " (" << pet.type << ") - " << pet.age << " tahun" << endl;
            tempQueue.pop();
        }
        cout << endl;
    }
};

int main() {
    Shelter shelter;

    // Menambahkan Hewan Ke Shelter
    Pet dog1 = { "Dog", "Bimbim", 5};
    Pet cat1 = { "Cat", "Nye nye", 3 };
    Pet dog2 = { "Dog", "Coco", 7 };
    Pet cat2 = { "Cat", "Boby", 6 };
    Pet dog3 = { "Dog", "Haciko", 7 };
    Pet cat3 = { "Cat", "Milo",  5};

    shelter.enqueue(dog1);
    shelter.enqueue(cat1);
    shelter.enqueue(dog2);
    shelter.enqueue(cat2);
    shelter.enqueue(dog3);
    shelter.enqueue(cat3);

    // Menampilkan Semua Hewan di Shelter Beserta Umurnya
    shelter.displayAllPets();

    // Mengadopsi Hewan Tertua
    Pet adoptedPet = shelter.dequeueAny();
    if (!adoptedPet.name.empty()) {
        cout << "Hewan Yang Diadopsi : " << adoptedPet.name << " (" << adoptedPet.type << ") (" << adoptedPet.age << ")" << endl;
    } else {
        cout << "Shelter Kosong" << endl;
    }

    return 0;
}
