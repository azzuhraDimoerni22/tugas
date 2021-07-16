/* 
*program aplikasi pustaka buku pribadi
*/

// Nama : AZZUHRA DIMOERNI WARDHANI
// NMP  : 1604111010014

// menggunakan header(.h)
#include <stdio.h> 
#include <string.h>

char namabarang[100][50];
char lokasibarang[100][50];
int  jumlahstokbarang[100];
char kondisibarang[100][50];
int banyakstokbarang = 1;
char namabarangA[50];
char namabarangB[50];
char namabarangC[50];

// MINTAK MASUKKAN INFO BARANG
void mintainfobarang(){
	printf("\nMasukkan informasi barang\n");
	printf("\nnama barang:");
	scanf("%s", namabarang[banyakstokbarang]);
	printf("jumlah stok:");
	scanf("%d", &jumlahstokbarang[banyakstokbarang]);
	printf("lokasi penyimpanan barang:");
	scanf("%s", lokasibarang[banyakstokbarang]);
	printf("kondisi barang:");
	scanf("%s", kondisibarang[banyakstokbarang]);
	banyakstokbarang ++;
}

void tampilkan(int barangke){
	printf("\n--informasi barang:--\n");
	printf("nama barang : %s\n", namabarang[barangke]);
	printf("jumlah stok: %d\n", jumlahstokbarang[barangke]);
	printf("lokasi penyimpanan: %s\n", lokasibarang[barangke]);
	printf("kondisi: %s\n", kondisibarang[barangke]);
}

void tambahstokbarang(char tambahstokbarang[50]){
	int stokbarang;
	printf("\nMasukkan nama barang: ");
	scanf("%s",namabarangA);

	for (int a = 0; a < banyakstokbarang; a++) {
		if (strcmp(tambahstokbarang, namabarang[a]) == 0 ) { 
        printf("jumlah stok barang sebelumnya: %d\n", jumlahstokbarang[a]);
		printf("penambahan barang: ");
		scanf("%d", &stokbarang);	
		jumlahstokbarang[a] = jumlahstokbarang[a] + stokbarang;
		printf("jumlah akhir: %d\n", jumlahstokbarang[a]);
		}
	}
}

void tampilkanlaporan(){
	printf("\nStok semua barang: \n\n");
		for (int a = 1; a < banyakstokbarang; a++) {
			printf("nama barang: %s\n", namabarang[a]);
			printf("jumlah stok: %d\n", jumlahstokbarang[a]);
			printf("-----------\n");
		}
}

void tampilkanstokbarang(char tampilkanstokbarang[50]){
	int stokbarang;
	printf("\nMasukkan nama barang: ");
	scanf("%s",namabarangB);
	
		for (int a = 1; a < banyakstokbarang; a++) {
			if (strcmp(tampilkanstokbarang, namabarang[a]) == 0 ) { 
				printf("jumlah stok barang: %d\n", jumlahstokbarang[a]);
			}
			else{
				printf("\nMasukkan tidak diketahui!!\n");
		}
		}
}		

void informasibarang(char informasibarang[50]){
	printf("\nMasukkan nama barang: ");
	scanf("%s",namabarangC);

		for (int a = 0; a < banyakstokbarang; a++) {
			if (strcmp(informasibarang, namabarang[a]) == 0 ) { 
			tampilkan(a);
			}
		}
}	