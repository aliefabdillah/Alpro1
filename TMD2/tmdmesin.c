/*Saya Alief Muhammad Abdillah mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//bagian mesin

#include "tmdhead.h"

//================ FUNGSI PENGECEKAN KODE ============
int code(int kode){
	int tanda = 0;
	
	if(kode == 1){		//jika kode = 1
 		tanda = 1;		//nilai penampung = 1
	}
	if(kode == 2){		//jika kode = 2
		tanda = 2;		//nilai penampung = 2
	}
	
	return tanda;		//nilai balik funsgi 
}

//===== pola spasi =====
void spasi(int tebal){
	for(j=0;j<tebal;j++){
		printf(" ");
	}
}

//===== pola --- ======
void pola1(int tebal){
	for(j=0;j<tebal*3;j++){
		printf(" ");
	}
}

//==== pola H-- ======
void pola2(int tebal){
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

//===== pola HH- =====
void pola3(int tebal){
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

//===== pola HHH =====
void pola4(int tebal){
	for(j=0;j<tebal;j++){
		printf("H");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
}

//===== pola H-H =====
void pola5(int tebal){
	for(j=0;j<tebal;j++){
		printf("H");
	}
	for(j=0;j<tebal;j++){
		printf(" ");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
}

//===== pola -HH =====
void pola6(int tebal){
	for(j=0;j<tebal;j++){
		printf(" ");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
}

//===== pola --H =====
void pola7(int tebal){
	for(j=0;j<tebal;j++){
		printf(" ");
	}
	for(j=0;j<tebal;j++){
		printf(" ");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
}

//===== pola -H- =====
void pola8(int tebal){
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

//===== pola H- =====
void pola9(int tebal){
	for(j=0;j<tebal;j++){
		printf("H");
	}
	for(j=0;j<tebal;j++){
		printf(" ");
	}
}

//===== pola HH =====
void pola10(int tebal){
	for(j=0;j<tebal;j++){
		printf("H");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
}

//====== pola -H ======
void pola11(int tebal){
	for(j=0;j<tebal;j++){
		printf(" ");
	}
	for(j=0;j<tebal;j++){
		printf("H");
	}
}

//===== pola H ========
void pola12(int tebal){
	for(j=0;j<tebal;j++){
		printf("H");
	}
}


//======= MODE +628 ==========
void mode1(int tebal, int panjang[], int n){
	int j;
	
	//baris pertama
	for(i=0;i<tebal;i++){
		pola1(tebal);		// pola tanda +
		spasi(tebal);
		pola8(tebal);		// pola angka 6
		spasi(tebal);
		pola8(tebal);		// pola angka 2
		spasi(tebal);
		pola8(tebal);		// pola angka 8
		for(j=0;j<n;j++){
			//jika panjang katanya 0
			if(panjang[j] == 0){
				if(j != n-1){		// jika kata bukan di indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata ada di indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang katanya 2
			if(panjang[j] == 2){
				if(j != n-1){		// jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalag indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 3
			if(panjang[j] == 3){
				if(j != n-1){		// jika kata bukan indeks terakhir
					spasi(tebal);
					pola9(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 4
			if(panjang[j] == 4){	
				spasi(tebal);	
				pola5(tebal);
			}
			
			//jika panjang katanya 5
			if(panjang[j] == 5){	
				if(j != n-1){		// jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				// jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalag indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 7	
			if(panjang[j] == 7){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola3(tebal);
				}
				else{				//jika kata adalag indkes terakhir
					spasi(tebal);
					pola10(tebal);
				}
			}
			
			//jika panjang katanya 8	
			if(panjang[j] == 8){	
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}	
				else{				// jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kaatanya 9
			if(panjang[j] == 9){	
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalag indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
		}
		printf("\n");
	}
	
	//baris kedua
	for(i=0;i<tebal;i++){
		pola8(tebal);		//pola +
		spasi(tebal);
		pola2(tebal);		//pola angka 6
		spasi(tebal);
		pola7(tebal);		//pola angka 2
		spasi(tebal);
		pola5(tebal);		//pola angka 8
		for(j=0;j<n;j++){
			//jika panjang katanya 0
			if(panjang[j] == 0){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang katanya 2
			if(panjang[j] == 2){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang katanya 3
			if(panjang[j] == 3){
				spasi(tebal);
				pola11(tebal);
			}
			
			//jika panjang katanya 4
			if(panjang[j] == 4){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 5
			if(panjang[j] == 5){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola2(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola2(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang katanya 8
			if(panjang[j] == 8){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 9
			if(panjang[j] == 9){
				spasi(tebal);
				pola5(tebal);
			}	
		}	
		printf("\n");
	}
	
	//baris ketiga
	for(i=0;i<tebal;i++){
		pola4(tebal);		//pola +
		spasi(tebal);
		pola8(tebal);		//pola angka 6
		spasi(tebal);
		pola8(tebal);		//pola angka 2
		spasi(tebal);
		pola8(tebal);		//pola angka 8
		for(j=0;j<n;j++){
			//jika panjang katanya 0
			if(panjang[j] == 0){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang katanya 0
			if(panjang[j] == 2){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 3
			if(panjang[j] == 3){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola9(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 4
			if(panjang[j] == 4){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 5
			if(panjang[j] == 5){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang katanya 8
			if(panjang[j] == 8){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 9
			if(panjang[j] == 9){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
		}	
		printf("\n");
	}
	
	//baris keempat
	for(i=0;i<tebal;i++){
		pola8(tebal);		//pola +
		spasi(tebal);
		pola5(tebal);		//pola 6
		spasi(tebal);
		pola2(tebal);		//pola 2
		spasi(tebal);
		pola5(tebal);		//pola 8
		for(j=0;j<n;j++){
			//jika panjang kata 0
			if(panjang[j] == 0){
				spasi(tebal);	
				pola5(tebal);
			}
			
			//jika panjang kata 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang kata 2
			if(panjang[j] == 2){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola2(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang kata 3
			if(panjang[j] == 3){
				spasi(tebal);
				pola11(tebal);
			}
			
			//jika panjang kata 4
			if(panjang[j] == 4){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 5
			if(panjang[j] == 5){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 6
			if(panjang[j] == 6){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang kata 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 8
			if(panjang[j] == 8){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang kata 9
			if(panjang[j] == 9){
				spasi(tebal);
				pola7(tebal);
			}
		}
		printf("\n");
	}
	
	//baris kelima
	for(i=0;i<tebal;i++){
		pola1(tebal);		//pola +
		spasi(tebal);
		pola8(tebal);		//pola 6
		spasi(tebal);
		pola8(tebal);		//pola 2
		spasi(tebal);
		pola8(tebal);		//pola 8
		for(j=0;j<n;j++){
			//jika panjang kata 0
			if(panjang[j] == 0){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang kata 2
			if(panjang[j] == 2){
				if(j != n-1){		//jika kata bukan indesk terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 3
			if(panjang[j] == 3){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola9(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang kata 4
			if(panjang[j] == 4){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 5
			if(panjang[j] == 5){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 8
			if(panjang[j] == 8){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 9
			if(panjang[j] == 9){
				if(j != n-1){		//jika kata bukan indeks terkahir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
		}
		printf("\n");
	}
	
}

//========== MODE 08 =============
void mode2(int tebal, int panjang[], int n){
	int j;
	
	//baris pertama
	for(i=0;i<tebal;i++){
		pola8(tebal);
		spasi(tebal);
		pola8(tebal);
		for(j=0;j<n;j++){
			//jika panjang katanya 0
			if(panjang[j] == 0){
				if(j != n-1){		// jika kata bukan di indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata ada di indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang katanya 2
			if(panjang[j] == 2){
				if(j != n-1){		// jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalag indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 3
			if(panjang[j] == 3){
				if(j != n-1){		// jika kata bukan indeks terakhir
					spasi(tebal);
					pola9(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 4
			if(panjang[j] == 4){	
				spasi(tebal);	
				pola5(tebal);
			}
			
			//jika panjang katanya 5
			if(panjang[j] == 5){	
				if(j != n-1){		// jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				// jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalag indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 7	
			if(panjang[j] == 7){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola3(tebal);
				}
				else{				//jika kata adalag indkes terakhir
					spasi(tebal);
					pola10(tebal);
				}
			}
			
			//jika panjang katanya 8	
			if(panjang[j] == 8){	
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}	
				else{				// jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kaatanya 9
			if(panjang[j] == 9){	
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalag indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
		}
		printf("\n");
	}
	
	//baris kedua
	for(i=0;i<tebal;i++){
		pola5(tebal);
		spasi(tebal);
		pola5(tebal);
		for(j=0;j<n;j++){
			//jika panjang katanya 0
			if(panjang[j] == 0){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang katanya 2
			if(panjang[j] == 2){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang katanya 3
			if(panjang[j] == 3){
				spasi(tebal);
				pola11(tebal);
			}
			
			//jika panjang katanya 4
			if(panjang[j] == 4){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 5
			if(panjang[j] == 5){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola2(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola2(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang katanya 8
			if(panjang[j] == 8){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 9
			if(panjang[j] == 9){
				spasi(tebal);
				pola5(tebal);
			}	
		}		
		printf("\n");
	}
	
	//baris ketiga
	for(i=0;i<tebal;i++){
		pola5(tebal);
		spasi(tebal);
		pola8(tebal);
		for(j=0;j<n;j++){
			//jika panjang katanya 0
			if(panjang[j] == 0){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang katanya 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang katanya 0
			if(panjang[j] == 2){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 3
			if(panjang[j] == 3){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola9(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang katanya 4
			if(panjang[j] == 4){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 5
			if(panjang[j] == 5){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang katanya 8
			if(panjang[j] == 8){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang katanya 9
			if(panjang[j] == 9){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata adalah indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
		}
		printf("\n");
	}
	
	//baris keempat
	for(i=0;i<tebal;i++){
		pola5(tebal);
		spasi(tebal);
		pola5(tebal);
		for(j=0;j<n;j++){
			//jika panjang kata 0
			if(panjang[j] == 0){
				spasi(tebal);	
				pola5(tebal);
			}
			
			//jika panjang kata 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang kata 2
			if(panjang[j] == 2){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola2(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang kata 3
			if(panjang[j] == 3){
				spasi(tebal);
				pola11(tebal);
			}
			
			//jika panjang kata 4
			if(panjang[j] == 4){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 5
			if(panjang[j] == 5){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 6
			if(panjang[j] == 6){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang kata 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 8
			if(panjang[j] == 8){
				spasi(tebal);
				pola5(tebal);
			}
			
			//jika panjang kata 9
			if(panjang[j] == 9){
				spasi(tebal);
				pola7(tebal);
			}
		}
		printf("\n");
	}
	
	//baris kelima
	for(i=0;i<tebal;i++){
		pola8(tebal);
		spasi(tebal);
		pola8(tebal);
		for(j=0;j<n;j++){
			//jika panjang kata 0
			if(panjang[j] == 0){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 1
			if(panjang[j] == 1){
				spasi(tebal);
				pola12(tebal);
			}
			
			//jika panjang kata 2
			if(panjang[j] == 2){
				if(j != n-1){		//jika kata bukan indesk terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 3
			if(panjang[j] == 3){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola9(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola12(tebal);
				}
			}
			
			//jika panjang kata 4
			if(panjang[j] == 4){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 5
			if(panjang[j] == 5){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 6
			if(panjang[j] == 6){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 7
			if(panjang[j] == 7){
				spasi(tebal);
				pola7(tebal);
			}
			
			//jika panjang kata 8
			if(panjang[j] == 8){
				if(j != n-1){		//jika kata bukan indeks terakhir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
			
			//jika panjang kata 9
			if(panjang[j] == 9){
				if(j != n-1){		//jika kata bukan indeks terkahir
					spasi(tebal);
					pola8(tebal);
				}
				else{				//jika kata indeks terakhir
					spasi(tebal);
					pola11(tebal);
				}
			}
		}
		printf("\n");
	}
	
}

//======= MENAMPILKAN OUTPUT ===========
void output(int kode, int n, int panjang[], int tebal){
	int ciri = code(kode);		//MENAMPUNG NILAI FUNGSI
	
	if(ciri == 1){
		mode1(tebal, panjang, n);		//pemanggilan prosedur mode1
	}
	else{
		mode2(tebal, panjang, n);		//pemanggilan prosedur mode2
	}
}