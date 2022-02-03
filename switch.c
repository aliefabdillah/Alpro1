#include <stdio.h>
#include <math.h>

int main(){
// menambahkan variabel dan mamsukan input user	
	int hari;
	printf("masukan nomor hari: \n");
	scanf("%d", &hari);
//membuat case
	switch(hari){
		case 1 : {
					printf("Hari Senin\n");
					break;
		}
		
		case 2 : {
					printf("Hari Selasa\n");
		}
		
		default : {
					printf("HARI LIBUR");
		}
	}
	
	return 0;
}