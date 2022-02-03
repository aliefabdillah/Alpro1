/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz TP5 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>

int main(){
	int i, n, m;
	scanf("%d", &n);
	
	char arr[n];
	for(i=0;i<n;i++){
		scanf(" %c", &arr[i]);
	}
	int angka = 0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>=65 && arr[i]<=90){
			if(n <= 26){
				angka = arr[i] - n;
				if(angka < 65){
					angka = angka + 26;
				}
			}
			if(n > 26){
				m = n % 26;
				angka = arr[i] - m;
				if(angka < 65){
					angka = angka + 26;
				}
			}
		}
		
		if(arr[i]>=97 && arr[i]<=122){
			if(n <= 26){
				angka = arr[i] + n;
				if(angka > 122){
					angka = angka - 26;
				}
			}
			if(n > 26){
				m = n % 26;
				angka = arr[i] + m;
				if(angka > 122){
					angka = angka - 26;
				}
			}
		}
		printf("%c", angka);
	}
	printf("\n");
	return 0;
}