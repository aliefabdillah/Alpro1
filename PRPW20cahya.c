#include <stdio.h>

/*
    Saya Cahya Gumilang 2003128 mengerjakan 
    TP1 Alpro1 2020 C1 - (PRPW20) Password Rahasia Perusahaan While
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin

*/

typedef struct 
{
    char kode; //kode file
    char nama[50]; //nama file
    int pj; //panjang nama file
    char biner[50]; //biner dari gabungan nama file dan biner kunci
    int pb; //panjang biner
    int desimal; //hasil konversi biner ke desimal
}BungkusanFile;


int main()
{
    int i, j, k, l;
    int n; //banyak file
    scanf("%d", &n);
    BungkusanFile file[n];

    //proses input
    i=0;
    while(i<n){
        scanf(" %c", &file[i].kode);
        j=0;
        while(file[i].nama[j-1]!=';'){
            scanf(" %c", &file[i].nama[j]);
            j++;
        }
        file[i].pj = j - 1; //dikurangi 1 agar karakter ';' tidak terbawa
        i++;
    }

    int kunci;
    char b_kunci[50]; //biner kunci
    scanf("%d", &kunci);
    
    //konversi kunci ke biner
    int temp = kunci;
    i=0;
    while(temp!=0){
        if(temp%2==0){
            b_kunci[i] = '0';
        }else{
            b_kunci[i] = '1';
        }
        temp /= 2;
        i++;
    }

    int pbk = i; //panjang biner kunci
    
    //penggabungan biner nama file dan kunci
    i=0;
    while(i<n){
        j=0; //index gabungan biner
        k=pbk-1; //index biner kunci
        l=0; //index nama file

        //pbk+file[i].pj = panjang array biner gabungan
        while(j<pbk+file[i].pj){
            //memasukkan biner kunci selama array biner kunci belum habis
            if(k>=0){
                file[i].biner[j] = b_kunci[k];
                k--;
                j++;
            }
            //memasukkan biner nama file selama array biner nama file belum habis
            if(l<file[i].pj){
                file[i].biner[j] = file[i].nama[l];
                l++;
                j++;
            }
        }

        file[i].pb = j;
        i++;
    }

    //konversi biner gabungan ke desimal
    i=0;
    while (i<n)
    {
        //set desimal awal
        file[i].desimal = 0;
        j=file[i].pb-1; //index biner dari belakang
        k=0; //pangkat
        while(j>=0){
            temp = 2;
            if(file[i].biner[j]=='1'){
                //proses perhitungan 2 pangkat k
                if(k==0){
                    temp = 1;
                }else{
                    l=1;
                    while(l<k){
                        temp *= 2;
                        l++;
                    } 
                }
                
            }else{
                temp = 0;
            }
            //semua hasil pemangkatan ditambahkan ke desimal
            file[i].desimal += temp;
            k++;
            j--;
        }
        i++;
    }
    
    printf("Hasil Gabung:\n");
    //output hasil gabung biner nama file dan kunci
    i=0;
    while (i<n)
    {
        j = 0;
        while(j<file[i].pb){
            printf("%c", file[i].biner[j]);
            j++;
        }
        printf("\n");
        i++;
    }
    
    printf("\nPassword:\n");
    //output kode
    i=n-1;
    while(i>=0){
        printf("%c", file[i].kode);
        i--;
    }
    //output desimal hasil konversi dari biner gabungan
    i=0;
    while (i<n)
    {
        printf("-");
        printf("%d", file[i].desimal);
        i++;
    }
    printf("\n");
    
    return 0;    
}
