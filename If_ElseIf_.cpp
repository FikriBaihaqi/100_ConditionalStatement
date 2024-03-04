#include <iostream>
using namespace std;

int main() {
    int nBilA,nBilB;
    string status;
    srand(time(0));

    nBilA,nBilB = rand() % 10;
    cout << "Nilai Bilangan A = " << nBilA << endl;
    cout << "Nilai Bilangan B = " << nBilB << endl;

    if (nBilA == nBilB){
        status = "sama besar";
    }

    else if(nBilA > nBilB ){
        status = "lebih dari";
    }

    else {
        status = "kurang dari";
    }

    cout << "Tampilkan Status : "<< status << endl;

return 0;  
}
