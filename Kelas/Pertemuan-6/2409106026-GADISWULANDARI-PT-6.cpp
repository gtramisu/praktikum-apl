// #include <iostream>
// using namespace std;

// int array[4] = {44, 27, 21, 1};
// int n = sizeof(array)/sizeof(array[0]);

// void bubbleSort () {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < (n-i-1); j++) {
//             if(array[j] > array[j+1]) {
//                 // Menukar elemen jika elemen sebelumnya lebih besar
//                 int temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//         }

//         // Menampilkan proses sorting pada setiap iterasi
//         cout << endl << endl;
//         cout << "Proses [" << i + 1 << "] :";
//         for (int k = 0; k < n; k++) {
//             cout << " " << array[k];
//         }
//     }
// }

// int main() {
//     // Menampilkan data sebelum dilakukan sorting
//     cout << "Data sebelum diurutkan: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << array[i]<< " ";
//     }
//     bubbleSort();
//     // Menampilkan data setelah dilakukan sorting
//     cout << endl << "Data sesudah diurutkan: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << array[i] << " " ;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void insertionSort(int a[], int panjang)
// {
//     for (int i = 1; i < panjang; i++)
//     {
//         int key = a[i];
//         int j = i - 1;
//         while (j >= 0 && a[j] > key)
//          {
//              a[j + 1] = a[j];
//              j = j - 1;
//         }
//         a[j + 1] = key;

//         cout << "Tahap ke-" << i << ": ";
//         for (int k = 0; k < panjang; k++)
//         {
//             cout << a[k] << " ";
//         }
//             cout << endl;
//         }
// }

// int main()
// {
//     int arr[6] = {7, 5, 10, 8, 32, 24};
//     int panjang = sizeof(arr) / sizeof(arr[0]);
//     insertionSort(arr, panjang);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int arr[4] = {44, 27, 21, 1};
// int n = sizeof(arr) / sizeof(arr[0]);
// void bubbleSortAsc()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // Menukar elemen jika elemen sebelumnya lebih besar
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//         // Menampilkan proses sorting pada setiap iterasi
//         cout << endl
//              << endl;
//         cout << "Proses [" << i + 1 << "] :";
//         for (int k = 0; k < n; k++)
//         {
//             cout << " " << arr[k];
//         }
//     }
// }

// void bubbleSortDesc()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 // Menukar elemen jika elemen sebelumnya lebih kecil
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     // Menampilkan data sebelum dilakukan sorting
//     cout << "Data sebelum diurutkan: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     bubbleSortAsc();
//     // Menampilkan data setelah dilakukan sorting
//     cout << endl
//          << "Data sesudah diurutkan: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl
//          << endl;
//     cout << "Data setelah diurutkan Descending: " << endl;
//     bubbleSortDesc();
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void insertionSortAsc(int a[], int panjang)
// {
//     // Mulai dari elemen kedua, karena elemen pertama dianggap sudah terurut
//     for (int i = 1; i < panjang; i++)
//     {
//         int key = a[i]; // Simpan elemen yang mau disisipkan
//         int j = i - 1;

//         // Geser elemen yang lebih besar dari key ke kanan
//         while (j >= 0 && a[j] > key)
//         {
//             a[j + 1] = a[j]; // Geser elemen ke kanan
//             j--;             // Geser indeks ke kiri
//         }

//         // Tempatkan key di posisi yang tepat
//         a[j + 1] = key;

//         // Tampilkan array setelah setiap penyisipan
//         cout << "Tahap ke-" << i << ": ";
//         for (int k = 0; k < panjang; k++)
//         {
//             cout << a[k] << " ";
//         }
//         cout << endl;
//     }
// }

// void insertionSortDesc(int a[], int panjang)
// {
//     // Mulai dari elemen kedua, karena elemen pertama dianggap sudah terurut
//     for (int i = 1; i < panjang; i++)
//     {
//         int key = a[i]; // Simpan elemen yang mau disisipkan
//         int j = i - 1;

//         // Geser elemen yang lebih kecil dari key ke kanan
//         while (j >= 0 && a[j] < key)
//         {
//             a[j + 1] = a[j]; // Geser elemen ke kanan
//             j--;             // Geser indeks ke kiri
//         }

//         // Tempatkan key di posisi yang tepat
//         a[j + 1] = key;

//         // Tampilkan array setelah setiap penyisipan
//         cout << "Tahap ke-" << i << ": ";
//         for (int k = 0; k < panjang; k++)
//         {
//             cout << a[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[6] = {7, 5, 10, 8, 32, 24};
//     int panjang = sizeof(arr) / sizeof(arr[0]);

