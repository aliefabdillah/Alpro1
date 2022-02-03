#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i = 0;
char lanjutkan = 't';
int pilihan = 0;
char selisih[100];

int main()
{	
	int elemen1 = 0, elemen2 = 0;
    char himpunanA[100], himpunanB[100];
    int i, j, idx = 0;
	i = 0;
    printf("            Masukkan elemen himpunan A : \n");
    printf("            => ");
    do
    {
        scanf("%s", &himpunanA[i]);
        elemen1++;
        i++;
    } while (himpunanA == ";");
    i = 0;
    printf("            Masukkan elemen himpunan B : \n");
    printf("            => ");
    do
    {
        scanf("%s", &himpunanB[i]);
        elemen2++;
        i++;
    } while (himpunanB != ";");
	
    printf("\n            Selisih A-B adalah : \n");
    printf("            => ");
    for ( i = 0; i < elemen1; i++)
    {
        for ( j = 0; j < elemen2; j++)
        {
            if (himpunanA[i] == himpunanB[j])
            {
				himpunanA[i] = '-';
				himpunanB[j] = '-';
			}
		}
	}
		i = 0;
		while (himpunanA[i] != '-')
		{
			selisih[idx] = himpunanA[i];
			i++;
			idx++;
		}
		
		j = 0;
		while (himpunanB[j] != '-')
		{
			selisih[idx] = himpunanB[j];
			j++;
			idx++;
		}
		selisih[idx] = '\0';
        printf("%s", selisih);
    printf("\n\n");
   return 0;
}