#include <iostream>
using namespace std;

string nama;
int nAvanza, nMclaren, nGTR, nPaggani, nLamborgini;
int hAvanza = 300, hMcLaren = 5000, hGTR = 4000, hPaggani = 200000, hLamborgini = 8000;  

void input(){
    cout << "Nama Pembeli : ";
    cin >> nama;

    cout << "Jumblah Avanza: ";
    cin >> nAvanza;

        cout << "Jumblah McLaren: ";
    cin >> nMclaren;

    cout << "Jumblah GTR: ";
    cin >> nGTR;

    cout << "Jumblah Paggani: ";
    cin >> nPaggani;

        cout << "Jumblah Lamborgini: ";
    cin >> nLamborgini;
}

int TotalHarga(){
    return (nLamborgini * hLamborgini) + (nAvanza * hAvanza) + (nPaggani * hPaggani) + (nGTR * hGTR) + (nMclaren * hMcLaren);
}

void display(){
    cout << "Total Harganya : " << TotalHarga() << endl;
}

int main(){
    input();
    display();
}