//     cout << "Data sebelum diurutkan: ";
//     for (int i = 0; i < panjang; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertionSortAsc(arr, panjang);
//     cout << "Data setelah diurutkan (Ascending): ";
//     for (int i = 0; i < panjang; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
//     insertionSortDesc(arr, panjang);
//     cout << "Data setelah diurutkan (Descending): ";
//     for (int i = 0; i < panjang; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int arr[] = {38, 27, 43, 3, 9, 82, 10, 55};
// int n = sizeof(arr) / sizeof(arr[0]);

// // Fungsi untuk menggabungkan dua bagian array yang sudah terurut
// void mergeAsc(int arr[], int l, int m, int r)
// {
//     int temp[8];   // array sementara untuk hasil penggabungan
//     int i = l;     // pointer untuk bagian kiri
//     int j = m + 1; // pointer untuk bagian kanan
//     int k = 0;     // pointer untuk temp

//     // Bandingkan elemen dari kedua bagian, dan ambil yang lebih kecil
//     while (i <= m && j <= r)
//     {
//         if (arr[i] < arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             j++;
//         }
//         k++;
//     }

//     // Salin sisa elemen dari bagian kiri (kalau masih ada)
//     while (i <= m)
//     {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }

//     // Salin sisa elemen dari bagian kanan (kalau masih ada)
//     while (j <= r)
//     {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }

//     // Salin kembali dari temp ke array asli di posisi yang benar
//     for (int x = 0; x < k; x++)
//     {
//         arr[l + x] = temp[x];
//     }
// }

// // Fungsi utama merge sort (rekursif)
// void mergeSortAsc(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int m = (l + r) / 2;         // Cari titik tengah
//         mergeSortAsc(arr, l, m);     // Urutkan bagian kiri
//         mergeSortAsc(arr, m + 1, r); // Urutkan bagian kanan
//         mergeAsc(arr, l, m, r);      // Gabungkan dua bagian yang sudah terurut
//     }
// }

// void mergeDesc(int arr[], int l, int m, int r)
// {
//     int temp[8];   // array sementara untuk hasil penggabungan
//     int i = l;     // pointer untuk bagian kiri
//     int j = m + 1; // pointer untuk bagian kanan
//     int k = 0;     // pointer untuk temp

//     // Bandingkan elemen dari kedua bagian, dan ambil yang lebih besar
//     while (i <= m && j <= r)
//     {
//         if (arr[i] > arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             j++;
//         }
//         k++;
//     }

//     // Salin sisa elemen dari bagian kiri (kalau masih ada)
//     while (i <= m)
//     {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }

//     // Salin sisa elemen dari bagian kanan (kalau masih ada)
//     while (j <= r)
//     {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }

//     // Salin kembali dari temp ke array asli di posisi yang benar
//     for (int x = 0; x < k; x++)
//     {
//         arr[l + x] = temp[x];
//     }
// }

// void mergeSortDesc(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int m = (l + r) / 2;          // Cari titik tengah
//         mergeSortDesc(arr, l, m);     // Urutkan bagian kiri
//         mergeSortDesc(arr, m + 1, r); // Urutkan bagian kanan
//         mergeDesc(arr, l, m, r);      // Gabungkan dua bagian yang sudah terurut
//     }
// }

// int main()
// {
//     cout << "Sebelum sorting: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     mergeSortAsc(arr, 0, n - 1); // Panggil merge sort dari awal sampai akhir array

//     cout << "Sesudah sorting: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Mengurutkan secara descending
//     mergeSortDesc(arr, 0, n - 1); // Panggil merge sort dari awal sampai akhir array
//     cout << "Sesudah sorting descending: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int arr[] = {3, 4, 2, 9, 8, 6, 5, 7};
// int n = sizeof(arr) / sizeof(arr[0]);

// void quickSortAsc(int arr[], int low, int high)
// {
//     if (low >= high)
//         return;
//     // menentukan data tengah sebagai pivot
//     int mid = low + (high - low) / 2;
//     int pivot = arr[mid];
//     int i = low, j = high;
//     while (i <= j)
//     {
//         while (arr[i] < pivot)
//         {
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             j--;
//         }
//         if (i <= j)
//         { // Tukar elemen jika berada di posisi yang salah
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     // Rekursi untuk bagian kiri dan kanan array
//     if (low < j)
//     {
//         quickSortAsc(arr, low, j);
//     }
//     if (i < high)
//     {
//         quickSortAsc(arr, i, high);
//     }
// }

