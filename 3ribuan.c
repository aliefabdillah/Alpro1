/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz 3folat1 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>

typedef struct{
	int angka;
	int x;
}bungkus;

int main(){
	bungkus nomor1, nomor2, nomor3, nomor4, nomor5, nomor6, total;
	total.x = 0;
	nomor1.x = 0;
	nomor2.x = 0;
	nomor3.x = 0;
	nomor4.x = 0;
	nomor5.x = 0;
	nomor6.x = 0;
	
	scanf("%d", &nomor1.angka);
	scanf("%d", &nomor2.angka);
	scanf("%d", &nomor3.angka);
	scanf("%d", &nomor4.angka);
	scanf("%d", &nomor5.angka);
	scanf("%d", &nomor6.angka);
	
	if(nomor1.angka > 999){
		nomor1.x = 1;
	}
	if(nomor2.angka > 999){
		nomor2.x = 1;
	}
	if(nomor3.angka > 999){
		nomor3.x = 1;
	}
	if(nomor4.angka > 999){
		nomor4.x = 1;
	}
	if(nomor5.angka > 999){
		nomor5.x = 1;
	}
	if(nomor6.angka > 999){
		nomor6.x = 1;
	}
	
	total.x = nomor1.x + nomor2.x + nomor3.x + nomor4.x + nomor5.x + nomor6.x;
	
	if(total.x >= 3){
		printf("ribuan 3 atau lebih\n");
	}
	else{
		printf("tidak valid\n");
	}
	
	return 0;
}