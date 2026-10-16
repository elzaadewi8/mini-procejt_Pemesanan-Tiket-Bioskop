#include<iostream>
using namespace std;

struct Film{
    string nama;
    int harga;
};

float hitungDiskon(int tiket, int total){
    if (tiket>=5){
        return total*0.2;
    } else if (tiket>=3){
        return total*0.1;
    } else {
        return 0;
    }
}

int main(){
Film film [3] = {
    {"Putri Duyung", 30000},
    {"Bidadari", 35000},
    {"Jiny oh Jiny", 40000}
};
int i, pilihan;
char ulangmenu;

do {
    cout << "=====DAFTAR FILM=====\n";
for (i=0; i<3; i++){
    cout << i+1 << ". Nama Film \t= " << film[i].nama << endl;
}
    cout << "Pilih Film (1-3) = ";
    cin >> pilihan;

int kurakura;
switch (pilihan){
    case 1:
        kurakura = 0;
        break;
    case 2:
        kurakura = 1;
        break;
    case 3:
        kurakura = 2;
        break;
    default:
        cout << "Pilihan Film tidak ada !!\n";
        continue;
}
    cout << "\n=====DETAIL USER=====\n";
    cout << "Nama Film \t\t= " << film[kurakura].nama << endl;
    cout << "Harga tiket \t\t= " << film[kurakura].harga << endl;
    int tiket;
    cout << "Tiket yang dibeli \t= ";
    cin >> tiket;

    cout << "\n=====INFO HARGA=====\n";
    int total=film[kurakura].harga*tiket;
    cout << "Jumlah harga tiket \t= Rp." << total << endl;
    float diskon=hitungDiskon(tiket, total);
    cout << "Diskon sebesar \t\t= Rp." << diskon << endl;
    float totalBayar=total-diskon;
    cout << "Total Pembayaran \t= Rp." << totalBayar << endl;

if (pilihan != 3) {
    cout << "\nKembali ke menu? (y/n) = ";
    cin >> ulangmenu;
system("cls");
}

} while (ulangmenu=='y' || ulangmenu=='Y');

}
