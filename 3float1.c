/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz 3folat1 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>

typedef struct{
	float bil;
	int depan;
	int belakang, a;
}angka;

int main(){
	angka nomor1, nomor2, nomor3, nomor4, nomor5, nomor6, total;
	total.a = 0;
	nomor1.a = 0;
	nomor2.a = 0;
	nomor3.a = 0;
	nomor4.a = 0;
	nomor5.a = 0;
	nomor6.a = 0;
	
	scanf("%f\n", &nomor1.bil);
	scanf("%f\n", &nomor2.bil);
	scanf("%f\n", &nomor3.bil);
	scanf("%f\n", &nomor4.bil);
	scanf("%f\n", &nomor5.bil);
	scanf("%f", &nomor6.bil);
	
	nomor1.depan = nomor1.bil;
	nomor1.belakang=(nomor1.bil - nomor1.depan)*10;
	
	nomor2.depan = nomor2.bil;
	nomor2.belakang=(nomor2.bil - nomor2.depan)*10;
	
	nomor3.depan = nomor3.bil;
	nomor3.belakang=(nomor3.bil - nomor3.depan)*10;
	
	nomor4.depan = nomor4.bil;
	nomor4.belakang=(nomor4.bil - nomor4.depan)*10;
	
	nomor5.depan = nomor5.bil;
	nomor5.belakang=(nomor5.bil - nomor5.depan)*10;
	
	nomor6.depan = nomor6.bil;
	nomor6.belakang=(nomor6.bil - nomor6.depan)*10;
	
	if(nomor1.belakang % 3==0 && nomor1.belakang != 0){
		nomor1.a=1;
	}
	
	if(nomor2.belakang % 3==0 && nomor2.belakang != 0){
		nomor2.a=1;
	}
	
	if(nomor3.belakang % 3==0 && nomor3.belakang != 0){
		nomor3.a=1;
	}
	
	if(nomor4.belakang % 3==0 && nomor4.belakang != 0){
		nomor4.a=1;
	}
	
	if(nomor5.belakang % 3==0 && nomor5.belakang != 0){
		nomor5.a=1;
	}
	
	if(nomor6.belakang % 3==0 && nomor6.belakang != 0){
		nomor6.a=1;
	}
	
	total.a = nomor1.a + nomor2.a + nomor3.a + nomor4.a + nomor5.a + nomor6.a;
	
	if(total.a >= 3){
		printf("valid\n");
	}
	else{
		printf("tidak valid\n");
	}
	return 0;
}