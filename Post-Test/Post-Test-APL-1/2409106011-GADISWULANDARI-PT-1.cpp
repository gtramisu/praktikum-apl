#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, nim;
    int percobaan = 0;
    
    cout << "\n================================================\n";
    cout << "||           PROGRAM KONVERSI SUHU :>         ||\n";
    cout << "================================================\n";
    
    while (percobaan < 3) {
        cout << "\nSelamat Datang di program Konversi Suhu!\n";
        cout << "Masukkan Nama: ";
        getline(cin, nama);
        cout << "Masukkan 3 digit terakhir NIM: ";
        getline(cin, nim);
        
        if (nim.length() == 3 && isdigit(nim[0]) && isdigit(nim[1]) && isdigit(nim[2])) {
            cout << "\nYeyyy! Login berhasil, silahkan masuk sayangg\n";
            break;
        } else {
            cout << "\nNIM harus 3 digit terakhir sayang, ayoo coba lagi!\n";
            percobaan++;
        }
    }
    
    if (percobaan == 3) {
        cout << "\nYahhh kamu sudah gagal login 3 kali. Programnya aku hentikan yaa :<\n";
        return 0;
    }
    
    int choice;
    double value;
    
    do {
        cout << "\n================================================\n";
        cout << "||               KONVERSI SUHU                ||\n";
        cout << "================================================\n";
        cout << "1. Celsius ke Fahrenheit, Reamur, Kelvin\n";
        cout << "2. Fahrenheit ke Celsius, Reamur, Kelvin\n";
        cout << "3. Reamur ke Celsius, Fahrenheit, Kelvin\n";
        cout << "4. Kelvin ke Celsius, Fahrenheit, Reamur\n";
        cout << "5. Keluar\n";
        cout << "Masukkan Pilihan: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 4) {
            cout << "Masukkan Nilai Suhu: ";
            cin >> value;
            
            double c, f, r, k;
            
            switch (choice) {
                case 1:
                    c = value;
                    f = (c * 9/5) + 32;
                    r = c * 4/5;
                    k = c + 273.15;
                    break;
                case 2:
                    f = value;
                    c = (f - 32) * 5/9;
                    r = c * 4/5;
                    k = c + 273.15;
                    break;
                case 3:
                    r = value;
                    c = r * 5/4;
                    f = (c * 9/5) + 32;
                    k = c + 273.15;
                    break;
                case 4:
                    k = value;
                    c = k - 273.15;
                    f = (c * 9/5) + 32;
                    r = c * 4/5;
                    break;
            }
            
            cout << "\n===============================================\n";
            cout << "||                HASIL KONVERSI !            ||\n";
            cout << "================================================\n";
            cout << "Celsius     : " << c << " C\n";      
            cout << "Fahrenheit  : " << f << " F\n";               
            cout << "Reamur      : " << r << " R\n";
            cout << "Kelvin      : " << k << " K\n";
            cout << "================================================\n";
        }
        
    } while (choice != 5);
    
    cout << "\nTerimakasih telah menggunakan program ini! Sampai jumpa lagi, byee byeee!\n";
    return 0;
} 

