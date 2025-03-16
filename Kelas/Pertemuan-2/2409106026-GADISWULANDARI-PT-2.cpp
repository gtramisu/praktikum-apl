// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, world!" << endl;
//     return 0;
// }

// tipeData namaArray[ukuranArray];

// Deklarasi Array
// string nama[4] = {"Haqi", "Dzaki", "Melchi"};
// // atau
// int angka[5];
// angka[0] = 10;
// angka[1] = 19;
// angka[2] = 30;
// angka[3] = 40;
// angka[4] = 50;

// Mengakses Elemen Array
// cout << nama[0] << endl;
// cout << angka[2] << endl;

// Dapetin Panjang Array
// int angka[5] = {1, 2, 3, 4, 5};
// cout << sizeof(angka);

// Rumus
// int panjangArray = sizeof(arr) / sizeof(arr[0]);
// // atau
// int panjangArray = sizeof(arr) / sizeof(tipeData);

// cout << "versi c++ saya : " << _cplusplus;

// Looping Array
// for (int i = 0; i < panjangArray; i++) {
//     cout << angka[i] << endl;
//     }
//     // atau
//     for (int x : angka) {
//     cout << x << endl;
//     }

// int number[3] = (1,2,4);
// {
//     number[i] = number[i + 1];
// }

// Nampilin
// for (int i : number)
// {
//     cout << "Nilai array : " << i << end!;
// }
// for (auto i = 0; 1 < size (number; i++))
// {
//     cout << "Nilai array ; " <<[i] << end!;
// }

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // Deklarasi array
//     int number[4] = {1, 2, 4};

//     // Menambah data
//     number[4] = 10;

//     // Edit data
//     number[1] = 2;

//     // Menampilkan data (read)
//     for (auto i = 0; i < 4; i++)
//     {
//         cout << "Nilai array : " << number[i] << endl;
//     }

//     // Panjang sebuah array statis
//     int totalByte = sizeof(number);
//     int singleByte = sizeof(number[0]);
//     int panjangArray2 = size(number);
//     int panjangArray = sizeof(number) / sizeof(number[0]);
//     cout
//         << totalByte << "\n"
//         << singleByte << "\n"
//         << panjangArray2;
    
//         for (int i = 0; i < panjangArray; i++)
//         {
//             cout << "Nilai array : " << number[i] << endl;
//         }
//         // Cek versi c++
//         cout << "Versi c++ saya  : " << __cplusplus;
    
//         // Hapus
//         for (int i = 1; i < 3; i++)
//         {
//             number[i] = number[i + 1];
//         }
//         return 0;
//     }