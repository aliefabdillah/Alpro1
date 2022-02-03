#include <stdio.h>
#include <math.h>
/*
int main(){
//membuat variabel
	int bil;
	int satuan;
	int puluhan;
	int ratusan;
	int ribuah;
//membuat masukan nilai bilangan
	printf("input nilai ribuan:");
	scanf("%d", &bil);
//membuat rumus pemecah
	satuan = 
	puluhan = 
	ratusan = 
	ribuan =
//outout 
	printf("satuan: %d\n");
	printf("puluhan: %d\n");
	printf("ratusan: %d\n");
	printf("ribuan: %d\n");
	return 0;
}
*/


int main(){
//membuat variabel x dan y
	int x1, y1, x2, y2;
//membuat masukan nilai variabel
	printf("masukan nilai X1:");
	scanf("%d", &x1);
	printf("masukan nilai y1:");
	scanf("%d", &y1);
	printf("masukan nilai x2:");
	scanf("%d", &x2);
	printf("masukan nilai y2:");
	scanf("%d", &y2);
//membuat rumus luas segitiga
	int luas = sqrt((x1 - x2)*(x1-x2)) + (y1-y2)*(y1-y2);
//membuat output hasil luas segitiga
	printf("luas segita: %d\n", luas);
	return 0;
}

/*
int main(){
	float Lebar;//variabel no.1
	float Panjang;//variabel no.2
	float Tinggi;//variabel no.3
//memasukan input user
	printf("masukan Lebar:\n");
	scanf("%f", &Lebar);
	printf("masukan Panjang:\n");
	scanf("%f", &Panjang);
	printf("masukan Tinggi\n");
	scanf("%f", &Tinggi);
//menambahkan variabel jumlah volume
	float hasil = Lebar*Panjang*Tinggi; 
// menampilkan hasil volume
	printf("hasil volumenya adalah: %f\n", hasil);
	return 0;
}

/*
int main(){
	float bil; //variable float
	int depan;
	int belakang;
//memasukan integer user
	printf("masukan angka float:\n");
	scanf("%f", &bil);
	depan = bil;
	belakang = (bil - depan) * 100; //mengambil bagian belakang float
//hasil bagian depan dan belakang
	printf("bagian depan:%d\n", depan);
	printf("bagian belakang:%d\n", belakang);
	return 0;
} 

/*
int main(){
//membuat variable akar dan kuadrat
	int bil;
	int akar;
	int kuadrat;
//membuat masukan nilai variabel
	printf("masukan nilai integer:");
	scanf("%d", &bil);
	akar = sqrt(bil);
	kuadrat = bil * bil;
//membuat output hasil
	printf("bilangan akar: %d\n", akar);
	printf("bilangan kuadrat: %d\n", kuadrat);
	return 0;
}
*/	