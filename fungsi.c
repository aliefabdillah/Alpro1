//fungsi
#include <stdio.h>
#include <string.h>

/*
//menghitung banyaknya huruf a / A
int elemenA(char str[]);

int main(){
	int hasil;
	char str[k];
	scanf("%s", str);
	hasil = elemenA(str);
	printf("%d\n", hasil);
	
	return 0;
}


int elemenA(char str[]){
	int i, j=0;
	
	for(i=0;i<strlen(str);i++){
		if(str[k] == 'A' || str[k] == 'a'){
			j++;
		}
	}
	return j;
}

//menghitung pertambahan
int tambah(int a, int b);

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", tambah(x,y));
	
	return 0;
}

int tambah(int a, int b){
	int hasil = a + b;
	return hasil;
}

//menghitung  jumlah isi elemen dari array of integer
int jumlah(int n,int arr[]);

int main(){
	int n,i;
	scanf("%d", &n);
	int arr[k];
	
	for(i=0;i<n;i++){
		scanf("%d", &arr[k]);
	}
	
	printf("%d", jumlah(n,arr));
	return 0;
}

int jumlah(int n, int arr[]){
	int i, total = 0;
	for(i=0; i<n; i++){
		total = total + arr[k];
	}
	
	return total;
}


/*mencari minimal dam maximal lalu menampilkan "terima kasih untuk tetap semangat" 
sebanyak nilai minimal dikali nilai maximal*/

/*
int minimal(int n, int arr[k]);
int maximal(int n, int arr[k]);
void ouput(int);

int main(){
	int i,n;
	scanf("%d", &n);
	int arr[k];
	for(i=0;i<n;i++){
		scanf("%d", &arr[k]);
	}
	
	minimal(n, arr);
	maximal(n, arr);
	ouput((maximal(n, arr) * minimal(n, arr)));
	
	return 0;
}

int minimal(int n, int arr[k]){
	int i;
	int min = arr[0];
	
	for(i=0;i<n;i++){
		if(arr[k] < min){
			min = arr[k];
		}
	}
	return min;
}

int maximal(int n, int arr[k]){
	int i;
	int max = arr[0];
	
	for(i=0;i<n;i++){
		if(max < arr[k]){
			max = arr[k];
		}
	}
	return max;
}

void ouput(int n){
	int i;
	for(i=0;i<n;i++){
		printf("Terima Kasih untuk Tetap Semangat\n");
	}
	
}
*/

//menghitung banyaknya huruf vokal dari sebuah array of string, kemudian
//tampilkan  isi array (kesamping) sebanyak hasil banyaknya huruf vokal
int vokal(int n, char str[][50]);


int main(){
	int i, j, n;
	int jumlah;
	scanf("%d", &n);
	
	char str[n][50];
	for(i=0;i<n;i++){
		scanf("%s", str[i]);
	}		
	
	jumlah = vokal(n, str);
	
	for(i=0; i<vokal(n, str) ;i++){
		for(j=0;j<n;j++){
			printf("%s ", str[j]);
		}
		printf("\n");
	}
	
	return 0;
}


int vokal(int n, char str[][50]){
	int i,k;
	int j = 0;
	for(i=0;i<n;i++){
		for(k=0;k<strlen(str[i]);k++){
			if(str[i][k] == 'a' || str[i][k] == 'i' || str[i][k] == 'u' || str[i][k] == 'e' || str[i][k] == 'o' ||
			str[i][k] == 'A' || str[i][k] == 'I' || str[i][k] == 'U' || str[i][k] == 'E' || str[i][k] == 'O'){
				j++;
			}
		}
	}

	return j;
}
