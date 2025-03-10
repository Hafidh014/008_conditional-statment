#include <iostream>
using namespace std;

float panjang, lebar;

void inputData(){
    cout << "Masukan panjang: ";
    cin >> panjang;
    cout << "Masukan Lebar: ";
    cin >> lebar;   
}

float fungsiluas(){
    return panjang * lebar;
}

float hitungLuasBerparameter(float a, float b);


float hitungLuasBerparameter(float a, float b){
    return a * b;
}

void TampilkanFungsiLuas(){
    cout << "Luas persegi panjang: (fungsi tidak berparameter)" << fungsiluas() << endl;
}

void tampilkanLuasBerparameter(){
    cout << "Luas persegi panjang: (fungsi berparameter)" << hitungLuasBerparameter(panjang, lebar) << endl;
}

int main()
{
    inputData();
    TampilkanFungsiLuas();
    tampilkanLuasBerparameter();
}