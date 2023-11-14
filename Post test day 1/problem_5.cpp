/*
Nama : Raditya Alhamdika Fadhilah
NIM : 16923145
Deskripsi: Memeriksa apakah suatu bilangan yang diinputkan adalah bilangan prima.
*/

# include <iostream>
using namespace std;

int main()
{
	int bilangan;
	bool prime = true;

	cout << "Masukkan bilangan : ";
	cin >> bilangan;

	for(int i = bilangan - 1; i > 1; i--)
	{
		if(bilangan % i == 0)
		{
			prime = false;
		}

	}

	if(prime == true)
	{
		cout << "bilangan " << bilangan << " merupakan bilangan prima" << endl;

	}
	else
	{
		cout << "bilangan " << bilangan << " bukan merupakan bilangan prima" << endl;
	}





	return 0;
}