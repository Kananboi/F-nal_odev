#include <iostream>
#include <fstream>
using namespace std;
string work[3] {"Kesim" , "Boya , Bakim"} ;

struct  Musteri{
    string name;
    string surname ;
    string day ;
    string time ;
    string work ;
};

Musteri costumer;
void Randevu_Ekle();
void Randevu_Sil();
int main() {
    char secim ;
    cout << "|-------Hosgeldiniz------|" << endl ;
    cout << "|      Secim Yapiniz     |" << endl ;
    cout << "|   1- Randevu alma      |" << endl ;
    cout << "|   2- Randevu iptal     |" << endl ;
    cout << "|------------------------|" << endl ;
    cin >> secim ;
    switch (secim){

        case '1':
            Randevu_Ekle();
            break;
        case '2':
            Randevu_Sil();

            break;

    };



}



void Randevu_Sil(){




}
void Randevu_Ekle() {
    ofstream yaz("data.dat",ios::binary |ios::app);
    int islem ;
    cout << "Adinizi giriniz:" << endl;
    getline(cin, costumer.name);
    cout << "Soyadinizi giriniz:" << endl;
    cin >> costumer.surname ;
    cout <<" islem Seciniz \n" <<endl ;

    cout << "|------Secim Yapiniz-----|" << endl ;
    cout << "|   1- Sac Kesim         |" << endl ;
    cout << "|   2- Sac Boyama        |" << endl ;
    cout << "|   3- Sac Bakim        |" << endl ;
    cout << "|------------------------|" << endl ;

    cin >> islem ;
    costumer.work = work[islem] ;
    cout <<" Gun Seciniz \n" <<endl ;
    cout << "|---------Secim  Yapiniz--------|" << endl ;
    cout << "| Pazartesi , Sali , Carsamba   |" << endl ;
    cout << "| Persembe  , Cuma , Cumartesi  |" << endl ;
    cout << "|-------------------------------|" << endl ;
    cin >> costumer.day ;
    cout <<" Saat Seciniz \n" <<endl ;
    cout << "|---------Secim  Yapiniz--------|" << endl ;
    cout << "| 12.00 , 12.30 , 13.00 , 13.30 |" << endl ;
    cout << "| 14.00 , 14.30 , 15.00 , 15.30 |" << endl ;
    cout << "|     16.00 , 16.30 , 17.00     |" << endl ;
    cout << "|-------------------------------|" << endl ;
    cin >> costumer.time ;
    cout << "Randevunuz Basari ile alinmistir" << endl ;
    yaz.write((char*)&costumer, sizeof(costumer));
    yaz.close();
}