// void quickSortDesc(int arr[], int low, int high)
// {
//     if (low >= high)
//         return;
//     // menentukan data tengah sebagai pivot
//     int mid = low + (high - low) / 2;
//     int pivot = arr[mid];
//     int i = low, j = high;
//     while (i <= j)
//     {
//         while (arr[i] > pivot)
//         {
//             i++;
//         }
//         while (arr[j] < pivot)
//         {
//             j--;
//         }
//         if (i <= j)
//         { // Tukar elemen jika berada di posisi yang salah
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     // Rekursi untuk bagian kiri dan kanan array
//     if (low < j)
//     {
//         quickSortDesc(arr, low, j);
//     }
//     if (i < high)
//     {
//         quickSortDesc(arr, i, high);
//     }
// }

// int main()
// {
//     cout << "Data Belum Terurut: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     quickSortAsc(arr, 0, n - 1);
//     cout << endl
//          << "Hasil Quick Sort: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
//     quickSortDesc(arr, 0, n - 1);
//     cout << endl
//          << "Hasil Quick Sort Descending: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void selectionSortAsc(int a[], int panjang)
// {
//     // Loop untuk mengatur posisi elemen dari depan
//     for (int i = 0; i < panjang - 1; i++)
//     {
//         int min = i; // Anggap elemen ke-i adalah yang terkecil

//         // Cari elemen terkecil di sisa array (dari i+1 sampai akhir)
//         for (int j = i + 1; j < panjang; j++)
//         {
//             if (a[j] < a[min])
//             {
//                 min = j; // Update indeks elemen terkecil
//             }
//         }

//         // Tukar elemen terkecil dengan elemen di posisi i
//         int temp = a[i];
//         a[i] = a[min];
//         a[min] = temp;

//         // Tampilkan hasil array setelah tiap tahap penukaran
//         cout << "Tahap ke-" << i + 1 << ": ";
//         for (int k = 0; k < panjang; k++)
//         {
//             cout << a[k] << " ";
//         }
//         cout << endl;
//     }
// }

// void selectionSortDesc(int a[], int panjang)
// {
//     // Loop untuk mengatur posisi elemen dari depan
//     for (int i = 0; i < panjang - 1; i++)
//     {
//         int max = i; // Anggap elemen ke-i adalah yang terbesar

//         // Cari elemen terbesar di sisa array (dari i+1 sampai akhir)
//         for (int j = i + 1; j < panjang; j++)
//         {
//             if (a[j] > a[max])
//             {
//                 max = j; // Update indeks elemen terbesar
//             }
//         }
//         // Tukar elemen terbesar dengan elemen di posisi i
//         int temp = a[i];
//         a[i] = a[max];
//         a[max] = temp;

//         // Tampilkan hasil array setelah tiap tahap penukaran
//         cout << "Tahap ke-" << i + 1 << ": ";
//         for (int k = 0; k < panjang; k++)
//         {
//             cout << a[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[6] = {8, 45, 6, 12, 81, 32};
//     int panjang = sizeof(arr) / sizeof(arr[0]);

//     cout << "Data sebelum diurutkan: ";
//     for (int i = 0; i < panjang; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Data setelah diurutkan (Selection Sort Ascending):" << endl;
//     selectionSortAsc(arr, panjang);

//     cout << "Data setelah diurutkan (Selection Sort Descending):" << endl;
//     selectionSortDesc(arr, panjang);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// const int MAKS = 100;

// struct Mahasiswa
// {
//     string nama;
//     string jurusan;
// };

// Mahasiswa mahasiswa[MAKS];
// int jumlahData = 0;

// // CREATE
// void tambahMahasiswa(Mahasiswa *data, int &jumlah, string namaBaru, string jurusanBaru)
// {
//     if (jumlah < MAKS)
//     {
//         data[jumlah].nama = namaBaru;
//         data[jumlah].jurusan = jurusanBaru;
//         jumlah++;
//         cout << "Mahasiswa ditambahkan.\n";
//     }
//     else
//     {
//         cout << "Data penuh!\n";
//     }
// }

// // READ
// void tampilMahasiswa(Mahasiswa *data, const int &jumlah)
// {
//     cout << "\nDaftar Mahasiswa:\n";
//     for (int i = 0; i < jumlah; i++)
//     {
//         cout << i + 1 << ". Nama: " << data[i].nama << ", Jurusan: " << data[i].jurusan << endl;
//     }
// }

