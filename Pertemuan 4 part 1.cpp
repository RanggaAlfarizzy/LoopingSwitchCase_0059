#include <iostream>
using namespace std;

int main(){
    //Perulangan For untuk pencacah naik
    int i;
    cout << "Perulangan For Pencacah Naik" << endl;
    for ( i = 0; i <= 4; i++){
        cout << "Nilai i : " << i
        << " Lari keliling lapangan" << endl;
    }  


cout << "Nilai i terakhir : " << i << endl;
cout << endl;

//Perulangan For untuk pencacah turun
cout << "Perulangan For pencacah Turun" << endl;
for (i = 4; i >= 0; i--){
    cout << "Nilai i : " << i 
      << " Lari keliling lapangan" << endl;
}

cout << "Nilai i terakhir : " << i << endl;
}