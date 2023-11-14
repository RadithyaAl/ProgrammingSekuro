/*
Nama : Raditya Alhamdika Fadhilah
NIM : 16923145
Deskripsi: mengetahui apakah suatu tahun yang diinputkan adalah tahun kabisat atau bukan.

*/

# include <iostream>
using namespace std;

int main()
{
	int tahun;

	cout << "Masukkan tahun : ";
	cin >> tahun;

	if(tahun % 400 == 0)
	{
		cout << "tahun kabisat" << endl;


	} 
	else
	{
		if(tahun%400 != 0 && tahun % 100 != 0 && tahun % 4 == 0)
		{
		cout << "tahun kabisat" << endl;
		}
		else
		{
			cout << "bukan tahun kabisat" << endl;
		}
	}

	return 0;
}