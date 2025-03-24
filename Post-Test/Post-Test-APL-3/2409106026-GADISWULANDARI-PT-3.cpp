#include <iostream>
#include <string>

using namespace std;

#define MAX_PARFUM 50
#define MAX_USER 50

struct Parfum {
    string merk;
    string nama;
    string aroma;
    string harga;  
    string ukuran; 
};

struct User {
    string nama;
    string nim;
};

Parfum parfums[MAX_PARFUM];
User  users[MAX_USER];
int jumlahParfum = 24;
int jumlahUser  = 0;

int inisialisasiData() {
    parfums[0] = {"Ataraksia", "Serenity", "Woody", "Rp250000", "50 ml"};
    parfums[1] = {"Ataraksia", "Elysium", "Fresh Citrus", "Rp300000", "100 ml"};
    parfums[2] = {"Alchemist", "Philosopher's Scent", "Floral Spicy", "Rp450000", "50 ml"};
    parfums[3] = {"Alchemist", "Elemental Essence", "Earthy Musk", "Rp500000", "100 ml"};
    parfums[4] = {"The Body Tell", "Whisper of Nature", "Green Fresh", "Rp350000", "50 ml"};
    parfums[5] = {"The Body Tell", "Ocean Breeze", "Aqua Marine", "Rp400000", "100 ml"};
    parfums[6] = {"Mykonos", "Milk Drop", "Creamy Musk", "Rp400000", "50 ml"};
    parfums[7] = {"Mykonos", "Utopia", "Warm Amber", "Rp450000", "100 ml"};
    parfums[8] = {"YSL", "Black Opium", "Warm Vanilla", "Rp1800000", "50 ml"};
    parfums[9] = {"YSL", "Libre", "Floral Lavender", "Rp2000000", "100 ml"};
    parfums[10] = {"Gucci", "Bloom", "White Floral", "Rp1900000", "100 ml"};
    parfums[11] = {"Gucci", "Guilty", "Amber Woody", "Rp2000000", "100 ml"};
    parfums[12] = {"Dior", "Sauvage", "Citrus Spicy", "Rp2100000", "100 ml"};
    parfums[13] = {"Dior", "Hypnotic Poison", "Vanilla Almond", "Rp1900000", "100 ml"};
    parfums[14] = {"Chanel", "No. 5", "Aldehydic Floral", "Rp2500000", "100 ml"};
    parfums[15] = {"Chanel", "Coco Mademoiselle", "Amber Floral", "Rp2600000", "100 ml"};
    parfums[16] = {"Victoria Secret", "Bombshell", "Fruity Floral", "Rp1200000", "100 ml"};
    parfums[17] = {"Victoria Secret", "Tease", "Gourmand Vanilla", "Rp1300000", "100 ml"};
    parfums[18] = {"Le Labo", "Santal 33", "Woody Leather", "Rp3500000", "100 ml"};
    parfums[19] = {"Le Labo", "Rose 31", "Spicy Rose", "Rp3400000", "100 ml"};
    parfums[20] = {"Jo Malone", "English Pear & Freesia", "Fruity Floral", "Rp2200000", "100 ml"};
    parfums[21] = {"Jo Malone", "Wood Sage & Sea Salt", "Aromatic Woody", "Rp2300000", "100 ml"};
    parfums[22] = {"Carolina Herrera", "Good Girl", "Sweet Gourmand", "Rp2100000", "100 ml"};
    parfums[23] = {"Carolina Herrera", "Bad Boy", "Spicy Oriental", "Rp2200000", "100 ml"};
    return 0; 
}

int registrasi() {
    if (jumlahUser  >= MAX_USER) {
        cout << "Tidak bisa mendaftar lagi, kapasitas sudah penuh.\n";
        return 0;
    }

    cout << "\nRegistrasi Pengguna Baru\n";
    cout << "Nama: "; getline(cin, users[jumlahUser ].nama);
    cout << "NIM (3 digit): "; getline(cin, users[jumlahUser ].nim);

    jumlahUser ++;
    cout << "Registrasi berhasil! Anda sekarang dapat login.\n";
    return 0;
}

int login() {
    string nama, nim;
    int percobaan = 0;

    cout << "\n=================================================\n";
    cout << "||           MANAJEMEN DISSCENT STORE          ||\n";
    cout << "=================================================\n";

    while (percobaan < 3) {
        cout << "\nSelamat datang di Manajemen DisScent Store!\n";
        cout << "Masukkan Nama: "; getline(cin, nama);
        cout << "Masukkan NIM (3 digit): "; getline(cin, nim);

        bool userFound = false;
        for (int i = 0; i < jumlahUser ; i++) {
            if (users[i].nama == nama && users[i].nim == nim) {
                userFound = true;
                break;
            }
        }

        if (userFound) {
            return true; 
        } else {
            percobaan++;
            cout << "\nLogin gagal, silahkan coba lagi! Percobaan ke-" << percobaan << " dari 3.\n";
        }
    }

    cout << "\nYahh login sudah gagal sebanyak 3 kali. Program berhenti.\n";
    exit(0); 
    return false; 
}

