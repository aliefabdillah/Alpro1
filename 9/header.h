#include <stdio.h>
#include <string.h>

//variabel global yang menampung jumlah siswa berdasarkan nilai
int jumlah[5];
// jumlah[0] untuk nilai A
// jumlah[1] untuk nilai B
// jumlah[2] untuk nilai C
// jumlah[3] untuk nilai D
// jumlah[4] untuk nilai E

//variabel global yang menampung nama siswa berdasarkan nilai
char siswaA[20][25];
char siswaB[20][25];
char siswaC[20][25];
char siswaD[20][25];
char siswaE[20][25];
//bisa menggunakan array tiga dimensi: char siswa[5][20][25]

void input();
void olahData(char nama[], int nilai);
void output();
