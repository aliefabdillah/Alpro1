/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz tp9 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//untuk header
#include <stdio.h>
#include <string.h>

char nama[50][50]; 	//untuk menampung nama sementara
char ket[50];	   	//untuk menampung keterangan
int bintang[50]; 	//untuk menampung bintang
char komen[50][50];	//untuk menampung komentar 

void input();
void ganti();
void pisah(int n, char string[][100]);
void output();