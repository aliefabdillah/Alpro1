
#include <stdio.h>

int main(){
// mendeklarasikan variabel input
	int angka[6];
	int genap = 0, ganjil = 0;
	int i,j;
	int hasil[6];
	int indek_genap[3];
	int indek_ganjil[3];
//membuat input untuk user
	for ( i = 0; i < 6; i++)
	{
		scanf("%d", &angka[i]);
	}

	
//membuat kemungkinan susunan genap ganjil
	for (i = 0; i < 6; i++)
	{
		if (angka[i] % 2 == 0)
		{
			genap++;
		}
		else
		{
			ganjil++;
		}
	}

	/*
	i=0;
	while(i<3)
	{
		for (j = 0; j < 6; j++)
		{
			if (j % 2 != 0)
			{
				indek_ganjil[i] = j;
				i++;
			}
			else if(j % 2 == 0) 
			{
				indek_genap[i] = j;
				i++;
			}
		}
	}
	*/
	
	if(genap != 3 && ganjil != 3)
	{
		printf("tidak valid\n");
	}
	else
	{
		for ( i = 0; i < 6; i++)
		{
			if (angka[i] % 2 == 0)
			{
				hasil[j] = angka[i];
			}
			else
			{
				hasil[0+i] = angka[i];
			}	
		}
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d\n", hasil[i]);
	}
	return 0;
}
	

//MASIH GAGAL