// // UPDATE
// void ubahMahasiswa(Mahasiswa *data, const int &jumlah, int index, string namaBaru, string jurusanBaru)
// {
//     if (index >= 0 && index < jumlah)
//     {
//         data[index].nama = namaBaru;
//         data[index].jurusan = jurusanBaru;
//         cout << "Data berhasil diubah.\n";
//     }
//     else
//     {
//         cout << "Index tidak valid!\n";
//     }
// }

// // DELETE
// void hapusMahasiswa(Mahasiswa *data, int &jumlah, int index)
// {
//     if (index >= 0 && index < jumlah)
//     {
//         for (int i = index; i < jumlah - 1; i++)
//         {
//             data[i] = data[i + 1];
//         }
//         jumlah--;
//         cout << "Data berhasil dihapus.\n";
//     }
//     else
//     {
//         cout << "Index tidak valid!\n";
//     }
// }

// // Bubble Sort
// void bubbleSort(Mahasiswa *data, const int &jumlah)
// {
//     for (int i = 0; i < jumlah - 1; i++)
//     {
//         for (int j = 0; j < jumlah - i - 1; j++)
//         {
//             if (data[j].nama > data[j + 1].nama)
//             {
//                 swap(data[j], data[j + 1]);
//             }
//         }
//     }
//     cout << "Data berhasil diurutkan dengan Bubble Sort.\n";
// }

// // Selection Sort
// void selectionSort(Mahasiswa *data, const int &jumlah)
// {
//     for (int i = 0; i < jumlah - 1; i++)
//     {
//         int indeksMin = i;
//         for (int j = i + 1; j < jumlah; j++)
//         {
//             if (data[j].nama < data[indeksMin].nama)
//             {
//                 indeksMin = j;
//             }
//         }
//         if (indeksMin != i)
//         {
//             swap(data[i], data[indeksMin]);
//         }
//     }
//     cout << "Data berhasil diurutkan dengan Selection Sort.\n";
// }

// // Insertion Sort
// void insertionSort(Mahasiswa *data, const int &jumlah)
// {
//     for (int i = 1; i < jumlah; i++)
//     {
//         Mahasiswa key = data[i];
//         int j = i - 1;
//         while (j >= 0 && data[j].nama > key.nama)
//         {
//             data[j + 1] = data[j];
//             j--;
//         }
//         data[j + 1] = key;
//     }
//     cout << "Data berhasil diurutkan dengan Insertion Sort.\n";
// }

// int main()
// {
//     int pilihan;
//     string nama, jurusan;
//     int index;

//     do
//     {
//         cout << "\n===== MENU CRUD MAHASISWA (Struct + Sorting) =====\n";
//         cout << "1. Tambah Mahasiswa\n";
//         cout << "2. Tampilkan Mahasiswa\n";
//         cout << "3. Ubah Mahasiswa\n";
//         cout << "4. Hapus Mahasiswa\n";
//         cout << "5. Urutkan Mahasiswa (berdasarkan Nama)\n";
//         cout << "6. Keluar\n";
//         cout << "Pilihan: ";
//         cin >> pilihan;
//         cin.ignore();

//         switch (pilihan)
//         {
//         case 1:
//             cout << "Masukkan nama: ";
//             getline(cin, nama);
//             cout << "Masukkan jurusan: ";
//             getline(cin, jurusan);
//             tambahMahasiswa(mahasiswa, jumlahData, nama, jurusan);
//             break;
//         case 2:
//             tampilMahasiswa(mahasiswa, jumlahData);
//             break;
//         case 3:
//             tampilMahasiswa(mahasiswa, jumlahData);
//             cout << "Masukkan nomor yang ingin diubah: ";
//             cin >> index;
//             cin.ignore();
//             cout << "Masukkan nama baru: ";
//             getline(cin, nama);
//             cout << "Masukkan jurusan baru: ";
//             getline(cin, jurusan);
//             ubahMahasiswa(mahasiswa, jumlahData, index - 1, nama, jurusan);
//             break;
//         case 4:
//             tampilMahasiswa(mahasiswa, jumlahData);
//             cout << "Masukkan nomor yang ingin dihapus: ";
//             cin >> index;
//             hapusMahasiswa(mahasiswa, jumlahData, index - 1);
//             break;
//         case 5:
//             // bubbleSort(mahasiswa, jumlahData);
//             // selectionSort(mahasiswa, jumlahData);
//             // insertionSort(mahasiswa, jumlahData);
//             break;
//         case 6:
//             cout << "Keluar dari program.\n";
//             break;
//         default:
//             cout << "Pilihan tidak valid!\n";
//         }
//     } while (pilihan != 6);

//     return 0;
// }