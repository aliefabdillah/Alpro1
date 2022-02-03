/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Remedial Alpro remwkt20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian header
#include <stdio.h>					//pemanggilan library stdio.h
#include <string.h>					//pemanggilan library string.h

//====== Penampung jumlah array =======
int n;	

//====== Variabel Penampung Jumlah waktu =======
int totalwaktu1[50];	// jumlah waktu 1 (detik)
int totalwaktu2[50];	// jumlah waktu 2 (detik)
int selisih[50];		// selisih waktu 1 dan 2 (detik)


//==============
//  Bungkusan 
//==============
typedef struct{
	int jam1, menit1, detik1;		//variabel jam, menit, detik pertama
	int jam2, menit2, detik2;		//variabel jam, menit, detik kedua
}bungkus;

bungkus data[50];

//==========================
// Variabel konversi output
//==========================
int jam[50];
int menit[50];
int detik[50];

//=====================
// 		PROSEDUR
//=====================
void input();
void output();


	
	