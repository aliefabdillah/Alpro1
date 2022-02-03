/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz tp9 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//untuk mesin
#include "header.h"

//prosedur untuk masukan
void input(){
	int n,i;
	scanf("%d", &n);
	
	char str[n][100];
	for(i=0;i<n;i++){
		scanf("%s", &str[i]);
	}
	
	pisah(n, str);
	ganti();
}

//prosedur untuk memisahkan string menjadi bebeberapa bagian
void pisah(int n, char string[][100]){
	//untuk memisahkan nama dengan stringnya
	int i=0;
	int j=0;
	do{
		strcpy(nama[i][j], string[i][j]);
		
		if(strcmp(string[i][j], "/") != 0){
			j++;
		}
	}while(strcmp(string[i][j], "/") != 0);
	
	//untuk memindahkan keterangan ke array simpanan
	i=0;
	j=1;
	do{
		strcpy(ket[i], string[i][j]);
		
		if(strcmp(string[i][j], "/") != 0){
			j++;
		}
	}while(strcmp(string[i][j], "/") != 0);
	
	//untuk memindahkan jumlah bintang ke array simpanan
	i=0;
	j=1;
	do{
		strcpy(bintang[i], string[i][j]);
		
		if(strcmp(string[i][j], "/") != 0){
			j++;
		}
	}while(strcmp(string[i][j], "/") != 0);
	
	//untuk memindahkan komentar ke variabel simpanannya
	i=0;
	j=1;
	do{
		strcpy(komen[i][j], string[i][j]);
		
		if(strcmp(string[i][j], "/") != 0){
			j++;
		}
	}while(strcmp(string[i][j], "/") != 0);
}

//prosedur untuk mengganti tanda "_" menjadi " " (spasi)
void ganti(){
	int i=0, j=0;
	do{
		if(nama[i][j] == '_'){
			nama[i][j] == ' ';
		}
		if(strcmp(nama[i][j], "\0") != 0){
			j++;
		}
	}while(strcmp(nama[i][j], "\0") != 0);
	
	i=0, j=0;
	do{
		if(komen[i][j] == '_'){
			komen[i][j] == ' ';
		}
		if(strcmp(komen[i][j], "\0") != 0){
			j++;
		}
	}while(strcmp(komen[i][j], "\0") != 0);
}

//prosedur untuk menampilkan hasil
void output(){
	int i = 0;
	int j = 0;
	//untuk bintang 5
	do{
	if(bintang[i] == 5){
		printf(">>> Review Bintang 5 <<<\n");
		printf("--------------------\n");
		//untuk menampilkan nama sesuai bintangnya
		
		do{
		//jika bintangnya bernilai 5
		
			//lalu jika keterangannya "T" maka akan mengeprint seperti biasa
			if(ket[i] == 'T'){
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			//jika keterangannya "A"
			if(ket[i] == 'A'){
				//maka huruf kecilnya akan diubah menjadi bintang
				if(nama[i][j] >= 'a' && nama[i][j] <= 'z'){
					nama[i][j] = '*';
				}
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			i++;
			j++;
		}while((strcmp(nama[i], "\0") != 0) && (strcmp(komen[i], "\0") != 0)); //progam akan terus berulang sampai nama[i] dan komen[i] tidak sama dengan null
	}
	}while(bintang[i] == '\0');
	printf("\n");
	
	//untuk bintang 4
	//jika bintangnya bernilai 4
	do{
	if(bintang[i] == 4){
		printf(">>> Review Bintang 4 <<<\n");
		printf("--------------------\n");
		//untuk menampilkan nama sesuai bintangnya
		i = 0;
		j = 0;
		do{
		
			//lalu jika keterangannya "T" maka akan mengeprint seperti biasa
			if(ket[i] == 'T'){
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			//jika keterangannya "A"
			if(ket[i] == 'A'){
				//maka huruf kecilnya akan diubah menjadi bintang
				if(nama[i][j] >= 'a' && nama[i][j] <= 'z'){
					nama[i][j] = '*';
				}
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			i++;
			j++;
		}while((strcmp(nama[i], "\0") != 0) && (strcmp(komen[i], "\0") != 0));//progam akan terus berulang sampai nama[i] dan komen[i] tidak sama dengan null
	}
	}while(bintang[i] == '\0');
	printf("\n");
	
	//untuk bintang 3
	//jika bintangnya bernilai 3
	do{
	if(bintang[i] == 3){
		printf(">>> Review Bintang 3 <<<\n");
		printf("--------------------\n");
		//untuk menampilkan nama sesuai bintangnya
		i = 0;
		j = 0;
		do{
		
			//lalu jika keterangannya "T" maka akan mengeprint seperti biasa
			if(ket[i] == 'T'){
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			//jika keterangannya "A"
			if(ket[i] == 'A'){
				//maka huruf kecilnya akan diubah menjadi bintang
				if(nama[i][j] >= 'a' && nama[i][j] <= 'z'){
					nama[i][j] = '*';
				}
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			i++;
			j++;
		}while((strcmp(nama[i], "\0") != 0) && (strcmp(komen[i], "\0") != 0)); //progam akan terus berulang sampai nama[i] dan komen[i] tidak sama dengan null
	}
	}while(bintang[i] == '\0');
	printf("\n");
	
	//untuk bintang 2
	//jika bintangnya bernilai 2
	do{
	if(bintang[i] == 2){
		printf(">>> Review Bintang 2 <<<\n");
		printf("--------------------\n");
		//untuk menampilkan nama sesuai bintangnya
		i = 0;
		j = 0;
		do{
		
			//lalu jika keterangannya "T" maka akan mengeprint seperti biasa
			if(ket[i] == 'T'){
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			//jika keterangannya "A"
			if(ket[i] == 'A'){
				//maka huruf kecilnya akan diubah menjadi bintang
				if(nama[i][j] >= 'a' && nama[i][j] <= 'z'){
					nama[i][j] = '*';
				}
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			i++;
			j++;
		}while((strcmp(nama[i], "\0") != 0) && (strcmp(komen[i], "\0") != 0)); //progam akan terus berulang sampai nama[i] dan komen[i] tidak sama dengan null
	}
	}while(bintang[i] == '\0');
	printf("\n");
	
	//untuk bintang 1
	//jika bintangnya bernilai 1
	do{
	if(bintang[i] == 1){
		printf(">>> Review Bintang 1 <<<\n");
		printf("--------------------\n");
		//untuk menampilkan nama sesuai bintangnya
		i = 0;
		j = 0;
		do{
		
			//lalu jika keterangannya "T" maka akan mengeprint seperti biasa
			if(ket[i] == 'T'){
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			//jika keterangannya "A"
			if(ket[i] == 'A'){
				//maka huruf kecilnya akan diubah menjadi bintang
				if(nama[i][j] >= 'a' && nama[i][j] <= 'z'){
					nama[i][j] = '*';
				}
				printf("%s\n", nama[i][j]);
				printf("%s\n", komen[i][j]);
				printf("--------------------\n");
			}
			i++;
			j++;
		}while((strcmp(nama[i], "\0") != 0) && (strcmp(komen[i], "\0") != 0)); //progam akan terus berulang sampai nama[i] dan komen[i] tidak sama dengan null
	}
	}while(bintang[i] == '\0');
	printf("\n");
}