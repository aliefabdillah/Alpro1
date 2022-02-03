/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz iris20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>

int main(){
//menentukan variabel untuk koordinat
	int x1, y1, x2, y2, x3, y3, x4, y4;
//membuat input variabel untuk user
	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x2);
	scanf("%d", &y2);
	scanf("%d", &x3);
	scanf("%d", &y3);
	scanf("%d", &x4);
	scanf("%d", &y4);
//menentukan luas kedua persegi panjang
	int luas1 = ((x2 - x1)*(y1 - y2));
	int luas2 = ((x4 - x3)*(y3 - y4));
//jika beririsan
	if((x1,y1 < x3,y3) || (x1,y1 > x3,y3) && (x1,y1 < x4,y4) || (x1,y1 > x4,y4)){
		if(luas1 > luas2){	//kemungkinan jika luas1 lebih besar dari luas 2
			printf("beririsan\n");
			printf("pertama\n");
		}		
		else{
			printf("beririsan\n");
			printf("kedua\n");
		}
	}
//jika tidak beririsan	
	else{
		if(luas1 < luas2){	//kemungkinan jika luas 2 lebih besar dari luas 1
			printf("tidak beririsan\n");
			printf("kedua\n");
		}		
		else{
			printf("tidak beririsan\n");
			printf("pertama\n");
		}
	}
	
	return 0;
}	