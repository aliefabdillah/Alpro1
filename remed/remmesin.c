/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Remedial Alpro remwkt20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian mesin
#include "remhead.h"

//================
// Prosedur Input
//================
void input(){
	int i;
	scanf("%d", &n);	//masukan user untuk menentukan panjang array
	
	for(i=0;i<n;i++){
		scanf("%d", &data[i].jam1);	scanf("%d", &data[i].menit1); scanf("%d", &data[i].detik1);		//inputan user jam, menit, detik pertama
		scanf("%d", &data[i].jam2);	scanf("%d", &data[i].menit2); scanf("%d", &data[i].detik2);		//inputan user jam, menit, detik kedua
	}
}

//================
// Prosedur output
//================
void output(){
	int i;
	
	//====== Pengkorversian Waktu =======
	for(i=0;i<n;i++){
		if(data[i].jam2 - data[i].jam1 > 6){													//jika waktu kerja melebihi 6 jam
				totalwaktu1[i] = (data[i].jam1*3600) + (data[i].menit1*60) + (data[i].detik1);		//konversi jam, menit, detik pertama
				totalwaktu2[i] = (data[i].jam2*3600) + (data[i].menit2*60) + (data[i].detik2);		//konversi jam, menit, detik kedua
				selisih[i] = totalwaktu2[i] - (totalwaktu1[i]+21600) ;								//menghitung selisih jumlah waktu2 - (waktu 1 + 6 jam(dalam detik))
		}
		if(data[i].jam2 - data[i].jam1 < 6){													//jika waktu kerja kurang dari 6 jam
				totalwaktu1[i] = (data[i].jam1*3600) + (data[i].menit1*60) + (data[i].detik1);		//konversi jam, menit, detik pertama
				totalwaktu2[i] = (data[i].jam2*3600) + (data[i].menit2*60) + (data[i].detik2);		//konversi jam, menit, detik kedua
				selisih[i] =(totalwaktu1[i]+21600) - totalwaktu2[i];								//menghitung selisih (waktu 1 + 6 jam(dalam detik) - waktu2)
		}
	}
	
	//======== mengkoversi kembali menjadi jam menit detik ========
	for(i=0;i<n;i++){
		jam[i] = selisih[i] / 3600;
		menit[i] = (selisih[i] % 3600) / 60;
		detik[i] = selisih[i] - (jam[i] * 3600 + menit[i] * 60);
	}
	
	//======== menampilkan output =========
	for(i=0;i<n;i++){
		if(data[i].jam2 - data[i].jam1 > 6){						//jika waktu kerja melebihi 6 jam
				printf("+ %d %d %d", jam[i], menit[i], detik[i]);
				printf("\n");
		}
		if(data[i].jam2 - data[i].jam1 < 6){						//jika waktu kerja kurang dari 6  jam
				printf("- %d %d %d", jam[i], menit[i], detik[i]);	
				printf("\n");
		}
	}
}