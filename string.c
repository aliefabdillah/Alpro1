//do while dan string

/*//do while
char c;

do{
	printf("apalah anda akan berputar lagi? (y/t) \n");
	scanf("%c", &c);
}while(c == 'y'); (syarat)


//string = untuk inialisasi array of char (%s)
//string selalu ada null di akhir kararkter jadi jika ingin mengisi dengan 5 karakter maka harus inisialisasi 6 karakter karena karakter terakhir diisi oleh object nul (\0)
//strlen(str) = menghitung banyaknya karakter pada str

#include <stdio.h>
#include <string.h>

int main(){
	char str [50];
	scanf("%s", &str);
	
	int i;
	printf("%s\n", str);
	for(i=0;i<strlen(str);i++){
		printf("%c", str[i]);
	}
	
	return(0);
}


//strcpy(str2, str1) = menyalin isi str1 ke str 2
#include <stdio.h>
#include <string.h>

int main(){
	char str1[50];
	char str2[50];
	
	scanf("%s", &str1);
	strcpy(str2, str1);
	
	int i;
	for(i=0;i<strlen(str2);i++){
		printf("%c", str2[i]);
	}
	
	return 0;
}


//strcmp(str1, str2) = membandingkan isi str1 dan str 2
//strcmp akan bernilai == 0 jika isi str sama dan akan bernilai selain 0 jika isi str beda

#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	char str2[50];
	
	scanf("%s", &str);
	scanf("%s", &str2);
	
	if(strcmp(str, str2) == 0){
		printf("isi string sama\n");
	}else{
		printf("isi string beda\n");
	}
	
	return 0;
}


//menghitung jumlah huruf vokal
#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, jumlah = 0;
	for(i=0;i<strlen(str);i++){
		if((str[i] == 'a') || (str[i] == 'i') ||(str[i] == 'u') || (str[i] == 'e') || (str[i] == 'o')){
			jumlah++;
		}
	}
	printf("%d\n", jumlah);
	
	return 0;
}


//menghitung jumlah huruf konsonan
#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, jumlah = 0;
	for(i=0;i<strlen(str);i++){
		if((str[i] != 'a') && (str[i] != 'i') && (str[i] != 'u') && (str[i] != 'e') && (str[i] != 'o')){
			jumlah++;
		}
	}
	printf("%d\n", jumlah);
	
	return 0;
}


//menghitung banyaknya karakter angka pada string
#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, jumlah = 0;
	for(i=0;i<strlen(str);i++){
		if((str[i] >= 'a') && (str[i] <= 'z')){
			jumlah = 0;
		}
		else{
			jumlah++;
		}
	}
	printf("%d\n", jumlah);
	
	return 0;
}


//menghitung jumlah "ka" pada "kata", "bakaka", "kaka"
#include <stdio.h>
#include <string.h>

int main(){
	char str1[50];
	char str2[50];
	char str3[50];
	
	scanf("%s", &str1);
	scanf("%s", &str2);
	scanf("%s", &str3);
	
	int i, jumlah1 = 0, jumlah2 = 0, jumlah3 = 0;
	for(i=0;i<strlen(str1);i++){
		if((str1[i] == 'ka')){
			jumlah1 = ++;
		}
	}
	for(i=0;i<strlen(str2);i++){
		if((str[i] == 'ka')){
			jumlah2 = ++;
		}
	}
	for(i=0;i<strlen(str3);i++){
		if((str[i] == 'ka')){
			jumlah3 = ++;
		}
	}
	
	printf("'kata' = %d\n", jumlah1);
	printf("'kaka' = %d\n", jumlah2);
	printf("'bakaka' = %d\n", jumlah3);
	
	return 0;
}
belum beres 

//menyusun kata seperti bintang ceria
#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, j, spasi = 0;
	for(i=0;i<strlen(str);i++){
		for(j=0;j<spasi;j++){
			printf(" ");
		}
		printf("%c\n", str[i]);
		spasi++;
	}
	
	return 0;
}


//latihan menyusun 1
#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, j, spasi = 0;
	for(i=0;i<strlen(str);i++){
		for(j=1;j<spasi;j++){
			printf("-");
		}
		printf("%c", str[i]);
		printf("\n");
	}
	for(i=strlen(str)/2;i>0;i--){
		for(j=i-1;j>0;j--){
			printf("-");
		}
		for(j=0;j<i;j++){
			printf("%c", str[i]);
		}
		printf("\n");
	}
	
	return 0;
}
belum beres

//latihan menyusun 3
#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, j, spasi = 0;
	for(i=strlen(str)-1;i>=0;i--){
		for(j=i;j>=0;j--){
			printf(" ");
		}
		printf("%c\n", str[i]);
		spasi++;
	}
	
	return 0;
}

//latihan menyusun 2
#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, j, spasi = 0;
	for(i=strlen(str)-1;i>=0;i--){
		for(j=i;j>0;j--){
			printf("-");
		}
		printf("%c\n", str[i]);
	}
	return 0;
}
*/

