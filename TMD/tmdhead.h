/*Saya Alief Muhammad Abdillah mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//bagian header

#include <stdio.h>
#include <string.h>

int code(int kode);
int cek_index(int n);

void mode1(int tebal, int n, int panjang[], int lastindex);
void mode2(int tebal, int n, int panjang[], int lastindex);

void spasi(int tebal);

void last_string1(int tebal, int n, int lastindex);
void last_string2(int tebal, int n, int lastindex);
void last_string3(int tebal, int n, int lastindex);

void string_atas1(int tebal, int n, int panjang[], int lastindex);
void string_atas2(int tebal, int n, int panjang[], int lastindex);
void string_tengah(int tebal, int n, int panjang[], int lastindex);
void string_bawah1(int tebal, int n, int panjang[], int lastindex);
void string_bawah2(int tebal, int n, int panjang[], int lastindex);

void output(int kode, int n, int panjang[], int tebal);