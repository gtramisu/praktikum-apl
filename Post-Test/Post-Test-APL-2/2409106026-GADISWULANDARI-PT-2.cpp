#include <iostream>
#include <string>

using namespace std;

#define MAX_PARFUM 50
string parfums[MAX_PARFUM][5];
int jumlahParfum = 24;

string namaUser = "Gadis Wulandari";
string nimUser = "2409106026";

int inisialisasiData() {
    string dataAwal[24][5] = {
        {"Ataraksia", "Serenity", "Woody", "250000", "50 ml"},
        {"Ataraksia", "Elysium", "Fresh Citrus", "300000", "100 ml"},
        {"Alchemist", "Philosopher's Scent", "Floral Spicy", "450000", "50 ml"},
        {"Alchemist", "Elemental Essence", "Earthy Musk", "500000", "100 ml"},
        {"The Body Tell", "Whisper of Nature", "Green Fresh", "350000", "50 ml"},
        {"The Body Tell", "Ocean Breeze", "Aqua Marine", "400000", "100 ml"},
        {"Mykonos", "Milk Drop", "Creamy Musk", "400000", "50 ml"},
        {"Mykonos", "Utopia", "Warm Amber", "450000", "100 ml"},
        {"YSL", "Black Opium", "Warm Vanilla", "1800000", "50 ml"},
        {"YSL", "Libre", "Floral Lavender", "2000000", "100 ml"},
        {"Gucci", "Bloom", "White Floral", "1900000", "100 ml"},
        {"Gucci", "Guilty", "Amber Woody", "2000000", "100 ml"},
        {"Dior", "Sauvage", "Citrus Spicy", "2100000", "100 ml"},
        {"Dior", "Hypnotic Poison", "Vanilla Almond", "1900000", "100 ml"},
        {"Chanel", "No. 5", "Aldehydic Floral", "2500000", "100 ml"},
        {"Chanel", "Coco Mademoiselle", "Amber Floral", "2600000", "100 ml"},
        {"Victoria Secret", "Bombshell", "Fruity Floral", "1200000", "100 ml"},
        {"Victoria Secret", "Tease", "Gourmand Vanilla", "1300000", "100 ml"},
        {"Le Labo", "Santal 33", "Woody Leather", "3500000", "100 ml"},
        {"Le Labo", "Rose 31", "Spicy Rose", "3400000", "100 ml"},
        {"Jo Malone", "English Pear & Freesia", "Fruity Floral", "2200000", "100 ml"},
        {"Jo Malone", "Wood Sage & Sea Salt", "Aromatic Woody", "2300000", "100 ml"},
        {"Carolina Herrera", "Good Girl", "Sweet Gourmand", "2100000", "100 ml"},
        {"Carolina Herrera", "Bad Boy", "Spicy Oriental", "2200000", "100 ml"}
    };

    for (int i = 0; i < jumlahParfum; i++) {
        for (int j = 0; j < 5; j++) {
            parfums[i][j] = dataAwal[i][j];
        }
    }
    return 0;
}

bool login() {
    string nama, nim;
    int percobaan = 0;

    cout << "\n=================================================\n";
    cout << "||           MANAJEMEN DISSCENT STORE          ||\n";
    cout << "=================================================\n";

    while (percobaan < 3) {
        cout << "\nSelamat datang di Manajemen DisScent Store!\n";
        cout << "Masukkan Nama: "; getline(cin, nama);
        cout << "Masukkan NIM: "; getline(cin, nim);

        if ((nama == namaUser || nama == "gadis wulandari" || nama == "GADIS WULANDARI") && nim == nimUser) {
            return true;
        } else {
            percobaan++;
            cout << "\nLogin gagal nii, silahkan coba lagi! Percobaan ke-" << percobaan << " dari 3.\n";
        }
    }

    cout << "\nYahh login udah gagal sebanyak 3 kali. Program berhenti yaaa.\n";
    return false;
}

int tampilkanData() {
    cout << "\n+----+---------------------------+---------------------------+--------------------+------------+" << endl;
    cout << "| No | Merk                     | Nama Parfum               | Aroma             | Harga      | Ukuran |" << endl;
    cout << "+----+---------------------------+---------------------------+--------------------+------------+" << endl;

    for (int i = 0; i < jumlahParfum; i++) {
        cout << "| " << (i + 1) << "  | " << parfums[i][0];
        cout << string(25 - parfums[i][0].length(), ' ') << "| " << parfums[i][1];
        cout << string(25 - parfums[i][1].length(), ' ') << "| " << parfums[i][2];
        cout << string(18 - parfums[i][2].length(), ' ') << "| Rp" << parfums[i][3];
        cout << " | " << parfums[i][4] << " |" << endl;
    }
    cout << "+----+---------------------------+---------------------------+--------------------+------------+\n" << endl;
    return 0;
}

int tambahParfum() {
    if (jumlahParfum >= MAX_PARFUM) {
        cout << "Tidak bisa menambah parfum lagi, kapasitas sudah penuh.\n";
        return 0;
    }

    cout << "\nTambah Parfum Baru\n";
    cout << "Merk Parfum: "; getline(cin, parfums[jumlahParfum][0]);
    cout << "Nama Parfum: "; getline(cin, parfums[jumlahParfum][1]);
    cout << "Aroma Parfum: "; getline(cin, parfums[jumlahParfum][2]);
    cout << "Harga Parfum (Rp): "; getline(cin, parfums[jumlahParfum][3]);
    cout << "Ukuran Parfum (50 ml / 100 ml): "; getline(cin, parfums[jumlahParfum][4]);

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
        cout << "Merk Parfum Baru: "; getline(cin, parfums[index - 1][0]);
        cout << "Nama Parfum Baru: "; getline(cin, parfums[index - 1][1]);
        cout << "Aroma Parfum Baru: "; getline(cin, parfums[index - 1][2]);
        cout << "Harga Parfum Baru (Rp): "; getline(cin, parfums[index - 1][3]);
        cout << "Ukuran Parfum Baru (50 ml / 100 ml): "; getline(cin, parfums[index - 1][4]);
        cout << "Data parfum berhasil diubah!\n";
    } else {
        cout << "Nomor parfum ga ada!\n";
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
            for (int j = 0; j < 5; j++) {
                parfums[i][j] = parfums[i + 1][j];
            }
        }
        jumlahParfum--;
        cout << "Data parfum berhasil dihapus!\n";
    } else {
        cout << "Nomor parfum ga ada!\n";
    }

    tampilkanData();
    return 0;
}

int main() {
    if (!login()) return 0;

    inisialisasiData();
    int pilihan;

    do {
        cout << "\n=================================================\n";
        cout << "||                DISSCENT STORE               ||\n";
        cout << "=================================================\n";
        cout << "1. Tampilkan Parfum\n";                        
        cout << "2. Tambah Parfum\n";
        cout << "3. Ubah Parfum\n";
        cout << "4. Hapus Parfum\n";
        cout << "5. Keluar\n";
        cout << "=================================================\n";
        cout << "Pilih menu: "; cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: tampilkanData(); break;
            case 2: tambahParfum(); break;
            case 3: ubahParfum(); break;
            case 4: hapusParfum(); break;
            case 5: cout << "Keluar dari program, Terima kasih!\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);

    return 0;
}