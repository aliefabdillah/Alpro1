/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz stops20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>

int main(){
//membuat variabel untuk input
	int j1, m1, j2, m2, j3, m3, j4, m4;
//membuat progam untuk input user
	scanf("%d", &j1);
	scanf("%d", &m1);
	scanf("%d", &j2);
	scanf("%d", &m2);
	scanf("%d", &j3);
	scanf("%d", &m3);
	scanf("%d", &j4);
	scanf("%d", &m4);
	
//konversi jam ke menit
	int tj1 = (j1*60) + m1;
	int tj2 = (j2*60) + m2;
	int tj3 = (j3*60) + m3;
	int tj4 = (j4*60) + m4;
	
//kemungkingan irisan jam
	if((tj3<=tj2)&&(tj3>=tj1)&&(tj3<=tj4)){
		printf("hore dibaca si dia\n");
	}
	else{
		printf("ikhlaskan saja\n");
	}
	return 0;
}