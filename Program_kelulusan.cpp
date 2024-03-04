#include <iostream>
using namespace std;

int main() {
    int nMatematika, nFisika;
    string status;

    cout << "Masukkan Nilai Matematika = ";
    cin >> nMatematika; 
    cout << "Masukkan Nilai Fisika = ";
    cin >> nFisika;

    if (nMatematika > 70 || nMatematika + nFisika % 2 > 60 ){
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }
    cout << "Status Siswa : " << status << endl;
    
    return 0;
}
