/*  Tugas Masa Depan (Mesin)

    Saya Hilman Fauzi Herdiana mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
    Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

//===========================================================
//|                     FUNGSI CARI INDEX                   |
//===========================================================
int findlastidx(int n)
{
    int maxIndex = 0;

    for (i = 0; i < n; i++)
    {
        maxIndex = i;
    }

    return maxIndex;
}

//=========================================================
//|                     PROSEDUR OUTPUT                   |
//=========================================================
void output(int x,int n,int m,int panjang[])
{
    int maxIdx = findlastidx(m);

    if (x == 1)
    {
        mode1(n, m, panjang, maxIdx);
    }
    if (x == 2)
    {
        mode2(n, m, panjang, maxIdx);
    }
    //printf("index terakhir = %d\n", maxIdx);
}

//=========================================================
//|                     PROSEDUR MODE 1                   |
//=========================================================
void mode1(int n,int m,int panjang[],int max)
{
    //BAGIAN ATAS 1
    for (i = 0; i < n; i++)
    {
        pola0(n);           // pola tambah
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 6
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 2
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 8
        lenstring_atas1(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN ATAS 2
    for (i = 0; i < n; i++)
    {
        pola3(n);   // pola tambah
        pemisah(n);         //pemisah
        pola2(n);   // pola angka 6
        pemisah(n);         //pemisah
        pola4(n);           // pola angka 2
        pemisah(n);         //pemisah
        pola5(n);           // pola angka 8
        lenstring_atas2(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN TENGAH
    for (i = 0; i < n; i++)
    {
        pola1(n);            // pola tambah
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 6
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 2
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 8
        lenstring_tengah(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN BAWAH 1
    for (i = 0; i < n; i++)
    {
        pola3(n);   // pola tambah
        pemisah(n);         //pemisah
        pola5(n);           // pola angka 6
        pemisah(n);         //pemisah
        pola2(n);   // pola angka 2
        pemisah(n);         //pemisah
        pola5(n);           // pola angka 8
        lenstring_bawah1(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN BAWAH 2
    for (i = 0; i < n; i++)
    {
        pola0(n);         // pola tambah
        pemisah(n);       //pemisah
        pola3(n); // pola angka 6
        pemisah(n);       //pemisah
        pola3(n); // pola angka 2
        pemisah(n);       //pemisah
        pola3(n); // pola angka 8
        lenstring_bawah2(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
}

//=========================================================
//|                     PROSEDUR MODE 2                   |
//=========================================================
void mode2(int n,int m,int panjang[],int max)
{
    //BAGIAN ATAS 1
    for (i = 0; i < n; i++)
    {
        pola3(n);   // pola angka 0
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 8
        lenstring_atas1(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN ATAS 2
    for (i = 0; i < n; i++)
    {
        pola5(n);   // pola angka 0
        pemisah(n); //pemisah
        pola5(n);   // pola angka 8
        lenstring_atas2(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN TENGAH
    for (i = 0; i < n; i++)
    {
        pola5(n);           // pola angka 0
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 8
        lenstring_tengah(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN BAWAH 1
    for (i = 0; i < n; i++)
    {
        pola5(n);   // pola angka 0
        pemisah(n); //pemisah
        pola5(n);   // pola angka 8
        lenstring_bawah1(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
    //BAGIAN BAWAH 2
    for (i = 0; i < n; i++)
    {
        pola3(n);   // pola angka 0
        pemisah(n);         //pemisah
        pola3(n);   // pola angka 8
        lenstring_bawah2(n, m, panjang, max); //pola panjang string
        printf("\n");
    }
}

//=======================================================
//|                     PROSEDUR POLA                   |
//=======================================================
//POLA PEMISAH
void pemisah(int n)
{
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//POLA ---
void pola0(int n)
{
    for (j = 0; j < n*3; j++)
    {
        printf(" ");
    }
}
//POLA HHH
void pola1(int n)
{
    for (j = 0; j < n*3; j++)
    {
        printf("H");
    }
}
//POLA H--
void pola2(int n)
{
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
}
//POLA -H-
void pola3(int n)
{
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)
        {
            printf("H");
        }
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
}
//POLA --H
void pola4(int n)
{
    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//POLA H-H
void pola5(int n)
{
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//POLA HH-
void pola6(int n)
{
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//POLA H
void pola7(int n)
{
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=============================
//POLA H__
void pola2_1(int n)
{
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//POLA -H_
void pola3_1(int n)
{
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//POLA HH_
void pola6_1(int n)
{
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}

//====================================================
//POLA 2 TANPA SPASI DIAKHIR
void idx_p2(int n,int idx,int max)
{
    if (idx == max)
    {
        pola2_1(n);
    }
    else
    {
        pola2(n);
    }
}
//POLA 3 TANPA SPASI DIAKHIR
void idx_p3(int n,int idx,int max)
{
    if (idx == max)
    {
        pola3_1(n);
    }
    else
    {
        pola3(n);
    }
}
//POLA 6 TANPA SPASI DIAKHIR
void idx_p6(int n,int idx,int max)
{
    if (idx == max)
    {
        pola6_1(n);
    }
    else
    {
        pola6(n);
    }
}
//====================================================

//=================================================================================
//===                       POLA UNTUK PANJANG STRING                           ===
//=================================================================================
//BAGIAN ATAS 1
void lenstring_atas1(int n,int m,int panjang[],int max)
{
    int j;

    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola7(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            idx_p6(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
    }
}
//BAGIAN ATAS 2
void lenstring_atas2(int n,int m,int panjang[],int max)
{
    int j;

    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola7(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            idx_p2(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            idx_p2(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            pola5(n);
        }
    }
}
//BAGIAN TENGAH
void lenstring_tengah(int n,int m,int panjang[],int max)
{
    int j;
    
    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola7(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
    }
}
//BAGIAN BAWAH 1
void lenstring_bawah1(int n,int m,int panjang[],int max)
{
    int j;
    
    for (j = 0; j < m; j++)
    {        
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola7(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            idx_p2(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            pola5(n);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            pola4(n);
        }
    }
}
//BAGIAN BAWAH 2
void lenstring_bawah2(int n,int m,int panjang[],int max)
{
    int j;
    
    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola7(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola4(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            idx_p3(n, j, max);
        }
    }
}