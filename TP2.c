/*Saya Alief Muhammad Abdillah 2003623 mengerjakan TP2 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <math.h>

int main(){
	int ma1, ma2, min;
	int jumlah_ma1, jumlah_ma2, jumlah_min;
	scanf("%d %d", &ma1, &jumlah_ma1);
	scanf("%d %d", &ma2, &jumlah_ma2);
	scanf("%d %d", &min, &jumlah_min);
	
	int harga1, harga2, harga3;
//kemungkinan pesanan user memesan makanan 1
	if(ma1 == 1){
		harga1 = 3000;
	}
	else if(ma1 == 2){
		harga1 = 2000;
	}
	else if(ma1 == 3){
		harga1 = 15000;
	}		
	else if(ma1 == 4){
		harga1 = 12000;
	}
	else if(ma1 == 5){
		harga1 = 10000;
	}
	else if(ma1 == 6){
		harga1 = 8000;
	}
	
//kemungkinan makanan 2 yang dipesan oleh user
	if(ma2 == 1){
		harga2 = 3000;
	}
	else if(ma2 == 2){
		harga2 = 2000;
	}
	else if(ma2 == 3){
		harga2 = 15000;
	}		
	else if(ma2 == 4){
		harga2 = 12000;
	}
	else if(ma2 == 5){
		harga2 = 10000;
	}
	else if(ma2 == 6){
		harga2 = 8000;
	}
	
//kemungkinan minuman yang dipesan
	if(min == 1){
		harga3 = 4000;
	}
	else if(min == 2){
		harga3 = 7000;
	}
	else if(min == 3){
		harga3 = 5000;
	}
	
//rumus jumlah harga sebelum diskon
	int harga=((harga1*jumlah_ma1) + (harga2*jumlah_ma2) + (harga3*jumlah_min)); 
	int diskon;
	
/*kemungkinan jumlah makanan dan minuman yang dipesan dan juga menentukan jumlah diskon
dari makanan 1*/
	if(((jumlah_ma1 + jumlah_ma2) % 2 != 0) && (jumlah_min % 2 == 0)){
		if(harga <= 40000){
			diskon = 25;
		}else{
			diskon = 50;
		}
	}

/*kemungkinan jumlah makanan dan minuman yang dipesan dan juga menentukan jumlah diskon
dari makanan 2*/
	if(((jumlah_ma1 + jumlah_ma2) % 2 == 0) && (jumlah_min % 2 != 0)){
		if(harga <= 40000){
			diskon = 20;
		}else{
			diskon = 40;
		}
	}

/*kemungkinan jumlah makanan dan minuman yang dipesan dan juga menentukan jumlah diskon
dari minuman*/	
	if((((jumlah_ma1 + jumlah_ma2) % 2 != 0) && (jumlah_min % 2 != 0)) || (((jumlah_ma1 + jumlah_ma2) % 2 == 0) 
		&& (jumlah_min % 2 == 0))){
		if(harga <= 25000){
			diskon = 10;
		}else{
			diskon = 20;
		}
	}
	
//harga makanan sebelum diskom
	int harga = ((harga1*jumlah_ma1) + (harga2*jumlah_ma2) + (harga3*jumlah_min));
//harga makanan setelah diskon
	int totalHarga = (harga - ((harga * diskon)/100));
// ouput yang ditambpilkan
	printf("Harga       : %d\n", harga);
	printf("Anda Mendapat Potongan %d%%\n", diskon);	
	printf("Total Harga : %d\n", totalHarga);
	
	return 0;
}