/*
Nama : Raditya Alhamdika Fadhilah
NIM : 16923145
Deskripsi: Menampilkan rata-rata dari bilangan yang diinputkan.
*/

# include <iostream>
using namespace std;

int main(){
	//nilai rata-rata
	int nilai_input;

	cout << "input:"<< endl;
	cout << "jumlah bilangan : ";
	cin >> nilai_input;

	int data_bilangan[nilai_input];

	for(int i = 0; i < nilai_input; i++){
		cout << "masukan bilangan ke " << i+1 << " : ";
		cin >> data_bilangan[i];
		cout << endl;
	}

	int jumlah = 0;
	for(int i = 0; i < nilai_input; i++){
		jumlah = jumlah + data_bilangan[i];

	}

	// menghitung rata-rata

	float rata2 = float(jumlah)/nilai_input;

	cout << "RATA-RATA : " << rata2 << endl;

	
	return 0;
}