/*
Nama : Raditya Alhamdika Fadhilah
NIM : 16923145
Deskripsi: Menampilkan bilangan genap dalam rentang [a, b] dan dipisahkan dengan spasi.
*/


# include <iostream>
using namespace std;

int main(){

    

    int buat_input1, buat_input2;

    cout << "Input : " << endl;    
    cin >> buat_input1; cin >> buat_input2;
    
    if(buat_input1 < buat_input2){
        for(int i = buat_input1; i <= buat_input2; i++){
            if(i % 2 == 0){
                cout << i << " ";
            }
        }
    }

    

    return 0;

}