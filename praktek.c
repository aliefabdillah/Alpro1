/*Saya Alief Muhammad Abdillah 2003623 mengerjakan ......... dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <math.h>

int main(){
	float angka = 5.1;
	printf("%f\n", angka);
	//      ^   ^ menyebutkan nama variabel yang akan diprint
	//      ^ perwakilan variable dengan simbol format
	
	//hanya menampilkan 2 angka dibelakang koma
	printf("0.2%f\n", angka);
	
	//deklarasi variabel
	int kelas, angkatan;
	char huruf;
	
	//memasukan nilai ke variabel
	kelas = 9;
	angkatan = 2020;
	huruf = 'C';
	
	//Kelas : 9C, Angkatan : 2020
	printf("Kelas : %d%c\n, Angkatan : %d.\n", kelas, huruf, angkatan);
	
	//memasukan nilai variabel
 	kelas = 10;
	angkatan = 2021;
	huruf = 'D';
	
	//kelas : 10D, Angkatan : 2021
	printf("Kelas : %d%c\n, Angkatan : %d.\n", kelas, huruf, angkatan);
	
	return 0;
}

/*
int main(){
	char huruf; // deklarasi variabel
	
	//meminta user memasukan sebuah huruf
	scanf(" %c", &huruf);
	//      ^       ^ nama variabel yang akan diberi nilai dari masukan
	//      ^ perwakilan variabel ditulis dengan simbol format
	
	int angka; //deklarasi variabel
	float angka_berkoma; //deklarasi variabel
	
	//meminta masukan dua kali untuk variabel angka dan angka berkoma
	scanf("%d %f", &angka, &angka_berkoma);
	
	//menampilkan semua variabel
	printf("%c %d %f\n", huruf, angka, angka_berkoma);

	return 0;
}


int main(){
	
	int angka1, angka2;
	
	int hasilTambah, hasilKurang, hasilBagi, hasilKali, hasilMod;
//memasukan nilai variabel angka1	
	printf("masukan angka pertama : ");
	scanf("%d", &angka1);
	
//memasukan nilai variabel angka2	
	printf("masukan angka kedua : ");
	scanf("%d", &angka2);
	
//rumus operator	
	hasilTambah= angka1 + angka2;
	hasilKurang= angka1 - angka2;
	hasilBagi= angka1 / angka2;
	hasilKali= angka1 * angka2;
	hasilMod= angka1 % angka2;
	
// output pengeluaran operator
	printf("Pertambahan : %d\n", hasilTambah);
	printf("pengurangan : %d\n", hasilKurang);
	printf("Pembagiam : %d\n", hasilBagi);
	printf("perkalian : %d\n", hasilKali);
	printf("modulus: %d\n", hasilMod);
	
	return 0;
}
*/