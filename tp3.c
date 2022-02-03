/*Saya Alief Muhammad Abdillah 2003623 mengerjakan TP3 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <math.h>
//memebuat type data struktur untuk variabel
typedef struct{
	int tanggal, nomor, waktu, duit;
	char kode;
}bungkus;

int main(){
	bungkus masukan1, masukan2, masukan3;
	masukan1.duit, masukan2.duit, masukan3.duit = 0;
	
	scanf("%d %d %c %d", &masukan1.tanggal, &masukan1.nomor, &masukan1.kode, &masukan1.waktu);
	scanf("%d %d %c %d", &masukan2.tanggal, &masukan2.nomor, &masukan2.kode, &masukan2.waktu);
	scanf("%d %d %c %d", &masukan3.tanggal, &masukan3.nomor, &masukan3.kode, &masukan3.waktu);
	
	switch(masukan1.kode){
		case 'A':
			masukan1.duit = masukan1.waktu * 6000;
			break;
		case 'B':
			masukan1.duit = masukan1.waktu * 3000;
			break;
		case 'C':
			masukan1.duit = masukan1.waktu * 10000;
			break;
		default:
			break;
	}
	
	switch(masukan2.kode){
		case 'A':
			masukan2.duit = masukan2.waktu * 6000;
			break;
		case 'B':
			masukan2.duit = masukan2.waktu * 3000;
			break;
		case 'C':
			masukan2.duit = masukan2.waktu * 10000;
			break;
		default:
			break;
	}
	
	switch(masukan3.kode){
		case 'A':
			masukan3.duit = masukan3.waktu * 6000;
			break;
		case 'B':
			masukan3.duit = masukan3.waktu * 3000;
			break;
		case 'C':
			masukan3.duit = masukan3.waktu * 10000;
			break;
		default:
			break;	
	}
	
	if((masukan1.tanggal >= 25 && masukan1.tanggal <= 31) && (masukan1.nomor % 8 == 0)){
		masukan1.duit = masukan1.duit - ((masukan1.duit*10)/100);
	}
	if((masukan2.tanggal >= 25 && masukan2.tanggal <= 31) && (masukan2.nomor % 8 == 0)){
		masukan2.duit = masukan2.duit - ((masukan2.duit*10)/100);
	}
	if((masukan3.tanggal >= 25 && masukan3.tanggal <= 31) && (masukan3.nomor % 8 == 0)){
		masukan3.duit = masukan3.duit - ((masukan3.duit*10)/100);
	}
	
	printf(">> DATA PARKIR MANG OLEH\n");
	printf("-  Nomor Kendaraan : %d\n", masukan1.nomor);
	switch(masukan1.kode){
		case 'A':
			printf("-  Jenis Kendaraan : Mobil\n");
			break;
		case 'B':
			printf("-  Jenis Kendaraan : Motor\n");
			break;
		case 'C':
			printf("-  Jenis Kendaraan : Truk\n");
			break;
		default:
			break;	
	}
	printf("-  Total Biaya Parkir : %d\n", masukan1.duit);
	printf("-  Nomor Kendaraan : %d\n", masukan2.nomor);
	switch(masukan2.kode){
		case 'A':
			printf("-  Jenis Kendaraan : Mobil\n");
			break;
		case 'B':
			printf("-  Jenis Kendaraan : Motor\n");
			break;
		case 'C':
			printf("-  Jenis Kendaraan : Truk\n");
			break;
		default:
			break;	
	}
	printf("-  Total Biaya Parkir : %d\n", masukan2.duit);
	printf("-  Nomor Kendaraan : %d\n", masukan3.nomor);
	switch(masukan3.kode){
		case 'A':
			printf("-  Jenis Kendaraan : Mobil\n");
			break;
		case 'B':
			printf("-  Jenis Kendaraan : Motor\n");
			break;
		case 'C':
			printf("-  Jenis Kendaraan : Truk\n");
			break;
		default:
			break;	
	}
	printf("-  Total Biaya Parkir : %d\n", masukan3.duit);
	
	return 0;
}