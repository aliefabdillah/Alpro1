#include <stdio.h>
#include <math.h>

/*menamipikan angka berurut
int main(){
	int i;
	int n = 3;
	for(i = 0;i < n;i++)
		printf("no. urut = %d\n", i+1);
}

///faktorial
int main(){
	int i, j;
	int n;
	scanf("%d", &n);
	
	int hasil_faktorial = 1;
	for(i = n; i > 0; i--){	//perulangan sebanyak n
		hasil_faktorial*=i; 
		//hasil_faktorial = hasil_faktorial*i
	}
	printf("%d\n", hasil_faktorial);
	return 0;
}

/// menampilkan perkalian sampai 10 
int main(){
	int num,i;
	scanf("%d", &num);
	printf("\n");
	
	int n = 10;
	
	for (i=1;i<=n;i++){
		printf("%d\n", num*i);
	}
	
	return 0;
}

///perbintangan vertikal
int main(){
	int i,n;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("*");
	}
	
	printf("\n")
	
	return 0;
}

///perbintangan horizontal
int main(){
	int i,n;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("*\n");
	}
	
	printf("\n")
	
	return 0;
}

///perbintangan segitiga
int main(){
	int i,n,j;
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

///latihan perbintangan1
int main(){
	int i,n,j;
	scanf("%d", &n);
	
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

*///latihan bintang 2
int main(){
	int i,bintang,j;
	scanf("%d", &bintang);
	
	for(i=1;i<=bintang;i++){
		for(j=bintang-i;j>0;j--){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		
		for(j=bintang-i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=bintang-1;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		
		for(j=bintang-i;j>0;j--){
			printf("*");
		}
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}