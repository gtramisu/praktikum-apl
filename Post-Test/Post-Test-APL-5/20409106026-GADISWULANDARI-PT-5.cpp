#include <iostream>
#include <string>
using namespace std;

#define MAX_PARFUM 50
#define MAX_USER 50

struct User {
    string nama;
    string nim;
};

struct Parfum {
    string merk;
    string nama;
    string aroma;
    string harga;
    string ukuran;
    User pengguna;
};

Parfum parfums[MAX_PARFUM];
int jumlahParfum = 24;
int jumlahUser = 0;

bool validasiNIM(const string& nim) {
    return nim.length() == 3 && nim.find_first_not_of("0123456789") == string::npos;
}

void registrasiPengguna() {
    if (jumlahUser >= MAX_USER) {
        cout << "Tidak bisa mendaftar lagi, kapasitas sudah penuh.\n";
        return;
    }
    cout << "\nRegistrasi Pengguna Baru\n";
    cout << "Nama: "; getline(cin, parfums[jumlahUser].pengguna.nama);

    string nimInput;
    do {
        cout << "NIM (3 digit): "; getline(cin, nimInput);
        if (!validasiNIM(nimInput)) {
            cout << "NIM harus terdiri dari 3 digit angka!\n";
        } else {
            break;
        }
    } while (true);
    parfums[jumlahUser].pengguna.nim = nimInput;

    jumlahUser++;
    cout << "Registrasi berhasil! Anda sekarang dapat login.\n";
}

int cariUser(string nama, string nim) {
    for (int i = 0; i < jumlahUser; i++) {
        if (parfums[i].pengguna.nama == nama && parfums[i].pengguna.nim == nim) {
            return i;
        }
    }
    return -1;
}

string pilihUkuran() {
    int pilihanUkuran;
    do {
        cout << "Ukuran Parfum:\n1. 50 ml\n2. 100 ml\nPilih ukuran (1/2): ";
        cin >> pilihanUkuran;
        cin.ignore();
        if (pilihanUkuran == 1) return "50 ml";
        else if (pilihanUkuran == 2) return "100 ml";
        else cout << "Pilihan tidak valid, silakan pilih 1 atau 2.\n";
    } while (true);
}

string pilihUkuran(string defaultUkuran) {
    cout << "Ukuran sebelumnya: " << defaultUkuran << endl;
    cout << "Ingin ubah ukuran? (y/n): ";
    char ubah;
    cin >> ubah;
    cin.ignore();
    if (ubah == 'y' || ubah == 'Y') return pilihUkuran();
    return defaultUkuran;
}

void tampilkanParfum(int index = 0) {
    if (index == 0) {
        cout << "\n+----+---------------------------+---------------------------+--------------------+------------+------------+" << endl;
        cout << "| No | Merk                     | Nama Parfum               | Aroma             | Harga      | Ukuran     |" << endl;
        cout << "+----+---------------------------+---------------------------+--------------------+------------+------------+" << endl;
    }
    if (index >= jumlahParfum) {
        cout << "+----+---------------------------+---------------------------+--------------------+------------+------------+\n";
        return;
    }
    cout << "| " << (index + 1) << "  | " << parfums[index].merk;
    cout << string(25 - parfums[index].merk.length(), ' ') << "| " << parfums[index].nama;
    cout << string(25 - parfums[index].nama.length(), ' ') << "| " << parfums[index].aroma;
    cout << string(18 - parfums[index].aroma.length(), ' ') << "| " << parfums[index].harga;
    cout << " | " << parfums[index].ukuran << " |" << endl;
    tampilkanParfum(index + 1);
}

void inputDataParfum(Parfum& p, bool ubahUkuran = true) {
    cout << "Merk Parfum: "; getline(cin, p.merk);
    cout << "Nama Parfum: "; getline(cin, p.nama);
    cout << "Aroma Parfum: "; getline(cin, p.aroma);
    cout << "Harga Parfum (Rp): "; getline(cin, p.harga);
    if (ubahUkuran) {
        p.ukuran = pilihUkuran(p.ukuran);
    } else {
        p.ukuran = pilihUkuran();
    }
}

void tambahParfum(Parfum data[], int &jumlah) {
    if (jumlah >= MAX_PARFUM) {
        cout << "Tidak bisa menambah parfum lagi, kapasitas sudah penuh.\n";
        return;
    }
    cout << "\nTambah Parfum Baru\n";
    inputDataParfum(data[jumlah], false);
    jumlah++;
    cout << "Parfum berhasil ditambahkan!\n";
    tampilkanParfum();
}

