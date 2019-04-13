#include <iostream>
#include <conio.h>



using namespace::std;
int main () {
int i,d,jum,c,x;
char b,a;
string nama;
i=0;
x=0;
cout<<"=====================Mastro Cafe====================="<<endl;
cout<<"Masukan Nama Anda\t: ";getline (cin,nama);
do
{
cout<<"Number  "<<i<<endl;
cout<<"=====Daftar Menu Makanan====="<<endl;
cout<<"1. Ayam Bakar + Es teh = Rp.15000"<<endl;
cout<<"2. Angsa Bakar + Es teh = Rp.20000"<<endl;
cout<<"3. Bebek Bakar + Es teh = Rp.18000"<<endl;
cout<<"============================="<<endl;
cout<<"=====Daftar Minuman ====="<<endl;
cout<<"4. Es teh = Rp.3000"<<endl;
cout<<"5. Es Jeruk = Rp.5000"<<endl;
cout<<"6. Es Campur = Rp.8000"<<endl;
cout<<"Masukan Pilihan Anda\t:";cin>>a;
switch(a) {
    case '1' : cout<<"Ayam Bakar + Es teh\t= ";d=15000;cout<<d;break;
    case '2' : cout<<"Angsa Bakar + Es teh\t= ";d=20000;cout<<d;break;
    case '3' : cout<<"Bebek Bakar + Es teh\t= ";d=18000;cout<<d;break;
    case '4' : cout<<"Es Teh\t= ";d=3000;cout<<d;break;
    case '5' : cout<<"Es Jeruk\t= ";d=5000;cout<<d;break;
    case '6' : cout<<"Es Campur\t= ";d=8000;cout<<d;break;
    default  : cout<<"Masukan Pilihan Yang Ada";d=0;


}

cout<<"\nJumlah Pesanan Anda\t= ";cin>>jum;
c=jum*d;
x=x+c;
if (d==0){cout<<"\n<<<<ERROR>>>>"<<endl;}


else{
cout<<"Total Pesana\t= "<<c;
cout<<"\nApakah Mau Tambah Menu Lagi ? [y/n] [";cin>>b;
i++;}

}

while (b=='y'||b=='Y');
if (d==0){cout<<"<<<<ERROR>>>>"<<endl;}
else {
cout<<"\nJumlah Total Yang Dibayar\t: Rp. "<<x;
}




return 0 ;
}


























