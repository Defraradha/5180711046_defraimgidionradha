#include<iostream>
using namespace::std;

double input(string text){
double total;
cout<<"INPUT NILAI "<<text<<" : ";cin>>total;
return total;}

void grade(double total){

if(total>=81){cout<<" NILAI KONVERSI KE HURUF : A ";}
else if(total>=61 && total<=80){cout<<" NILAI KONVERSI KE HURUF : B ";}
else if(total>=41 && total<=60){cout<<" NILAI KONVERSI KE HURUF : C ";}
else if(total>=21 && total<=40){cout<<" NILAI KONVERSI KE HURUF : D ";}
else (cout<<" NILAI KONVERSI KE HURUF : E");}

main(){
struct mahasiswa{
double uts, uas, tgs, abs, total;}mhs;

cout<<" NILAI UTS           : ";cin>>mhs.uts;cout<<endl;
cout<<" NILAI UAS           : ";cin>>mhs.uas;cout<<endl;
cout<<" NILAI TUGAS         : ";cin>>mhs.tgs;cout<<endl;
cout<<" NILAI PRESENSI      : ";cin>>mhs.abs;cout<<endl;
mhs.total=(20*mhs.uts/100)+(30*mhs.uas/100)+(35*mhs.tgs/100)+(15*mhs.abs/100);
cout<<" TOTAL NILAI ANDA    : "<<mhs.total;
cout<<endl;
grade(mhs.total);
cout<<endl;
cout<<endl;
};
