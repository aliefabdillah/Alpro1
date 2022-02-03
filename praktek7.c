//do while
#include <stdio.h>
#include <string.h>
//do while
/*
int main(){
	int total = 0, n;
	
	printf("=== Warteg Onlen ===\n");
	printf("[Pilih Menu] :\n");
	printf("1. Nasi Anget         | 2k\n");
	printf("2. Tempe Bacem        | 1k\n");
	printf("3. Ayam Serundeng     | 12k\n");
	printf("4. Pecel Lele         | 9k\n");
	printf("5. Es Teh             | 4k\n");
	printf("---------------------------\n");
	
	do{
		scanf("%d", &n);
		if(n == 1){
			total += 2000;
		}
		else if(n == 2){
			total += 1000;
		}
		else if(n == 3){
			total += 12000;
		}
		else if(n == 4){
			total += 9000;
		}
		else if(n == 5){
			total += 4000;
		}
		else{
			printf("ga ada di menu\n");
		}
	}while(n != 0);
	
	printf("==============\n");
	printf("Total Harga : Rp. %d,- \n", total);
	return 0;
}
	
// string
int main(){
	char string1[25];
	char string2[25];
	char tampungan[25];
	
	scanf("%s", string1);
	scanf("%s", string2);
	
	int cmp = strcmp(string1, string2);
	
	if(cmp == 0){
		printf("stringnya sama\n");
	}
	if(strcmp (string1, string2) == 0){
		printf("stringnya emang sama\n");
	}
	else{
		printf("stringnya beda\n");
	}
	
	do{
		scanf("%s", &tampungan);
	}while(strcmp (tampungan, "stop") !=0);
	
	return 0;
}


int main (){
	char string1[25] = "hayuukk";
	char string2[25] = "meluncur";
	
	//akan negatif
	int cmp1 = strcmp (string1, string2);
	//akan positif
	int cmp2 = strcmp (string2, string1);
	
	printf("cmp1 : %d\n", cmp1);
	printf("cmp2 : %d\n", cmp2);
	
	return 0;
}


//latihan 1
int main(){
	int n, max = 0;
	char string[25], stringmax[25];
	
	do{
		scanf("%s", string);
		if(strlen(string) > max){
			max = strlen(string);
			strcpy(string, stringmax);
		}
	}while(strcmp(string, "udah") != 0);
	
	printf("---------------\n");
	printf("String Terpanjang adalah %s\n", stringmax);
	return 0;
}
*/

//latiham 2
int main(){
	int i=0 ,j=0;
	char string[100];
	
	scanf("%s", string);
	int p = strlen(string);
	
	for(i=0;i<p/2;i++){
		printf("%s", string[i]);
	}
	
	return 0;
}