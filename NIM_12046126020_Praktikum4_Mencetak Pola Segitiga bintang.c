/*
 * Program   : Mencetak Pola Segitiga bintang
 * Nma       : Rendi Muhammad Padillah
 * NIM       : 12046126020
 * Deskripsi : Nested for loop untuk pola segitiga bintang
 */


#include <stdio.h>
int main() {
    int N;

    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("Masukkan jumlah baris: ");
    scanf("%d", &N);

    // lOOP luar: mengatur baris (1 sampai N)
    for (int i = 1; i <= N; i++) {
        //Loop dalam: cetak bintang sebanyak if
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n"); // pindah ke baris baru
    }
    return 0;
}
