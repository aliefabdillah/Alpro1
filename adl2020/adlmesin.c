/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Eval Alpro ADL2020 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian mesin
#include "adlhead.h"					//header yang telah dibuat

void input(){							//untuk inputan
	int i, j, n, m;						//deklarasi variabel lokal
	int kode;
	
	scanf("%d", &n);					//memasukan jumlah string
	char str1[n][50];					//deklarasi array of string
	
	i=0;
	while(i<n){							//meminta masukan user untuk string pertama
		scanf("%s", str1[i]);
		i++;
	}
	
	scanf("%d", &m);					//memasukan jumlah string kedua
	char str2[m][50];					//deklarati array of string kedua
	
	j=0;
	while(j<m){							//meminta masukan user untuk string kedua
		scanf("%s", str2[j]);
		j++;
	}

	kode = cek(str1, str2, n, m);		//pemanggilan fungsi untuk pengecekan anagram atau tidak anagram
	
	output(kode);						//pemanggilan prosedur untuk menampilkan ouput
}

int cek(char str1[][50], char str2[][50], int n, int m){		//fungsi anagram
	int i, j, k, l;
	int tanda = 0;
	int not_found = 0;
	int len1, len2;
	char kata1[50][50];
	char kata2[50][50];
	
	i=0;												
	k=0;
	while(i < n){
		strcpy(kata1[k++], str1[i++]);						//menggabungkan string pertama menjadi satu string simpanan
	}
	
	i=0;
	k=0;
	while(i < m){
		strcpy(kata2[k++], str2[i++]);						//menggabungkan string kedua menjadi satu string simpanan
	}
	
	for(i=0;i<n;i++){
		len1 = strlen(kata1[i]);							//menghitung panjang string simpanan pertama
	}
	
	for(i=0;i<m;i++){
		len2 = strlen(kata2[i]);							//menghitung panjang string simpanan kedua
	}
 
	int len;
	
    if(len1 == len2)									//jika panjang string simpanan 1 = string simpanan 2
    {
        len = len1;
		i=0;
        while(i<len && not_found != 1)					
        {
            tanda = 0;
			j=0;
            while(j<len && tanda != 1)
            {
                if(kata1[i] == kata2[j])					// jika kata1 = kata 2 maka tanda = 1
                {
                    tanda = 1;
                }
				j++;
            }
            if(tanda == 0)								//jika tanda = 0  maka not found nya akan bertambah menjadi 1
            {
                not_found = 1;
            }
			i++;
        }
	}
	else{												//jika panjang kata1 dan kata 2 beda maka not found 0
		not_found = 0;
	}
	return not_found;									//kembalian hasil fungsi
	return tanda;
}

void output(int kode){
	
	if(kode == 0){										//jika kodenya bernilai 0 maka menampilkan im ready
		printf("Im ready!\n");
	}
	else{
		printf("Not today!\n");							//jika kode menampilkan nilai lainnya maka menampilkan not today
	}
}