void hapusParfum(Parfum data[], int &jumlah) {
    tampilkanParfum();
    int index;
    cout << "Pilih nomor parfum yang ingin dihapus: ";
    cin >> index;
    cin.ignore();
    if (index > 0 && index <= jumlah) {
        for (int i = index - 1; i < jumlah - 1; i++) {
            data[i] = data[i + 1];
        }
        jumlah--;
        cout << "Parfum berhasil dihapus.\n";
    } else {
        cout << "Nomor parfum tidak valid!\n";
    }
    tampilkanParfum();
}

void ubahParfum(Parfum data[], int jumlah) {
    tampilkanParfum();
    int index;
    cout << "Pilih nomor parfum yang ingin diubah: "; cin >> index; cin.ignore();
    if (index > 0 && index <= jumlah) {
        cout << "Ubah Data Parfum:\n";
        int pilihan;
        do {
            cout << "\n=================================================\n";
            cout << "||                  UBAH PARFUM                ||\n";
            cout << "=================================================\n";
            cout << "1. Ubah Aroma Parfum\n";
            cout << "2. Ubah Semua Data Parfum\n";
            cout << "3. Kembali ke Menu Utama\n";
            cout << "=================================================\n";
            cout << "Pilih menu: "; cin >> pilihan; cin.ignore();
            switch (pilihan) {
                case 1:
                    cout << "Aroma sebelumnya: " << data[index - 1].aroma << endl;
                    cout << "Masukkan aroma baru: ";
                    getline(cin, data[index - 1].aroma);
                    cout << "Aroma parfum berhasil diubah!\n";
                    tampilkanParfum();
                    break;
                case 2:
                    inputDataParfum(data[index - 1]);
                    cout << "Semua data parfum berhasil diubah!\n";
                    tampilkanParfum();
                    break;
                case 3:
                    cout << "Kembali ke menu utama.\n";
                    break;
                default:
                    cout << "Pilihan tidak valid.\n";
            }
        } while (pilihan != 3);
    } else {
        cout << "Nomor parfum tidak ada!\n";
    }
}

void tampilkanParfumTermahal(Parfum *data, int jumlah) {
    if (jumlah == 0) {
        cout << "Belum ada parfum yang tersedia.\n";
        return;
    }

    int maxHarga = -1;
    int indexTermahal = -1;

    for (int i = 0; i < jumlah; i++) {
        if (data[i].harga.substr(0, 3) == "Rp ") {
            int harga = stoi(data[i].harga.substr(3));
            if (harga > maxHarga) {
                maxHarga = harga;
                indexTermahal = i;
            }
        }
    }

    if (indexTermahal != -1) {
        cout << "\n====== Parfum Termahal ======\n";
        cout << "Merk  : " << data[indexTermahal].merk << endl;
        cout << "Nama  : " << data[indexTermahal].nama << endl;
        cout << "Aroma : " << data[indexTermahal].aroma << endl;
        cout << "Harga : " << data[indexTermahal].harga << endl;
        cout << "Ukuran: " << data[indexTermahal].ukuran << endl;
        cout << "==============================\n";
    } else {
        cout << "Tidak ada parfum dengan format harga yang valid.\n";
    }
}

