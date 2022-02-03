#include <stdio.h>
#include <string.h>

//contoh array of string
/*
int main(){
	int i, n;
	
	scanf("%d", &n);
	
	char input[n][100];
	
	for(i=0;i<n;i++){
		scanf("%s", input[i]);
	}
	
	printf("===========\n");
	for(i=0;i<n;i++){
		printf("%s\n", input[i]);
	}
	
	return 0;
}


//contoh progam dengan typedef struct dengan while
typedef struct{
	char kata[100];
}kalimat;

int main(){
	int i, n;
	n=0;
	//deklarasi variabel bungkusan
	kalimat input[50];
	
	scanf("%s", &input[n].kata);
	
	//lakukan selama bukan kata selesai
	while(strcmp(input[n].kata, "selesai") != 0){
		//jumlahkan
		n++;
		//masukan kata yang baru
		scanf("%s", &input[n].kata);
	}
	
	//tampilkan semua string bernilai n > 0
	if(n>0){
		printf("========\n");
		for(i=0;i<n;i++){
			printf("%s\n", input[i].kata);
		}
	}
	
	return 0;
}


//dengan do while
typedef struct{
	char kata[100];
}kalimat;

int main(){
	int i, n, j;
	n=0;
	//deklarasi variabel bungkusan
	kalimat input[50];
	
	//lakukan do while selama bukan selesai
	do{
		//input kata
		scanf("%s", &input[n].kata);
		//jika bukan selesai maka jumlahkan
		if(strcmp(input[n].kata, "selesai") != 0){
			n++;
		}
	}while(strcmp(input[n].kata, "selesai") !=0);
	
	//tampilkan semua string jika n bernilai lebih dari 0
	if(n>0){
		printf("=======\n");
		for(i=0;i<n;i++){
			for(j=0;j<strlen(input[i].kata);j++)
			{
				printf("%c", input[i].kata[j]);
				if (j<strlen(input[i].kata)-1)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}


//latihan 1 pake while
typedef struct{
	char kata[50];
}masukan;

int main(){
	int i, n;
	n=0;
	//deklarasi variabel bungkusan
	masukan array[50];
	
	scanf("%s", &array[n].kata);
	
	//lakukan selama bukan kata selesai
	while(strcmp(array[n].kata, "mantul") != 0){
		//jumlahkan
		n++;
		//masukan kata yang baru
		scanf("%s", &array[n].kata);
	}
	
	//tampilkan panjang string
	if(n>0){
		printf("========\n");
		for(i=0;i<n;i++){
			printf("%d\n", strlen(array[i].kata));
		}
	}
	
	return 0;
}


//dengan do while
typedef struct{
	char kata[50];
}masukan;

int main(){
	int i, n;
	n=0;
	//deklarasi variabel bungkusan
	masukan array[50];
	
	//lakukan do while selama bukan mantul
	do{
		//input kata
		scanf("%s", &array[n].kata);
		//jika bukan mantul 
		if(strcmp(array[n].kata, "mantul") != 0){
			n++;
		}
	}while(strcmp(array[n].kata, "mantul") !=0);
	
	//tampilkan panjang string
	if(n>0){
		printf("=======\n");
		for(i=0;i<n;i++){
			printf("%d\n", strlen(array[i].kata));
		}
	}
	
	return 0;
}
*/

int main(){
	int n,i;
	//scanf("%d", &n);
	
	char str[50];
	scanf("%s", &str);

	int panjang = strlen(str);
	printf("%d", panjang);
	
	return 0;
}