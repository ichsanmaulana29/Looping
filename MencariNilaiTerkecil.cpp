#include<stdio.h>
#include<conio.h>

/*
	Program  	: Terkecil dari 2 bilangan
	Deskripsi 	: mencari nilai terkecil
	Penulis   	: Ichsan Maulana
	Tanggal   	: 09 Juni 2017
*/


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
