// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l;

// Implementasi Prosedur dan Fungsi
void input() {
    cout << "masukkan panjang = ";
    cin >> p;
    cout << "masukkan lebar =";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

int luasPersegiP(int a, int b){
    return a * b;
}