int tampilkanData() {
    cout << "\n+----+---------------------------+---------------------------+--------------------+------------+------------+" << endl;
    cout << "| No | Merk                     | Nama Parfum               | Aroma             | Harga      | Ukuran     |" << endl;
    cout << "+----+---------------------------+---------------------------+--------------------+------------+------------+" << endl;

    for (int i = 0; i < jumlahParfum; i++) {
        cout << "| " << (i + 1) << "  | " << parfums[i].merk;
        cout << string(25 - parfums[i].merk.length(), ' ') << "| " << parfums[i].nama;
        cout << string(25 - parfums[i].nama.length(), ' ') << "| " << parfums[i].aroma;
        cout << string(18 - parfums[i].aroma.length(), ' ') << "| " << parfums[i].harga;
        cout << " | " << parfums[i].ukuran << " |" << endl;
    }
    cout << "+----+---------------------------+---------------------------+--------------------+------------+------------+\n" << endl;
    return 0; 
}

int tambahParfum() {
    if (jumlahParfum >= MAX_PARFUM) {
        cout << "Tidak bisa menambah parfum lagi, kapasitas sudah penuh.\n";
        return 0;
    }

    cout << "\nTambah Parfum Baru\n";
    cout << "Merk Parfum: "; getline(cin, parfums[jumlahParfum].merk);
    cout << "Nama Parfum: "; getline(cin, parfums[jumlahParfum].nama);
    cout << "Aroma Parfum: "; getline(cin, parfums[jumlahParfum].aroma);
    cout << "Harga Parfum (Rp): "; getline(cin, parfums[jumlahParfum].harga);

    cout << "Ukuran Parfum:\n";
    cout << "1. 50 ml\n";
    cout << "2. 100 ml\n";
    cout << "Pilih ukuran (1/2): ";
    int pilihanUkuran;
    cin >> pilihanUkuran;
    cin.ignore();

    if (pilihanUkuran == 1) {
        parfums[jumlahParfum].ukuran = "50 ml";
    } else if (pilihanUkuran == 2) {
        parfums[jumlahParfum].ukuran = "100 ml";
    } else {
        cout << "Pilihan tidak valid, ukuran diatur ke 50 ml.\n";
        parfums[jumlahParfum].ukuran = "50 ml";
    }

    jumlahParfum++;
    cout << "Parfum berhasil ditambahkan!\n";
    tampilkanData();
    return 0; 
}

int ubahParfum() {
    int index;
    tampilkanData();
    cout << "Pilih nomor parfum yang ingin diubah: "; cin >> index;
    cin.ignore();

    if (index > 0 && index <= jumlahParfum) {
        cout << "Merk Parfum Baru: "; getline(cin, parfums[index - 1].merk);
        cout << "Nama Parfum Baru: "; getline(cin, parfums[index - 1].nama);
        cout << "Aroma Parfum Baru: "; getline(cin, parfums[index - 1].aroma);
        cout << "Harga Parfum Baru (Rp): "; getline(cin, parfums[index - 1].harga);

        cout << "Ukuran Parfum Baru:\n";
        cout << "1. 50 ml\n";
        cout << "2. 100 ml\n";
        cout << "Pilih ukuran (1/2): ";
        int pilihanUkuran;
        cin >> pilihanUkuran;
        cin.ignore(); 

        if (pilihanUkuran == 1) {
            parfums[index - 1].ukuran = "50 ml";
        } else if (pilihanUkuran == 2) {
            parfums[index - 1].ukuran = "100 ml";
        } else {
            cout << "Pilihan tidak valid, ukuran tidak diubah.\n";
        }

        cout << "Data parfum berhasil diubah!\n";
    } else {
        cout << "Nomor parfum tidak ada!\n";
    }

    tampilkanData();
    return 0; 
}

int hapusParfum() {
    int index;
    tampilkanData();
    cout << "Pilih nomor parfum yang ingin dihapus: "; cin >> index;
    cin.ignore();

    if (index > 0 && index <= jumlahParfum) {
        for (int i = index - 1; i < jumlahParfum - 1; i++) {
            parfums[i] = parfums[i + 1]; 
        }
        jumlahParfum--;
        cout << "Data parfum berhasil dihapus!\n";
    } else {
        cout << "Nomor parfum tidak ada!\n";
    }

    tampilkanData();
    return 0;
}

int main() {
    int pilihan;

    do {
        cout << "\n=================================================\n";
        cout << "||                DISSCENT STORE               ||\n";
        cout << "=================================================\n";
        cout << "1. Registrasi Pengguna Baru\n";
        cout << "2. Login\n";
        cout << "3. Keluar\n";
        cout << "=================================================\n";
        cout << "Pilih menu: "; cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
            case 1: registrasi(); break;
            case 2: 
                if (login()) {
                    inisialisasiData(); 
                    int menuPilihan;

                    do {
                        cout << "\n=================================================\n";
                        cout << "||                MANAJEMEN PARFUM             ||\n";
                        cout << "=================================================\n";
                        cout << "1. Tampilkan Parfum\n";                        
                        cout << "2. Tambah Parfum\n";
                        cout << "3. Ubah Parfum\n";
                        cout << "4. Hapus Parfum\n";
                        cout << "5. Kembali\n";
                        cout << "=================================================\n";
                        cout << "Pilih menu: "; cin >> menuPilihan;
                        cin.ignore();

                        switch (menuPilihan) {
                            case 1: tampilkanData(); break;
                            case 2: tambahParfum(); break;
                            case 3: ubahParfum(); break;
                            case 4: hapusParfum(); break;
                            case 5: cout << "Kembali ke menu login1\n"; break;
                            default: cout << "Pilihan tidak valid!\n";
                        }
                    } while (menuPilihan != 5);
                }
                break;
            case 3: cout << "Keluar dari program, Terima kasih!\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 3);

    return 0; 
}