#include <stdio.h>
#include <math.h>

/*typedef struct{
	int panjang;
	int lebar;
	int tinggi;
	int luasPer;
	int volume;
}sisi;

int main(){
	sisi balok;
	
	printf("masukan panjang: ");
	scanf("%d", &balok.panjang);
	printf("masukan lebar: ");
	scanf("%d", &balok.lebar);
	printf("masukan tinggi: ");
	scanf("%d", &balok.tinggi);
	
	balok.luasPer = 2*((balok.panjang*balok.lebar)+(balok.panjang*balok.tinggi)+(balok.lebar*balok.tinggi));
	balok.volume = balok.panjang*balok.lebar*balok.tinggi;
	
	printf("Luas Permukaan: %d\n", balok.luasPer);
	printf("Volume: %d\n", balok.volume);
	
	return 0;
}*/

/*typedef struct{
	int pembilang;
	int penyebut;
}pecahan1;

typedef struct{
	int pembilang;
	int penyebut;
}pecahan2;

int main(){
	pecahan1 a;
	pecahan2 b;
	
	printf("masukan nilai pecahan1: ");
	scanf("%d / %d", &a.pembilang, &a.penyebut);
	printf("masukan nilai pecahan2: ");
	scanf("%d / %d", &b.pembilang, &b.penyebut);
	
	int kaliPembilang = a.pembilang*b.pembilang;
	int kaliPenyebut = a.penyebut*b.penyebut;
	
	printf("hasil kali pecahan: %d / %d\n", kaliPembilang, kaliPenyebut);
	
	return 0;
}*/

/*typedef struct{
	int pembilang;
	int penyebut;
}pecahan;

int main(){
	pecahan a;
	pecahan b, c;
	
	printf("masukan nilai pecahan 1 (pembilang / penyebut): ");
	scanf("%d / %d", &a.pembilang, &a.penyebut);
	printf("masukan nilai pecahan 2 (pembilang / penyebut): ");
	scanf("%d / %d", &b.pembilang, &b.penyebut);
	
	c.penyebut = a.penyebut*b.penyebut;
	c.pembilang = (c.penyebut/a.penyebut*a.pembilang)+(c.penyebut/b.penyebut*b.pembilang);
	
	printf("hasil kali pecahan: %d / %d\n", c.pembilang, c.penyebut);
	
	return 0;
}*/

typedef struct{
	int nim;
	int nilai;
}mahasiswa;
	
int main(){
	mahasiswa a, b, c;
	
	printf("masukan NIM mahasiswa A: ");
	scanf("%d", &a.nim);
	printf("nilai A: ");
	scanf("%d", &a.nilai);
	printf("masukan NIM mahasiswa B: ");
	scanf("%d", &b.nim);
	printf("nilai B: ");
	scanf("%d", &b.nilai);
	printf("masukan NIM mahasiswa C: ");
	scanf("%d", &c.nim);
	printf("nilai C: ");
	scanf("%d", &c.nilai);
	
	if(a.nilai>b.nilai && a.nilai>c.nilai){
		printf("nilai terbesar : %d\n", a.nilai);
		printf("diraih oleh mahasiswa: %d\n", a.nim);
	}
	else if(b.nilai>a.nilai && b.nilai>c.nilai){
		printf("nilai terbesar : %d\n", b.nilai);
		printf("diraih oleh mahasiswa: %d\n", b.nim);
	}
	else if(c.nilai>b.nilai && c.nilai>a.nilai){
		printf("nilai terbesar : %d\n", c.nilai);
		printf("diraih oleh mahasiswa: %d\n", c.nim);
	}
	
	return 0;
}