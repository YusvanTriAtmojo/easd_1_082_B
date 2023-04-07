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
void merge(int temp[], int low, int mid, int high);
void m_sort(int temp[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    else {
        int mid;
        m_sort(temp, low, mid);
        m_sort(temp, mid + 1, high);

        merge(temp, low, high, mid);
    }
}
void merge(int temp[], int low, int mid, int high)
{
    int i, YTA, k;
    int sub1 = mid - low + 1;
    int sub2 = high - mid;

    int satu[sub1];
    int dua[sub2];

    for (i = 0; i < sub1; i++)
        satu[i] = temp[low + i];
    for (YTA = 0; YTA < sub2; YTA++)
        dua[YTA] = temp[mid + 1 + YTA];

    i = 0;
    YTA = 0;
    k = low;