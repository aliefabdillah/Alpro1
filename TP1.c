/*Saya Alief Muhammad Abdillah 2003623 mengerjakan TP1 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <math.h>

int main(){
// membuat variabel 
	int detik, menit, jam;
	int totalDetik, totalMenit, totalJam;
	int rest;
	int foto;
//coding input user
	scanf("%d", &menit);
	scanf("%d", &detik);
	scanf("%d", &foto);
//coding untuk output
	rest = ((menit * foto) + ((detik * foto) / 60)) / 30;
	totalDetik = (detik * foto) % 60;
	totalMenit = ((menit * foto) + ((detik * foto) / 60) + (((menit * foto) + ((detik * foto) / 60)) / 30)) % 60 ;
	totalJam = ((menit * foto) + ((detik * foto) / 60) + (((menit * foto) + ((detik * foto) / 60)) / 30)) / 60;
// keluaran atau output
	printf("Istirahat sebanyak : %d\n", rest);
	printf("Total waktu yang diperlukan : %d jam %d menit %d detik\n", totalJam, totalMenit, totalDetik);
	return 0;
}

/*
#include <stdio.h>
int main(){
	char c1, c2, c3, c4, c5, c6;
	scanf(" %c", &c1);
	scanf(" %c", &c2);
	scanf(" %c", &c3);
	scanf(" %c", &c4);
	scanf(" %c", &c5);
	scanf(" %c", &c6);

	if(((c1 == 'a') || (c1 == 'i') || (c1 == 'u') || (c1 == 'e') || (c1 == 'o')) && ((c2 != 'a') && (c2 != 'i') && (c2 != 'u') && (c2 != 'e') && (c2 != 'o')) &&
		((c3 == 'a') || (c3 == 'i') || (c3 == 'u') || (c3 == 'e') || (c3 == 'o')) && ((c4 != 'a') && (c4 != 'i') && (c4 != 'u') && (c4 != 'e') && (c4 != 'o')) && 
		((c5 == 'a') || (c5 == 'i') || (c5 == 'u') || (c5 == 'e') || (c5 == 'o')) && ((c6 != 'a') && (c6 != 'i') && (c6 != 'u') && (c6 != 'e') && (c6 != 'o'))){  
			
			printf("kombinasi valid\n");
			
	}else if(((c1 != 'a') && (c1 != 'i') && (c1 != 'u') && (c1 != 'e') && (c1 != 'o')) && ((c2 == 'a') || (c2 == 'i') || (c2 == 'u') || (c2 == 'e') || (c2 == 'o')) &&
		((c3 != 'a') && (c3 != 'i') && (c3 != 'u') && (c3 != 'e') && (c3 != 'o')) && ((c4== 'a') || (c4 == 'i') || (c4 == 'u') || (c4 == 'e') || (c4 == 'o')) &&
		((c5 != 'a') && (c5 != 'i') && (c5 != 'u') && (c5 != 'e') && (c5 != 'o')) && ((c4== 'a') || (c6 == 'i') || (c6 == 'u') || (c6 == 'e') || (c6 == 'o'))){
			
			printf("kombinasi valid\n");
		
	}else{
			printf("kombinasi tidak valid\n");
	}
	
	return 0;
}

*/