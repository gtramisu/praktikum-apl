// Struktur Dasar C++
#include <iostream>
using namespace std;

// input dan output
int main()
{
    string nama;

    cout << "Masukkan nama: ";
    cin >> nama;
    cout << nama;

    // tipe data primitif
    int umur = 18;
    int sumbuY = -45;
    float berat_badan = 50;
    double tinggi_badan = 164;
    char jenis_kelamin = 'P';
    bool is_menikah = false;
    string name = "adis";

    // tipe data kolektif
    int angka[5] = {1, 2, 3, 4, 5}; // array
    cout << angka[2] << endl;

    // Tipe Data Abstrak
    struct Mahasiswa
    {
        string nama;
        int umur;
        float ipk;
    };
    Mahasiswa mhs = {"adis", 18, 3.8};

    // Operator Ternary
    bool sudahMenikah = true;
    string status = sudahMenikah ? "Sudah menikah" : "Belum menikah";
    cout << status << endl;

    // if (sudahMenikah) {
    //     cout << "Sudah menikah";
    // } else {
    //     cout << "Belum menikah";
    // }
    cout << status;

    // Percabangan if
    bool malas = true;
    if (malas)
    {
        cout << "Saya nonton anime";
    }

    // Percabangan if-else
    if (malas)
    {
        cout << "Saya main game";
    }
    else
    {
        cout << "Saya belajar";
    }

    // Percabangan if-else if
    malas = false;
    bool lapar = true;
    if (malas)
        cout << "Saya nonton anime";
    else if (lapar)
        cout << "Saya makan";
    else
        cout << "Saya belajar";

    // struktur switch-case
    int nilaiUjian = 10;
    switch (nilaiUjian)
    {
    case 10:
        cout << "Nilai sempurna";
        break;
    case 9:
        cout << "Nilai sangat baik";
        break;
    default:
        cout << "Nilai tidak valid";
        break;
    }

    // Nested If
    malas = true;
    if (malas)
    {
        if (lapar)
        {
            cout << "Saya makan";
        }
    }
    else
    {
        cout << "Gak ngapa-ngapain";
    }

    // Perulangan For
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    // Perulangan While
    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        i++;
    }

    // Perulangan Do-While
    do
    {
        cout << i << endl;
        i++;
    } while (i < 5);

    // Perulangan ForEach
    int arr[] = {20, 18, 11, 31, 50};
    for (int x : arr)
    {
        cout << x << endl;
    }
}