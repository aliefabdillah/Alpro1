/*Saya Alief Muhammad Abdillah mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//bagian mesin

#include "tmdhead.h"

//================ FUNGSI PENGECEKAN KODE ============
int code(int kode){
	int tanda = 0;
	
	if(kode == 1){
		tanda = 1;
	}
	if(kode = 2){
		tanda = 2;
	}
	
	return tanda;
}

//===================================
//	PROSEDUR PERULANGAN UNTUK SPASI
//===================================
void spasi(int tebal){
	int j;
	
	for(j=0;j<tebal;j++){
		printf(" ");
	}
}

void output(int kode, int n, int panjang[], int tebal){
	int tanda = code(kode);
	int lastindex = cek_index(n);
	
	if(tanda == 1){
		mode1(tebal, n, panjang, lastindex);
	}
	if(tanda == 2){
		mode2(tebal, n, panjang, lastindex);
	}
}

//=========================
// PROSEDUR UNTUK POLA +62
//=========================
void mode1(int tebal, int n, int panjang[], int lastindex){
	int i, j;
	
//Bagian atas 1
	for(i=0;i<tebal;i++){
		for(j=0;j<tebal*3;j++){		//pola "+"
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 6
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 2
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 8
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		string_atas1(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}

//bagian atas 2
	for(i=0;i<tebal;i++){
		for(j=0;j<tebal;j++){		//pola "+"
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){		
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 6	
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 2	
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 8	
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		string_atas2(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}
	
//bagian tengah
	for(i=0;i<tebal;i++){
		for(j=0;j<tebal*3;j++){			//pola "+"
			printf("H");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 6
			printf(" ");			
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){		
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 2
			printf(" ");			
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){		
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 8
			printf(" ");			
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){		
			printf(" ");
		}
		string_tengah(tebal, n ,panjang, lastindex);	//pola string
		
		printf("\n");
	}
	
//bagian bawah 1
	for(i=0;i<tebal;i++){
		for(j=0;j<tebal;j++){		//pola "+"
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){		
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 6	
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 2	
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 8	
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		string_bawah1(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}

//Bagian Bawah 2
	for(i=0;i<tebal;i++){
		for(j=0;j<tebal*3;j++){		//pola "+"
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 6
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 2
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){		//pola angka 8
			printf(" ");
		}
		for(j=0;j<tebal;j++){		
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		string_bawah2(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}
}
	
	
//===========================
//PROSEDUR PERULANGAN POLA 08
//===========================
void mode2(int tebal, int n, int panjang[], int lastindex){
	//bagian atas 1
	int i, j;
	
	for(i=0;i<tebal;i++){			
		for(j=0;j<tebal;j++){			//pola angka 0
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){			//pola angka 8
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		string_atas1(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}
	
	//bagian atas 2
	for(i=0;i<tebal;i++){			
		for(j=0;j<tebal;j++){			//pola angka 0
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){			//pola angka 8
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		string_atas2(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}
	
	//bagian tengah
	for(i=0;i<tebal;i++){			
		for(j=0;j<tebal;j++){			//pola angka 0
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){			//pola angka 8
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		string_tengah(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}
	
	//bagian bawah 1
	for(i=0;i<tebal;i++){			
		for(j=0;j<tebal;j++){			//pola angka 0
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){			//pola angka 8
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		string_bawah1(tebal, n, panjang, lastindex); 	//pola string
		
		printf("\n");
	}
	
	//bagian bawah 2
	for(i=0;i<tebal;i++){			
		for(j=0;j<tebal;j++){			//pola angka 0
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		spasi(tebal);				//pola spasi
		
		for(j=0;j<tebal;j++){			//pola angka 8
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		string_bawah2(tebal, n, panjang, lastindex);	//pola string
		
		printf("\n");
	}
}

//========= POLA PERULANGAN STRING =============
//BAGIAN ATAS 1
void string_atas1(int tebal, int n, int panjang[], int lastindex){
	int i, j;
	
	for(j=0;j<n;j++){
		//jika panjang string = 0
		if(panjang[j] == 0){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 0
		}
		//jika panjang string = 1
		if(panjang[j] == 1){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 1
				printf("H");
			}
		}
		//jika panjang string = 2
		if(panjang[j] == 2){
			spasi(tebal);
			last_string2(tebal, j, lastindex);			//pola angka 2
			
		}
		//jika panjang string = 3
		if(panjang[j] == 3){
			spasi(tebal);
			last_string2(tebal, j, lastindex);
		}
		//jika panjang string = 4
		if(panjang[j] == 4){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 4
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 5
		if(panjang[j] == 5){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 5
		}
		//jika panjang string = 6
		if(panjang[j] == 6){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 6
		}
		//jika panjang string = 7
		if(panjang[j] == 7){
			spasi(tebal);
			last_string3(tebal, j, lastindex);		//pola angka 7
		}
		//jika panjang string = 8
		if(panjang[j] == 8){
			spasi(tebal);
			last_string2(tebal, j, lastindex);			//pola angka 8
		}
		//jika panjang string = 9
		if(panjang[j] == 9){
			spasi(tebal);
			last_string2(tebal, j, lastindex);			//pola angka 9
		}
	}
}

//BAGIAN ATAS 2
void string_atas2(int tebal, int n, int panjang[], int lastindex){
	int j;
	
	for(j=0;j<n;j++){
		//jika panjang string = 0
		if(panjang[j] == 0){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 0
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 1
		if(panjang[j] == 1){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 1
				printf("H");
			}
		}
		//jika panjang string = 2
		if(panjang[j] == 2){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 2
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 3
		if(panjang[j] == 3){
			spasi(tebal);
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 4
		if(panjang[j] == 4){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 4
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 5
		if(panjang[j] == 5){
			spasi(tebal);
			last_string1(tebal, j, lastindex);	//pola angka 5
		}
		//jika panjang string = 6
		if(panjang[j] == 6){
			spasi(tebal);
			last_string1(tebal, j, lastindex);	//pola angka 6
		}
		//jika panjang string = 7
		if(panjang[j] == 7){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 7
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 8
		if(panjang[j] == 8){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 8
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 9
		if(panjang[j] == 9){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 9
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
	}
}

// Bagian Tengah
void string_tengah(int tebal, int n, int panjang[], int lastindex){
	int j;
	
	for(j=0;j<n;j++){
		//jika panjang string = 0
		if(panjang[j] == 0){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 0
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 1
		if(panjang[j] == 1){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 1
				printf("H");
			}
		}
		//jika panjang string = 2
		if(panjang[j] == 2){
			spasi(tebal);
			last_string2(tebal, j, lastindex);	//pola angka 2
		}
		//jika panjang string = 3
		if(panjang[j] == 3){
			spasi(tebal);
			last_string2(tebal, j, lastindex);	//pola angka 3
		}
		//jika panjang string = 4
		if(panjang[j] == 4){
			spasi(tebal);
			last_string2(tebal, j, lastindex);	//pola angka 4
		}
		//jika panjang string = 5
		if(panjang[j] == 5){
			spasi(tebal);
			last_string2(tebal, j, lastindex);	//pola angka 5
		}
		//jika panjang string = 6
		if(panjang[j] == 6){
			spasi(tebal);
			last_string2(tebal, j, lastindex);	//pola angka 6
		}
		//jika panjang string = 7
		if(panjang[j] == 7){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 7
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 8
		if(panjang[j] == 8){
			spasi(tebal);
			last_string2(tebal, j, lastindex);	//pola angka 8
		}
		//jika panjang string = 9
		if(panjang[j] == 9){
			spasi(tebal);
			last_string2(tebal, j, lastindex);	//pola angka 9
		}
	}
}

//BAGIAN BAWAH 1
void string_bawah1(int tebal, int n, int panjang[], int lastindex){
	int j;
	
	for(j=0;j<n;j++){
		//jika panjang string = 0
		if(panjang[j] == 0){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 0
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 1
		if(panjang[j] == 1){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 1
				printf("H");
			}
		}
		//jika panjang string = 2
		if(panjang[j] == 2){
			spasi(tebal);
			last_string1(tebal, j, lastindex);	//pola angka 2
		}
		//jika panjang string = 3
		if(panjang[j] == 3){
			spasi(tebal);
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 4
		if(panjang[j] == 4){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 4
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 5
		if(panjang[j] == 5){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 5
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 6
		if(panjang[j] == 6){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 6
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 7
		if(panjang[j] == 7){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 7
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 8
		if(panjang[j] == 8){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 8
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 9
		if(panjang[j] == 9){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 9
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
	}
}

//BAGIAN Bawah 2
void string_bawah2(int tebal, int n, int panjang[], int lastindex){
	int j;
	
	for(j=0;j<n;j++){
		//jika panjang string = 0
		if(panjang[j] == 0){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 0
		}
		//jika panjang string = 1
		if(panjang[j] == 1){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 1
				printf("H");
			}
		}
		//jika panjang string = 2
		if(panjang[j] == 2){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 2
		}
		//jika panjang string = 3
		if(panjang[j] == 3){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 3
		}
		//jika panjang string = 4
		if(panjang[j] == 4){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 4
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
		}
		//jika panjang string = 5
		if(panjang[j] == 5){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 5
		}
		//jika panjang string = 6
		if(panjang[j] == 6){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 6
		}
		//jika panjang string = 7
		if(panjang[j] == 7){
			spasi(tebal);
			for(j=0;j<tebal;j++){			//pola angka 7
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf("H");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
		}
		//jika panjang string = 8
		if(panjang[j] == 8){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 8
		}
		//jika panjang string = 9
		if(panjang[j] == 9){
			spasi(tebal);
			last_string2(tebal, j, lastindex);		//pola angka 9
		}
	}
}

//=============== PENGECEKAN INDEX ============
int cek_index(int n){
	int i;

	int cekInd = 0;
	
	for(i=0;i<n;i++){
		cekInd = i;
	}
	
	return cekInd; 
}

// H--
void last_string1(int tebal, int index, int lastindex){
	int i, j;
	
	if(index == lastindex){
		for(j=0;j<tebal;j++){
			printf("H");
		}
	}
	else{
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
	}
}

//	-H-
void last_string2(int tebal, int index, int lastindex){
	int i, j;
	
	if(index == lastindex){
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
	}
	else{
		for(j=0;j<tebal;j++){
			printf(" ");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
	}
}

// 	HH-
void last_string3(int tebal, int index, int lastindex){
	int i,j;
	
	if(index == lastindex){
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
	}
	else{
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf("H");
		}
		for(j=0;j<tebal;j++){
			printf(" ");
		}
	}
}

