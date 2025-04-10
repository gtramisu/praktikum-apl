// #include <iostream>
// using namespace std;

// void tambah(int a, int b)

// {
   
//     return 0
// }

// int main()
// {
//     cout << a + b << endl;
// }

// int tambah(int a, int b)
// {
//     return a + b;
// }

// int main ()
// {
//     int hasil tambah (5+6);
//     cout << tambah (5, 6)
//     return 0;
// }

// void perulangan()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         if (i == 2)
//         {
//             return;
//         }
//         cout << i << endl;
//     }
// }

// int ubahNilai(int a) 
// {
//     a = 20;
//     return a;
// }

// int main()
// {
//     int a = 10;

//     cout << "a sekarang : " << ubahNilai(a) << endl;

//     cout << "a di dalam fungsi : " << ubahNilai(a) << endl;

//     cout << "a sekarang : " << a << endl;
// }

// int tambah(int a, int b)
// {
//     return a + b;
// }
// double tambah(double a, double b)

// int main ()
// {
//     cout << "ini tambah int a + b : " << tambah (10,5) << endl;
    
//     cout << "ini fungsi double a + b : " << tambah (10,5) << endl;

// }

// int faktorial(int n)
// {
//     if (n == 1)
//         return 1;
//     return n * faktorial (n - 1)
// }

// int main()
// {
//     cout << faktorial(5);
// }

#include <iostream>
using namespace std;


bool login (string username, string password){
    return username == "adis" && password == "lucuk";
    }

int main(){
    if (!login("adis", "lucuk")){
        exit(0);
    }
    cout << "program berjalan login berhasil" << endl;
    return 0;
}