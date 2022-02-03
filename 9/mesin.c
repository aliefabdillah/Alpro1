#include "header.h"

void input() {
	int n;
	scanf("%d", &n);
	char namaSiswa[25];
	int nilai;

	int i;

	for(i = 0; i < n; i++) {
		jumlah[i] = 0;
		scanf("%s%d", namaSiswa, &nilai);
		olahData(namaSiswa, nilai);
	}
	//olahData2(str, arr)
}

void olahData(char nama[], int nilai) {
	if(nilai >= 90 && nilai <= 100) {
		strcpy(siswaA[jumlah[0]++], nama);
		//jumlah[i]++
	}	
	else if(nilai >= 80 && nilai < 90) {
		strcpy(siswaB[jumlah[1]++], nama);
	}	
	else if(nilai >= 70 && nilai < 80) {
		strcpy(siswaC[jumlah[2]++], nama);
	}	
	else if(nilai >= 60 && nilai < 70) {
		strcpy(siswaD[jumlah[3]++], nama);
	}	
	else {
		strcpy(siswaE[jumlah[4]++], nama);
	}	
}

void output() {

	int i;

	//print siswa dengan nilai A
	printf(">>> A\n");
	if(jumlah[0] > 0) {
		for(i = 0; i < jumlah[0]; i++) {
			printf("%d. %s\n", i+1, siswaA[i]);
		}
	}
	else {
		printf("Tidak ada data.\n");
	}

	//print siswa dengan nilai B
	printf(">>> B\n");
	if(jumlah[1] > 0) {
		for(i = 0; i < jumlah[1]; i++) {
			printf("%d. %s\n", i+1, siswaB[i]);
		}
	}
	else {
		printf("Tidak ada data.\n");
	}

	//print siswa dengan nilai C
	printf(">>> C\n");
	if(jumlah[2] > 0) {
		for(i = 0; i < jumlah[2]; i++) {
			printf("%d. %s\n", i+1, siswaC[i]);
		}
	}
	else {
		printf("Tidak ada data.\n");
	}

	//print siswa dengan nilai D
	printf(">>> D\n");
	if(jumlah[3] > 0) {
		for(i = 0; i < jumlah[3]; i++) {
			printf("%d. %s\n", i+1, siswaD[i]);
		}
	}
	else {
		printf("Tidak ada data.\n");
	}

	//print siswa dengan nilai E
	printf(">>> E\n");
	if(jumlah[4] > 0) {
		for(i = 0; i < jumlah[4]; i++) {
			printf("%d. %s\n", i+1, siswaE[i]);
		}
	}
	else {
		printf("Tidak ada data.\n");
	}
}