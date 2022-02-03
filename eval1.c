#include <stdio.h>
#include <math.h>

int main ()
{
	int n,i,kolom;
	scanf("%d", &n);
	
	char huruf[n];
	for(i=0;i<n;i++){
		scanf(" %c", &huruf[i]);
	}
	
	for(i=0;i<n;i++){
		for(kolom=n-i;kolom>1;kolom--){
			printf("-");
		}
		for(kolom=0;kolom<i;kolom++){
			printf("%c", huruf[kolom]);
		}
		for(kolom=0;kolom<=i;kolom++){
			printf("%c", huruf[kolom]);
		}
		for(kolom=2;kolom>i;kolom--){
			printf("%c", huruf[i]);
		}
		for(kolom=n-i;kolom>1;kolom--){
			printf("%c", huruf[i]);
		}
		for(kolom=1;kolom<i;kolom++){
			printf("%c", huruf[1]);
		}
		for(kolom=0;kolom<i;kolom++){
			printf("%c", huruf[kolom]);
		}
		for(kolom=1;kolom<=1;kolom++){
			printf("%c", huruf[0]);
		}
		printf("\n");
	}
	
	for(i=0;i<n-1;i++){
		for(kolom=0;kolom<=i;kolom++){
			printf("-");
		}
		for(kolom=n-i;kolom>2;kolom--){
			printf("%c", huruf[i]);
		}
		for(kolom=(n-i);kolom>=0;kolom--){
			printf("%c", huruf[kolom]);
		}
		printf("\n");
	}
	
	return 0;	
}	