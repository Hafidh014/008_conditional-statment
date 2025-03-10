#include <iostream>
using namespace std;

float luas, panjang, lebar;

void inputData(){
    cout <<"masukan panjangnya: ";
    cin >>panjang;
    cout <<"masukan lebarnya: ";
    cin >> lebar;
}
void prosedurLuas(){
    luas = lebar * panjang;
}

void tampilkanLuas(){
    cout <<"luas persegi panjang: " << luas << endl;
}

int main(){
    inputData();
    prosedurLuas();
    tampilkanLuas();
}