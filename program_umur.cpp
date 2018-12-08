#include <iostream>
using namespace std;

void Hasil (int x, int y){ 
    if (x==1) { 
        if (y>=17){
            cout << "Pria Dewasa";  
        }
        else{ 
            cout << "Pria Belum Dewasa"; 
        }
    }
    else { 
        if (y>=17){ 
            cout << "Wanita Dewasa";
        }
        else{
            cout << "Wanita Belum Dewasa";
        }
    }
}
int main(){
    int umur, kelamin; 

    cout << "Jenis Kelamin" << '\n';
    cout << "1. Laki-Laki" << '\n';
    cout << "2. Perempuan" << '\n';
    cout << "Masukan Pilihan Anda (1-2): "; cin >> kelamin;
    cout << "Masukan Umur Anda (1-100): "; cin >> umur;
    Hasil(kelamin,umur);
}