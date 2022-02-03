/*Saya Alief Muhammad Abdillah 2003623 mengerjakan TP6 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>

typedef struct{
	char kode;
	char nama [50];
	int kunci;
	int panjang_nama;
	int panjang_biner;
	char gabungan[50];
	int angka_desimal;
}array;

int main(){
	int i, j, n;
	
	scanf("%d", &n);
	
	array arr[n];
	//memasukan inputan kode, nama file (dalam biner)
	i=0;
	while(i<n){
		scanf(" %c", &arr[i].kode);		// untuk kode
		
		j=0;
		while(arr[i].nama [j-1] != ';'){	//untuk nama file dalam biner
			scanf("	%c", &arr[i].nama[j]);
			j++;
		}
		arr[i].panjang_nama = j - 1;
		i++;
	}
	//konversi desimal ke biner
	int kunci;
	int k = 1, l;
	char biner_kunci[50];
	
	scanf("%d", &kunci);
	while(kunci>0){
		biner_kunci[k] = kunci%2;
		kunci=kunci/2;
		k = k + 1;
		l=k;
	}

//penggabungan binernya dengan kunci
	
	i=0;
	while(i<n){
		j=0;
		k=i-1;
		l=0;
		
		while(j<i+arr[i].panjang_nama){
			if(k>=0){
				arr[i].gabungan[j] = biner_kunci[k];
				k--;
				j++;
			}
			if(l<arr[i].panjang_nama){
				arr[i].gabungan[k] = arr[i].nama[l];
				l++;
				k++;
			}
		}
		
		arr[j].panjang_biner = j;
		i++;
	}
	
// merubah biner gabungan dari bentuk biner ke bentuk desimal

	int pangkat;
	i=0;
	while (i<n){
		arr[i].angka_desimal = 0;
		j=arr[i].panjang_biner-1;
		pangkat=0;
			while(j>=0){
				kunci = 2;
				if(arr[i].gabungan[j]=='1'){
					if(pangkat==0){
						kunci = 1;
					}else{
						l=1;
						while(l<pangkat){
							kunci *= 2;
							l++;
						} 
					}
				}else{
					kunci = 0;
				}
				arr[i].angka_desimal *= kunci;
				pangkat++;
				j--;
			}
			i++;
		}

//menampilkan hasil gabung
	printf("Hasil Gabung:\n");
	
	i=0;
	while(i<n){
		j=0;
		while(j<arr[i].panjang_biner){
			printf("%c", arr[i].gabungan[j]);
			j++;
		}
		printf("\n");
		i++;
	}
//menampilkan password
	printf("\n");
	printf("Password:\n");
	//menampilkan kode
	i=n-1;
	while(i>=0){
		printf("%c", arr[i].kode);
		i--;
	}
	//menampilkan angka desimal
	i=0;
	while(i<n){
		printf("-");
		printf("%d", arr[i].angka_desimal);
		i++;
	}
	printf("\n");
	
	return 0;
}	