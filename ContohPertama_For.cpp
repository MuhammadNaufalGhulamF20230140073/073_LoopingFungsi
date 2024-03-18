#include <iostream>
using  namespace std;

int main(){
    int a;
    int arr[5];

    for (a = 0;a<5;a++)
    {
        cout << a << ":"<< "Naufal" << endl;
    }

    for (a = 0; a < 5; a ++){
        cout << "Masukan Nama = ";
        cin >>arr[a];

    }

    for (a = 0; a<5;a++){
        cout <<"Nama Ke - " << a << " : " << arr[a] << endl;
    }
    
}
