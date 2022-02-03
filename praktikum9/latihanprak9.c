#include <stdio.h>

void hasil(int n, char str[][50], int nilai[]){
	
	int i = 0;	
	int ada = 0;
	int j = 1;
	printf(">>> A\n");
	for(i=0;i<n;i++){
		if(nilai[i] >= 90 && nilai[i] <= 100){
			printf("%d. %s\n", j, str[i]);
			j++;
			ada = 1;
		}
	}
	if(ada == 0){
		printf("Tidak ada data\n");
	}
	
	j = 1;
	ada = 0;
	printf(">>> B\n");
	for(i=0;i<n;i++){
		if(nilai[i] >= 80 && nilai[i] <= 89){
			printf("%d. %s\n", j, str[i]);
			j++;
			ada = 1;
		}
	}
	if(ada == 0){
		printf("Tidak ada data\n");
	}
	
	j = 1;
	ada = 0;	
	printf(">>> C\n");
	for(i=0;i<n;i++){
		if(nilai[i] >= 70 && nilai[i] <= 79){
			printf("%d %s\n", j, str[i]);
			j++;
			ada = 1;
		}
		
	if(ada == 0){
		printf("Tidak ada data\n");
	}
	
	j=1;
	ada = 0;
	printf(">>> D\n");
	for(i=0;i<n;i++){
		if(nilai[i] >= 60 && nilai[i] <= 69){
			printf("%d %s\n", j, str[i]);
			j++;
			ada = 1;
		}
	}	
	if(ada == 0){
		printf("Tidak ada data\n");
	}
	
	j=1;
	ada = 0;
	printf(">>> E\n");
	for(i=0;i<n;i++){
		if(nilai[i] < 60){
			printf("%d %s\n", str[i]);
			j++;
			ada = 1;
		}
	}
	if(ada == 0);
		printf("Tidak ada data\n");
	}
}

int main(){
	int n, i;
	scanf("%d", &n);
	
	char input[n][50];
	int nilai[n];
	
	for(i=0; i<n ;i++){
		scanf("%s %d", &input[i], &nilai[i]);
	}
	printf("\n");
	
	hasil(n, input, nilai);
	
	return 0;
}
	
	