// #include <iostream>
// using namespace std;

// int main() {

//     int stack = 64;

//     int isi = stack;
//     cout << stack<<endl;
//     stack = 69;

//     cout << stack<<endl;
//     cout << *isi<<endl;

//     cout <<"......setelah var isi diubah...."<<endl;

//     cout << stack<<endl;
//     cout << *isi<<endl;
// }

//     cout <<"stack: " <<stack<<endl;
//     cout <<"&stack: " <<&stack<<endl;

//     return 0;

// #include <iostream>
// using namespace std;

// struct orang{
//     string nama;
//     int umur;
// };

// int main() {

//     orang orang;
//     orang, nama = "adis";
//     orang, umur = "19";

//     orang* orang2 = &orang;

//     cout << orang, nama<<enld;
//     cout << orang, umur<<endl;

//     orang* orang3 = new orang ();     


// }

// #include <iostream>
// using namespace std;

// struct orang{
//     string nama;
//     int umur;
   
// };

// int main (){

//     int PrimeNumber[] = {
//         2,3,5,7,11,13
//     };

//     int (*ptrPrimeNumber)[] = PrimeNumber;

//     for (int i = 0; i < 6; i++)
//     {
//         cout <<*ptrPrimeNumber[i] << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int ubahNilai(int a, int b){
//     return a=b;
// }
// int main () {
//     int a,b;
//     a=5;
//     b=20;
//     ubahNilai( a, b );
//     cout << a;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int ubahNilai(int &a, int b){
//     return a=b;
// }
// int main () {
//     int a,b;
//     a=5;
//     b=20;

//     ubahNilai( a, b );
//     cout << a;

//     return 0;
// }