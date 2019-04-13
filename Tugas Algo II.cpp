#include <iostream>
using namespace::std;
struct saya {int a,b,c,d;}ayamss;

float Hitung(float a,float b,float c,float d){
    float hasil;
    hasil=(a*0.2)+(b*0.3)+(c*0.35)+(d*0.15);
    if (hasil>100){cout<<"\nERROR";}
    else if (hasil>80){cout<<"\nGrade Anda A";}
    else if (hasil>60){cout<<"\nGrade Anda B";}
    else if (hasil>40){cout<<"\nGrade Anda C";}
    else if (hasil>20){cout<<"\nGrade Anda D";}
    else if (hasil>0){cout<<"\nGrade Anda F ";}
cout<<"\nNilai Anda\t:"<<hasil;
cout<<"\n-----------------------------------------";
}
void masukan () {
cout<<"Masukan Nilai UTS anda\t\t\t:";
cin>>ayamss.a;
cout<<"Masukan Nilai UAS anda\t\t\t:";
cin>>ayamss.b;
cout<<"Masukan Nilai TUGAS anda\t\t:";
cin>>ayamss.c;
cout<<"Masukan Nilai ABSEN anda\t\t:";
cin>>ayamss.d;
cout<<"-----------------------------------------";
Hitung (ayamss.a,ayamss.b,ayamss.c,ayamss.d);
}
main() {
masukan ();
return 0;
}
