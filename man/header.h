/*  Tugas Masa Depan (Header)

    Saya Hilman Fauzi Herdiana mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
    Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
#include <string.h>

//VARIABEL GLOBAL
int i, j;

//=================================================================================
//===                         BAGIAN DEKLRASI PROSEDUR                          ===
//=================================================================================
//PROSEDUR OUTPUT
void output(int x,int n,int m,int panjang[]);

//PROSEDUR PILIHAN MODE
void mode1(int n,int m,int panjang[],int max);
void mode2(int n,int m,int panjang[],int max);

//PROSEDUR POLA
void pemisah(int n);                //-
void pola0(int n);                  //---
void pola1(int n);                  //HHH
void pola2(int n);                  //H-- 
void pola2_1(int n);
void pola3(int n);                  //-H-
void pola3_1(int n);
void pola4(int n);                  //--H
void pola5(int n);                  //H-H
void pola6(int n);                  //HH-
void pola6_1(int n);
void pola7(int n);                  //H
void idx_p2(int n,int idx,int max); //POLA 2 TANPA SPASI DIAKHIR
void idx_p3(int n,int idx,int max); //POLA 3 TANPA SPASI DIAKHIR
void idx_p6(int n,int idx,int max); //POLA 6 TANPA SPASI DIAKHIR

//PROSEDUR UNTUK POLA PANJANG STRING
void lenstring_atas1(int n,int m,int panjang[],int max);
void lenstring_atas2(int n,int m,int panjang[],int max);
void lenstring_tengah(int n,int m,int panjang[],int max);
void lenstring_bawah1(int n,int m,int panjang[],int max);
void lenstring_bawah2(int n,int m,int panjang[],int max);

//FUNGSI AMBIL INDEX TERKAHIR
int findlastidx(int n);