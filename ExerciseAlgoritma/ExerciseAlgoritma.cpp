//1. Algoritma dibutuhkan untuk menyelesaikan suatu masalah karena ilmu alqoritma mempelajari tentang membuat langkah-langkah atau tahapan dalam menyelesaikan suatu masalah.
//2. Dua struktur algoritma yaitu static dengan contoh array dan dynamic dengan contoh lingked list.
//3. Faktor yang mempengaruhi efisiensi waktu eksekusi suatu protgram adalah 
//   = Kecepatan dari mesin, compiler, operating system, program language, dan size of input.
//4. Jenis algoritma untuk mengukur data yang ukurannya besar yaitu lebih efektif dengan mergesort karena big O notasinya memiliki O(n log n), 
//   namun sulit untuk pembuatannya dan jika banyak data urut maka menjadi tidak efektif karena perbandingannya menjadi banyak. 
//   Namun, tetap saja dalam menghitung data yang besar lebih efektif dengan mergesort dibandingkan jenis lainnya.
//5. Jenis alqoritma berdasarkan big O notasinya yaitu:
//   Quadratic = bubblesort, selectionsort, insertionsort dan quicksort(kasus terparah).
//   Longlinear = Shell sort, mergesort, dan quicksort(kasus efisien).
//6. 

#include <iostream>
using namespace std;

int n;
int yusvan[102];
int temp[102];
void input() {
    while (true) {
        cout << "Masukan banyak array : ";
        cin >> n; 
        if (n <= 102) {
            break;
        }
        else {
            cout << "\nArray maksimal 102!!\n";
        }
    }
    cout << endl;
    cout << "\n===================" << endl;
    cout << "Masukkan data Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < n; i++) {
        cin >> yusvan[i];
    }
}