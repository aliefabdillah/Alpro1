/*  Tugas Masa Depan (Main)

    Saya Hilman Fauzi Herdiana mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
    Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

int main()
{
    int lenkata[100];
    char str[100][100];
    int n,mode,thick,x,y;

    //=== PROSES INPUT ===
    scanf("%d", &mode); //input untuk pilih mau mode 1 atau 2
    scanf("%d", &n); //banyaknya string

    //masukan string
    for (x = 0; x < n; x++)
    {
        y=0;
        scanf("%s", &str[x]);
        lenkata[x] = strlen(str[x]);
    }
    scanf("%d", &thick); //ketebalan pola

    //proses untuk outputnya dan menampilkan hasil ouput
    output(mode, thick, n, lenkata);

    return 0;
}