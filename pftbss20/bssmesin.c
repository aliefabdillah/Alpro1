/*Saya Alief Muhammad Abdillah 2003623 mengerjakan UAS pftbss20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian mesin
#include "bsshead.h"

void banding(int n, char str1[][50], char str2[][50]){
	int i;
	//membuat progam pengecekan
	i=0;
	while(i<n){
		if(strlen(str1[i]) == strlen(str2[i])){		//jika panjang kata1 = kata2
			printf("%s = %s\n", str1[i], str2[i]);
		}
		if(strlen(str1[i]) < strlen(str2[i])){		//jika panjang kata1 < kata2
			printf("%s < %s\n", str1[i], str2[i]);
		}
		if(strlen(str1[i]) > strlen(str2[i])){		//jika panjang kata1 > kata2
			printf("%s > %s\n", str1[i], str2[i]);
		}
		i++;
	}
}
