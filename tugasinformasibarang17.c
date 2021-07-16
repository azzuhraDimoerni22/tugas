/* 
*program aplikasi pustaka buku pribadi
*/

// Nama : AZZUHRA DIMOERNI WARDHANI
// NMP  : 1604111010014

#include <stdio.h> 
#include <string.h>
#include "tugas17.h"

char namabarang[100][50];
char tempat[100][50];
int  jumlahbarang[100];
char kondisi[100][50];
char namabarangA[50];
char namabarangB[50];
char namabarangC[50];

			
int menu(){
    // Tampilkan menu
    printf("/-------------------------------\\ \n");
    printf("|                MENU           | \n");
    printf("|  A. Tambahkan barang       	| \n");
    printf("|  B. Tambah stok barang        | \n");
    printf("|  C. Laporan                   | \n");
    printf("|  D. Stok barang               | \n");
	printf("|  E. informasi barang          | \n");
	printf("|  F. Selesai                   | \n");
    printf("\\-------------------------------/ \n");
    printf("\n");
    
    // Variabel tampung pilihan, harus dideklarasi diluar do-while
    char pilihan[5] = "";

   do {
        // Minta pilihan
        printf("\nPilihan: ");
        scanf("%s", pilihan);
    
        // Tampilkan hasil pilihan
        if ( (strcmp(pilihan, "A") == 0) || (strcmp(pilihan, "a") == 0) ) {
			mintainfobarang();
        }
        else if ( (strcmp(pilihan, "B") == 0) || (strcmp(pilihan, "b") == 0) ) {
            tambahstokbarang(namabarangA);
        }
        else if ( (strcmp(pilihan, "C") == 0) || (strcmp(pilihan, "c") == 0) ) {
            tampilkanlaporan();
        }
		else if ( (strcmp(pilihan, "D") == 0) || (strcmp(pilihan, "d") == 0) ) {
            tampilkanstokbarang(namabarangB);
        }
        else if ( (strcmp(pilihan, "E") == 0) || (strcmp(pilihan, "e") == 0) ) {
            informasibarang(namabarangC);
        }
		else if ( (strcmp(pilihan, "F") == 0) || (strcmp(pilihan, "f") == 0) ) {
            printf("selesai\n");
        }
        else {
            printf("pilihan tidak diketahui\n");
        }
    
    } while(!((strcmp(pilihan, "F") == 0) || (strcmp(pilihan, "f") == 0)));
}

void main(){
	menu();
	
}