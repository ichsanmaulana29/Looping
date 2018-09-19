/*
 Ichsan Maulana
 Mencari Nilai Terkecil
 Dari dua Bilangan
*/


#include<stdio.h>
#include<conio.h>

main()
{
	//Program utama
	//deklarasi variabel
	int a,b;
	//input data
	printf("===Program Pencari Nilai Terkecil=== \n\n");
	printf("Masukan Nilai Pertama = ");
	scanf("%d",&a);
	printf("Masukan Nilai Kedua = ");
	scanf("%d",&b);
	//proses pemilihan
	if(a<b){
		printf("Bilangan terkecil adalah %d",a);
		}
			else if (b<a) {
			printf("Bilangan terkecil adalah %d",b);
			}
				else{
				printf("Nilai Tidak Ada Yang Besar Dan Kecil");
				}
	}
