/*Saya Alief Muhammad Abdillah 2003623 mengerjakan UAS pftbsp20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian mesin
#include "bsphead.h"
void input(){
	int i;
	scanf("%d", &n);	//untuk menentukan banyaknya perulangan array
	
	i=0;
	while(i<n){
		scanf("%f", &data[i].arr1);	scanf("%f", &data[i].arr2); scanf("%s", data[i].nama);	//memasukan sisi1, sisi2, dan nama bangun ruangnya
		i++;
	}
}

void output(){
	int i;
	i=0;
	while(i<n){
		if(strcmp(data[i].nama, "persegi") == 0){		// jika bangun ruang persegi
			luas[i] = data[i].arr1 * data[i].arr2;			// maka ini luasnya (float)
		}
		else{											//jika nama bangun ruangnya segitiga
			luas[i] = (data[i].arr1 * data[i].arr2)/2;		// maka ini mencari luasnya (float)
		}
		i++;
	}
	
	float max = luas[0];				//menentukan maximal sementara di indeks awal
	i=0;								
	while(i<n){
		printf("%0.2f\n", luas[i]);		//menampilkan 2 angka dibelakang koma
		if(luas[i] > max){				//jika di indeks selanjutnya ada yang lebih besar dari indeks awal
			max = luas[i];				//maximal = indeks luas yang memiliki nilai terbesar
		}
		i++;
	}
	printf("maksimal: %0.2f\n", max);				//menampilkan nilai maximal
}