#include <stdio.h>

int main(){
	//bismillah
	/*Saya Aryo Bagas Pamungkas 2003452 mengerjakan soal Kuis Irisan asa
	dimasa pandemi dalam mata kuliah Algoritma dan pemograman untuk 
keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/


	int x1, y1, x2, y2;
	//membuat variabel untuk persegi panjang pertama

	int x3, y3, x4, y4;
	//membuat variabel untuk persegi panjang kedua

	scanf(" %d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3
		, &y3, &x4, &y4);
	//meminta masukan user untuk nilai2 koordinat

	int panjang1, lebar1, panjang2, lebar2;
	//membuat variabel untuk panjang dan lebar

	int luas1, luas2;
	//membuat variabel untuk luas

	panjang1 = x2 - x1;
	//menentukan panjang persegi panjang pertama
	panjang2 = x4 - x3;
	//menentukan panjang persegi panjang kedua
	lebar1 = y1 - y2;
	//menentukan lebar persegi panjang pertama
	lebar2 = y3 - y4;
	//menentukan lebar persegi panjang kedua

	luas1 = panjang1 * lebar1;
	//menentukan luas persegi panjang pertama
	luas2 = panjang2 * lebar2;
	//menentukan luas persegi panjang kedua

	if((y3 <= y1) && (x3 < x2)
		&& (y3 > y2) && (luas1 > luas2)){
		printf("beririsan\n");
		printf("pertama\n");
	//membuat kondisi ketika beririsan dan luas1>luas2

	}	
	else if ((y3 <= y1) && (x3 < x2)
		&& (y3 > y2) && (luas2 > luas1)){
		printf("beririsan\n");
		printf("kedua\n");
	//membuat kondisi ketika beririsan dan luas2>luas1	


	}



	else if((y4 >= y2) && (x4 > x1)
		&& (y4 < y1) && (luas1 > luas2)){

		printf("beririsan\n");
		printf("pertama\n");
	//membuat kondisi ketika beririsan dan luas1>luas2

	}

	else if ((y4 >= y2) && (x4 > x1)
		&& (y4 < y1) && (luas2 > luas1)){

			printf("beririsan\n");
			printf("kedua\n");
	//membuat kondisi ketika beririsan dan luas2>luas1
	
	}
	
	



	else if (luas1 > luas2){

			printf("tidak beririsan\n");
			printf("pertama\n");

			//membuat kondisi ketika tidak beririsan dan luas1>luas2
	}


	else if (luas2 > luas1){

			printf("tidak beririsan\n");
			printf("kedua\n");
			
			//membuat kondisi ketika tidak beririsan dan luas2>luas1
	}
	
	

	return 0;

}
