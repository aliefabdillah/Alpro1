//array string

#include <stdio.h>
#include <string.h>
/*
typedef struct{
	char kata[50];
}string;

int main(){
	int i, j, n;
	scanf("%d", &n);
	
	string arr[n];
	
	for(i=0;i<n;i++){
		scanf("%s", &arr[i].kata);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i].kata);j++){
			printf("%c\n", arr[i].kata[j]);
		}
	}
	
	return 0;
}


//array string dua dimensi
int main(){
	int i, j, n;
	scanf("%d", &n);
	
	char arr[i][50];
	for(i=0;i<n;i++){
		scanf("%s", arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i]);j++){
			printf("%c", arr[i][j]);
		}
	}
	
	return 0;
}


//studi kasus 1 (menghitung semua huruf a kecil di dalam array of string)
typedef struct{
	char kata[50];
}string;

int main(){
	int i, n, j, jumlah = 0;
	scanf("%d", &n);
	string arr[n];
	
	for(i=0;i<n;i++){
		scanf("%s", &arr[i].kata);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i].kata);j++){
			if(arr[i].kata[j] == 'a'){
				jumlah++;
			}
		}
	}
	printf("%d\n", jumlah);
	return 0;
}

//studi kasus 2 (memeriksa apakah semua string memiliki huruf 'a')
int main(){
	int i, j, n, cek = 1;
	scanf("%d", &n);
	
	char arr[n][50];
	for(i=0;i<n;i++){
		scanf("%s", arr[i]);
	}
	
	i=0;
	while(i<n && cek == 1){
		int ada = 0;
		j=0;
		while((j<strlen(arr[i])) && (ada == 0)){
			if(arr[i][j] == 'a'){
				ada = 1;
			}
			else{
				j++;
			}
		}
		if(ada == 0){
			cek = 0;
		}else{
			i++;
		}
	}
	
	if(cek == 0){
		printf("tidak valid\n");
	}
	else{
		printf("valid\n");
	}
	
	return 0;
}


//membuat tangga string 1
typedef struct{
	char kata[50];
}string;

int main(){
	int spasi = 0, i, n ,j;
	scanf("%d", &n);
	
	string arr[n];
	i=0;
	while(i<n){
		scanf("%s", &arr[i].kata);
		i++;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<spasi;j++){
			printf(" ");
		}
		printf("%s\n", arr[i].kata);
		spasi = spasi + strlen(arr[i].kata);
	}
	
	return 0;
}
*/

//mari mencoba 1
int main(){
	int i, j, n;
	char arr[50];
		scanf("%s", &arr[i]);
	
	for(i=0;i<50;i++){
		if((arr[i] == 'a') || (arr[i] == 'i') || (arr[i] == 'u') || (arr[i] == 'e') || (arr[i] == 'o')){
			arr[i] = i;
			if(i > 9){
				i = i-10;
			}
		}
		else{
			arr[i] = arr[i];
		}
	}
	
	printf("%s\n", arr[i]);
	
	return 0;
}