int main() {
    parfums[0] = {"Ataraksia", "Rose Euphoria", "Floral", "Rp 350000", "50 ml"};
    parfums[1] = {"Alchemist", "Mystic Oud", "Woody", "Rp 450000", "100 ml"};
    parfums[2] = {"The Body Tell", "Vanilla Dream", "Sweet", "Rp 300000", "50 ml"};
    parfums[3] = {"Mykonos", "Ocean Breeze", "Aquatic", "Rp 500000", "100 ml"};
    parfums[4] = {"YSL", "Black Opium", "Oriental", "Rp 700000", "50 ml"};
    parfums[5] = {"Gucci", "Bloom", "Floral", "Rp 650000", "100 ml"};
    parfums[6] = {"Dior", "Sauvage", "Citrus", "Rp 850000", "50 ml"};
    parfums[7] = {"Chanel", "No. 5", "Floral", "Rp 1200000", "100 ml"};
    parfums[8] = {"Victoria's Secret", "Bombshell", "Fruity", "Rp 550000", "50 ml"};
    parfums[9] = {"Le Labo", "Santal 33", "Woody", "Rp 1400000", "100 ml"};
    parfums[10] = {"Jo Malone", "Wood Sage & Sea Salt", "Woody", "Rp 900000", "50 ml"};
    parfums[11] = {"Carolina Herrera", "Good Girl", "Floral", "Rp 700000", "100 ml"};
    parfums[12] = {"Ataraksia", "Jasmine Delight", "Floral", "Rp 350000", "100 ml"};
    parfums[13] = {"Alchemist", "Amber Ritual", "Spicy", "Rp 550000", "50 ml"};
    parfums[14] = {"The Body Tell", "Citrus Mist", "Citrus", "Rp 250000", "100 ml"};
    parfums[15] = {"Mykonos", "Lavender Bloom", "Floral", "Rp 450000", "50 ml"};
    parfums[16] = {"YSL", "Libre", "Floral", "Rp 600000", "100 ml"};
    parfums[17] = {"Gucci", "Guilty", "Oriental", "Rp 750000", "50 ml"};
    parfums[18] = {"Dior", "Fahrenheit", "Woody", "Rp 900000", "100 ml"};
    parfums[19] = {"Chanel", "Chance", "Floral", "Rp 950000", "50 ml"};
    parfums[20] = {"Victoria's Secret", "Pure Seduction", "Fruity", "Rp 350000", "100 ml"};
    parfums[21] = {"Le Labo", "Rose 31", "Floral", "Rp 1200000", "50 ml"};
    parfums[22] = {"Jo Malone", "Pomegranate Noir", "Fruity", "Rp 800000", "100 ml"};
    parfums[23] = {"Carolina Herrera", "212 VIP", "Spicy", "Rp 650000", "50 ml"};

    int pilihan;
    string nama, nim;

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

        if (pilihan == 1) {
            registrasiPengguna();
        } else if (pilihan == 2) {
            int percobaan = 0;
            cout << "\n=================================================\n";
            cout << "||           MANAJEMEN DISSCENT STORE          ||\n";
            cout << "=================================================\n";

            while (percobaan < 3) {
                cout << "\nSelamat datang di Manajemen DisScent Store!\n";
                cout << "Masukkan Nama: "; getline(cin, nama);
                cout << "Masukkan NIM (3 digit): "; getline(cin, nim);

                if (cariUser(nama, nim) != -1) {
                    cout << "Login berhasil! Selamat datang, " << nama << " NIM: " << nim << ".\n";
                    int menuPilihan;
                    do {
                        cout << "\n=================================================\n";
                        cout << "||                MANAJEMEN PARFUM             ||\n";
                        cout << "=================================================\n";
                        cout << "1. Tampilkan Parfum\n";
                        cout << "2. Tambah Parfum\n";
                        cout << "3. Ubah Parfum\n";
                        cout << "4. Hapus Parfum\n";
                        cout << "5. Pencarian Parfum Termahal\n";
                        cout << "6. Kembali\n";
                        cout << "=================================================\n";
                        cout << "Pilih menu: "; cin >> menuPilihan;
                        cin.ignore();

                        switch (menuPilihan) {
                            case 1: tampilkanParfum(); break;
                            case 2: tambahParfum(parfums, jumlahParfum); break;
                            case 3: ubahParfum(parfums, jumlahParfum); break;
                            case 4: hapusParfum(parfums, jumlahParfum); break;
                            case 5: tampilkanParfumTermahal(parfums, jumlahParfum); break;
                            case 6: cout << "Logout berhasil.\n"; break;
                            default: cout << "Pilihan tidak valid!\n"; break;
                        }
                    } while (menuPilihan != 6);
                    break;
                } else {
                    percobaan++;
                    cout << "\nLogin gagal, silahkan coba lagi! Percobaan ke-" << percobaan << " dari 3.\n";
                }
            }

            if (percobaan == 3) {
                cout << "\nYahh login sudah gagal sebanyak 3 kali. Program berhenti.\n";
                break; // keluar dari menu utama
            }

        } else if (pilihan == 3) {
            cout << "Keluar dari program, Terima kasih!\n";
            break;
        } else {
            cout << "Pilihan tidak valid!\n";
        }

    } while (true);

    return 0;
}