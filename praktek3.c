#include <stdio.h>
#include <math.h>
/*
int main(){
	char nilai;
	
	printf("Masukan nilai anda:\n");
	scanf(" %c", nilai);
	
	switch(nilai){
		case 'A':
			printf("PERFECT\n");
			break;
		case 'B':
			printf("GOOD\n");
			break;
		case 'C':
			printf("NOT BAD\n");
			break;
		case 'D':
			printf("YOUR SCORE IS BAD!\n");
			break;
		case 'E':
			printf("REMEDIAL!\n");
			break;
		default:
			printf("You Dont have any score!\n");
			break;
	}
	return 0;
}


typedef struct{
	int nim;
	int nilai;
}siswa;

int main(){
	siswa pertama, kedua;
	
	scanf("%d %d", &pertama.nim, &pertama.nilai);
	scanf("%d $d", &kedua.nim, &kedua.nilai);
	
	print("NIM siswa pertama: %d\n)", pertama.nim);
	print("Nilai siswa pertama: %d\n)", pertama.nilai);
	print("NIM siswa kedua: %d\n)", kedua.nim);
	print("Nilai siswa kedua: %d\n)", kedua.nilai);
	return 0;
}

typedef struct{
	int pilihanMenu;
	int banyak;
	int total;
	char member;
}customer;

int main(){
	printf("==============================\n");
	printf("SELAMAT DATANG DI MAMANG RESTO\n");
	printf("==============================\n");
	printf("            MENU              \n");
	printf("1. Sosis Bakar    : Rp.5.000  \n");
	printf("2. Nasi goreng    : Rp.18.000  \n");
	printf("3. Spaghetti      : Rp.20.500  \n");
	printf("4. Green tea      : Rp.8.000  \n");
	printf("==============================\n");
	
	customer pertama;
	pertama.total = 0;
	
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", &pertama.pilihanMenu);
	
	printf("Masukkan Banyak menu yang anda pilih: ");
	scanf("%d", &pertama.banyak);

	printf("Apakah Anda member dari Mamang Resto (Y/N)? ");
	scanf(" %c", &pertama.member);

	switch(pertama.pilihanMenu){
		case 1:
			pertama.total = pertama.banyak * 5000;
			break;
		case 2:
			pertama.total = pertama.banyak * 18000;
			break;
		case 3:
			pertama.total = pertama.banyak * 20500;
			break;
		case 4:
			pertama.total = pertama.banyak * 8000;
			break;
		default:
			printf("Menu Tidak Tersedia");
			break;
	}
	
	if((pertama.total>0) && (pertama.pilihanMenu >= 1) && (pertama.pilihanMenu<=4)){
		if(pertama.member == 'Y'){
			pertama.total = pertama.total - ((pertama.total * 20)/100);
		}
		printf("Total Pesanan : Rp.%d\n", pertama.total);
	}
	
	return 0;
}*/

typedef struct{
	char huruf;
	int nilai1, nilai2, nilai3, total;
}bungkus;

int main(){
	bungkus operasi;
	operasi.total = 0;
	
	scanf("%d %d %d", &operasi.nilai1, &operasi.nilai2, &operasi.nilai3);
	scanf(" %c", &operasi.huruf);
	
	switch(operasi.huruf){
		case 'A':
			operasi.total = (operasi.nilai1*operasi.nilai2)+(operasi.nilai2*operasi.nilai3);
			break;
		case 'B':
			operasi.total = (operasi.nilai1*operasi.nilai2)/operasi.nilai3;
			break;
		case 'C':
			operasi.total = (operasi.nilai2-operasi.nilai3)*operasi.nilai1;
			break;
		default:
			operasi.total = (operasi.nilai1+operasi.nilai2)-operasi.nilai3;
			break;
	}
	printf("%d", operasi.total);
	
	return 0;
}