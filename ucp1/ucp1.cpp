#include <iostream>
using namespace std;

int main()
{

	float nTangerang, nBekasi, rerata;
	string status;

	cout << "Nama Kota = ";
	cin >> nTangerang; 
	cout << "Nama Kota = ";
	cin >> nBekasi;

	rerata = (nBekasi + nTangerang) / 2;

	if (rerata >= 75) {
		status = "Tidak Sehat";
	}
	else if (nTangerang >= 45) {
		status = "Sehat";
	}
	else {
		status = "Tidak Sehat";
	}

	cout << "Statusnya adalah = " << status << endl;


}



// 1. deklarasi variable yaitu memasukkan variable kedalam program yg kita buat seperti contoh nya = 
// float nMahasiswa
// int main
// string status
// 
// 2. contoh implementasi dari procedur
// void input() = procedur untuk input
// 
// contoh implementasi dari fungsi
// int main() = untuk memanggil procedur
// 
// 3. contoh implementasi dari looping
// while (true) = untuk mengulang kondisi
//
// 4. conditional statements
//
// 5. implementasi dari struct
// struct DetailAlamat